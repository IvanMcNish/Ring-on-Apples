/* Compile the POSIX network backend under a private host namespace. */
#include "posix_backend_names.h"
#undef posix_socket_sendto
#define posix_socket_sendto mac_native_posix_socket_sendto_original
#include "posix_net.c"
#undef posix_socket_sendto

/* Preserve the backend's Winsock error namespace for bridge validation too. */
int mac_native_posix_bridge_error(int error)
{
 errno = error;
 return fail();
}

#include <ifaddrs.h>
#include <net/if.h>

static unsigned long s_extra_broadcast_targets[128];
static int s_extra_broadcast_target_count = 0;
static int s_subnet_broadcast_initialized = 0;

void halo_network_add_broadcast_target(unsigned long address)
{
	int i;
	if (address == 0 || address == INADDR_BROADCAST)
		return;
	for (i = 0; i < s_extra_broadcast_target_count; i++)
	{
		if (s_extra_broadcast_targets[i] == address)
			return;
	}
	if (s_extra_broadcast_target_count < 128)
	{
		s_extra_broadcast_targets[s_extra_broadcast_target_count++] = address;
	}
}

static void init_subnet_broadcasts(void)
{
	if (s_subnet_broadcast_initialized)
		return;
	s_subnet_broadcast_initialized = 1;

	struct ifaddrs *ifap = NULL;
	if (getifaddrs(&ifap) == 0 && ifap)
	{
		struct ifaddrs *ifa = ifap;
		while (ifa)
		{
			if (ifa->ifa_addr && ifa->ifa_addr->sa_family == AF_INET &&
			    (ifa->ifa_flags & IFF_UP) && (ifa->ifa_flags & IFF_BROADCAST) &&
			    !(ifa->ifa_flags & IFF_LOOPBACK) && ifa->ifa_broadaddr)
			{
				struct sockaddr_in *baddr = (struct sockaddr_in *)ifa->ifa_broadaddr;
				if (baddr->sin_addr.s_addr != 0 && baddr->sin_addr.s_addr != INADDR_BROADCAST)
				{
					halo_network_add_broadcast_target(baddr->sin_addr.s_addr);
				}
			}
			ifa = ifa->ifa_next;
		}
		freeifaddrs(ifap);
	}
}

/* Darwin rejects a destination on a connected socket even when it is its
 * existing peer. Linux/Winsock callers use sendto in this situation. Retry
 * with send only after proving exact IPv4 endpoint equality; alternate peers
 * retain the original failure rather than silently reaching the wrong peer. */
int mac_native_posix_socket_sendto(int socket, const void *buffer, int length,
 int flags, const void *address, int address_length)
{
 init_subnet_broadcasts();

 if (address && address_length == (int)sizeof(struct sockaddr_in))
 {
  struct sockaddr_in const *destination = (struct sockaddr_in const *)address;
  if (destination->sin_family == AF_INET && destination->sin_addr.s_addr == INADDR_BROADCAST)
  {
   /* Fan-out broadcast to directed subnet broadcast and all Bonjour / direct IP peers */
   int i;
   for (i = 0; i < s_extra_broadcast_target_count; i++)
   {
    struct sockaddr_in target = *destination;
    target.sin_addr.s_addr = s_extra_broadcast_targets[i];
    (void)sendto(socket, buffer, (size_t)length, flags | MSG_NOSIGNAL,
                 (const struct sockaddr *)&target, sizeof(target));
   }
  }
 }

 int result = mac_native_posix_socket_sendto_original(socket, buffer, length, flags, address, address_length);
 if (result < 0 && errno == EISCONN && address && address_length == sizeof(struct sockaddr_in))
 {
  int saved_error = errno;
  struct sockaddr_in peer;
  socklen_t peer_length = sizeof(peer);
  struct sockaddr_in const *destination = address;
  if (destination->sin_family == AF_INET && !getpeername(socket, (struct sockaddr *)&peer, &peer_length) &&
      peer_length == sizeof(peer) && peer.sin_family == AF_INET &&
      peer.sin_addr.s_addr == destination->sin_addr.s_addr && peer.sin_port == destination->sin_port)
   return succeed((int)send(socket, buffer, (size_t)length, flags | MSG_NOSIGNAL));
  errno = saved_error;
 }
 return result;
}
