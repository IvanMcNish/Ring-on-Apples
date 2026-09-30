/*
HALO_PLATFORM.H

Unified platform detection for the Halo renderer.
On Apple's mobile platforms (iOS/iPadOS), we compile with HALO_MACOS=1 for
platform services but need OpenGL ES rendering paths (like Android).
This header defines HALO_USE_GLES so rendering code can select the correct path.
*/

#ifndef HALO_PLATFORM_H
#define HALO_PLATFORM_H

#include <TargetConditionals.h>

#if (defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE) || (defined(TARGET_OS_TV) && TARGET_OS_TV)
#define HALO_USE_GLES 1
#endif

#endif /* HALO_PLATFORM_H */
