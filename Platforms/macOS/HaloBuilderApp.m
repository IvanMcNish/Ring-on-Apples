#import <Cocoa/Cocoa.h>

@interface HaloBuilderWindowController : NSWindowController <NSWindowDelegate>
@property (nonatomic, strong) NSPopUpButton *platformPopup;
@property (nonatomic, strong) NSButton *sideloadCheckbox;
@property (nonatomic, strong) NSButton *installCheckbox;
@property (nonatomic, strong) NSTextField *gameDataPathField;
@property (nonatomic, strong) NSButton *browseButton;
@property (nonatomic, strong) NSButton *buildButton;
@property (nonatomic, strong) NSButton *openDistButton;
@property (nonatomic, strong) NSProgressIndicator *spinner;
@property (nonatomic, strong) NSTextView *logTextView;
@property (nonatomic, strong) NSString *projectRoot;
@property (nonatomic, assign) BOOL isBuilding;
@end

@implementation HaloBuilderWindowController

- (instancetype)initWithProjectRoot:(NSString *)root {
    NSRect frame = NSMakeRect(0, 0, 700, 560);
    NSWindow *window = [[NSWindow alloc] initWithContentRect:frame
                                                   styleMask:(NSWindowStyleMaskTitled |
                                                              NSWindowStyleMaskClosable |
                                                              NSWindowStyleMaskMiniaturizable |
                                                              NSWindowStyleMaskResizable)
                                                     backing:NSBackingStoreBuffered
                                                       defer:NO];
    [window center];
    window.title = @"Halo: Combat Evolved - Apple Platforms Builder";
    window.minSize = NSMakeSize(640, 500);

    self = [super initWithWindow:window];
    if (self) {
        _projectRoot = root;
        [self setupUI];
    }
    return self;
}

- (void)setupUI {
    NSView *content = self.window.contentView;
    content.wantsLayer = YES;

    // Header Title
    NSTextField *titleLabel = [NSTextField labelWithString:@"Halo Combat Evolved — Apple Platforms Builder"];
    titleLabel.font = [NSFont boldSystemFontOfSize:17];
    titleLabel.frame = NSMakeRect(20, 515, 660, 24);
    [content addSubview:titleLabel];

    NSTextField *subLabel = [NSTextField labelWithString:@"Compila puertos nativos para iPhone, iPad, Apple TV 4K y Mac con un solo clic."];
    subLabel.textColor = [NSColor secondaryLabelColor];
    subLabel.frame = NSMakeRect(20, 492, 660, 20);
    [content addSubview:subLabel];

    // Platform Selector
    NSTextField *platLabel = [NSTextField labelWithString:@"Plataforma Destino:"];
    platLabel.font = [NSFont boldSystemFontOfSize:13];
    platLabel.frame = NSMakeRect(20, 455, 140, 20);
    [content addSubview:platLabel];

    self.platformPopup = [[NSPopUpButton alloc] initWithFrame:NSMakeRect(165, 452, 220, 26) pullsDown:NO];
    [self.platformPopup addItemsWithTitles:@[@"iOS / iPadOS (iPhone / iPad)",
                                            @"tvOS (Apple TV 4K)",
                                            @"macOS (Apple Silicon Mac)",
                                            @"Todas las Plataformas"]];
    [content addSubview:self.platformPopup];

    // Options Checkboxes
    self.sideloadCheckbox = [NSButton checkboxWithTitle:@"Generar .IPA listos para AltStore / Sideloadly / TrollStore" target:nil action:nil];
    self.sideloadCheckbox.state = NSControlStateValueOn;
    self.sideloadCheckbox.frame = NSMakeRect(20, 420, 450, 20);
    [content addSubview:self.sideloadCheckbox];

    self.installCheckbox = [NSButton checkboxWithTitle:@"Instalar automáticamente en dispositivo conectado (USB / Wi-Fi)" target:nil action:nil];
    self.installCheckbox.state = NSControlStateValueOn;
    self.installCheckbox.frame = NSMakeRect(20, 395, 480, 20);
    [content addSubview:self.installCheckbox];

    // GameData Folder Selector
    NSTextField *dataLabel = [NSTextField labelWithString:@"Carpeta GameData (Halo PC/Mac):"];
    dataLabel.font = [NSFont boldSystemFontOfSize:13];
    dataLabel.frame = NSMakeRect(20, 360, 300, 20);
    [content addSubview:dataLabel];

    self.gameDataPathField = [[NSTextField alloc] initWithFrame:NSMakeRect(20, 332, 530, 24)];
    self.gameDataPathField.placeholderString = @"Selecciona la carpeta con 'maps/' de tu copia de Halo...";
    
    // Auto-detect if GameData already exists
    NSString *existingData = [self.projectRoot stringByAppendingPathComponent:@"Assets/GameData"];
    NSString *testMap = [existingData stringByAppendingPathComponent:@"maps/bitmaps.map"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:testMap]) {
        self.gameDataPathField.stringValue = existingData;
    } else {
        // Try applications folder
        NSString *macAppMaps = [NSHomeDirectory() stringByAppendingPathComponent:@"Applications/Halo Combat Evolved.app/Contents/Resources/GameData"];
        if ([[NSFileManager defaultManager] fileExistsAtPath:[macAppMaps stringByAppendingPathComponent:@"maps/bitmaps.map"]]) {
            self.gameDataPathField.stringValue = macAppMaps;
        }
    }
    [content addSubview:self.gameDataPathField];

    self.browseButton = [NSButton buttonWithTitle:@"Examinar..." target:self action:@selector(onBrowseGameData:)];
    self.browseButton.frame = NSMakeRect(560, 331, 110, 26);
    [content addSubview:self.browseButton];

    // Build & Open Buttons
    self.buildButton = [NSButton buttonWithTitle:@"🚀 Iniciar Compilación" target:self action:@selector(onStartBuild:)];
    self.buildButton.bezelStyle = NSBezelStyleFlexiblePush;
    self.buildButton.font = [NSFont boldSystemFontOfSize:14];
    self.buildButton.keyEquivalent = @"\r";
    self.buildButton.frame = NSMakeRect(20, 288, 200, 34);
    [content addSubview:self.buildButton];

    self.openDistButton = [NSButton buttonWithTitle:@"📂 Abrir Carpeta dist/" target:self action:@selector(onOpenDist:)];
    self.openDistButton.frame = NSMakeRect(230, 288, 170, 34);
    [content addSubview:self.openDistButton];

    self.spinner = [[NSProgressIndicator alloc] initWithFrame:NSMakeRect(415, 296, 20, 20)];
    self.spinner.style = NSProgressIndicatorStyleSpinning;
    self.spinner.displayedWhenStopped = NO;
    [content addSubview:self.spinner];

    // Log Console
    NSScrollView *scrollView = [[NSScrollView alloc] initWithFrame:NSMakeRect(20, 20, 660, 255)];
    scrollView.borderType = NSBezelBorder;
    scrollView.hasVerticalScroller = YES;
    scrollView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;

    self.logTextView = [[NSTextView alloc] initWithFrame:scrollView.bounds];
    self.logTextView.editable = NO;
    self.logTextView.richText = NO;
    self.logTextView.font = [NSFont userFixedPitchFontOfSize:11];
    self.logTextView.backgroundColor = [NSColor textBackgroundColor];
    self.logTextView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;

    scrollView.documentView = self.logTextView;
    [content addSubview:scrollView];

    [self appendLog:@"Listo. Configura tus opciones y presiona 'Iniciar Compilación'.\nNota legal: Este proyecto no contiene assets con copyright; provee tu propia carpeta de Halo PC/Mac.\n"];
}

- (void)appendLog:(NSString *)text {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSAttributedString *attr = [[NSAttributedString alloc] initWithString:text attributes:@{
            NSFontAttributeName: [NSFont userFixedPitchFontOfSize:11]
        }];
        [self.logTextView.textStorage appendAttributedString:attr];
        [self.logTextView scrollRangeToVisible:NSMakeRange(self.logTextView.string.length, 0)];
    });
}

- (void)onBrowseGameData:(id)sender {
    NSOpenPanel *panel = [NSOpenPanel openPanel];
    panel.canChooseFiles = NO;
    panel.canChooseDirectories = YES;
    panel.allowsMultipleSelection = NO;
    panel.prompt = @"Seleccionar Carpeta";
    panel.message = @"Selecciona la carpeta que contiene el directorio 'maps/' con los archivos del juego:";

    if ([panel runModal] == NSModalResponseOK) {
        NSURL *url = panel.URLs.firstObject;
        if (url) {
            self.gameDataPathField.stringValue = url.path;
            [self appendLog:[NSString stringWithFormat:@"Carpeta de datos seleccionada: %@\n", url.path]];
        }
    }
}

- (void)onOpenDist:(id)sender {
    NSString *distDir = [self.projectRoot stringByAppendingPathComponent:@"dist"];
    [[NSWorkspace sharedWorkspace] openURL:[NSURL fileURLWithPath:distDir]];
}

- (void)onStartBuild:(id)sender {
    if (self.isBuilding) return;

    NSString *dataPath = [self.gameDataPathField.stringValue stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (dataPath.length == 0 || ![[NSFileManager defaultManager] fileExistsAtPath:dataPath]) {
        NSAlert *alert = [[NSAlert alloc] init];
        alert.messageText = @"Carpeta GameData Requerida";
        alert.informativeText = @"Por favor selecciona la carpeta que contiene los archivos de Halo (carpeta 'maps/'). Este proyecto no incluye assets comerciales.";
        [alert runModal];
        return;
    }

    // Link/copy GameData to Assets/GameData if needed
    NSString *targetGameData = [self.projectRoot stringByAppendingPathComponent:@"Assets/GameData"];
    if (![dataPath isEqualToString:targetGameData]) {
        NSString *targetMaps = [targetGameData stringByAppendingPathComponent:@"maps"];
        if (![[NSFileManager defaultManager] fileExistsAtPath:targetMaps]) {
            [self appendLog:[NSString stringWithFormat:@"Vinculando datos de Halo hacia Assets/GameData...\n"]];
            NSString *srcMaps = [dataPath stringByAppendingPathComponent:@"maps"];
            if ([[NSFileManager defaultManager] fileExistsAtPath:srcMaps]) {
                [[NSFileManager defaultManager] createSymbolicLinkAtPath:targetMaps withDestinationPath:srcMaps error:nil];
            }
        }
    }

    self.isBuilding = YES;
    self.buildButton.enabled = NO;
    [self.spinner startAnimation:nil];

    NSInteger sel = self.platformPopup.indexOfSelectedItem;
    NSString *targetArg = @"ios";
    if (sel == 1) targetArg = @"tvos";
    else if (sel == 2) targetArg = @"macos";
    else if (sel == 3) targetArg = @"all";

    BOOL skipIpa = (self.sideloadCheckbox.state != NSControlStateValueOn);
    BOOL doInstall = (self.installCheckbox.state == NSControlStateValueOn);

    [self appendLog:[NSString stringWithFormat:@"\n========================================\nIniciando compilación para: %@\n========================================\n", targetArg]];

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        NSMutableArray *args = [NSMutableArray arrayWithObjects:[self.projectRoot stringByAppendingPathComponent:@"build.py"], targetArg, nil];
        if (skipIpa) [args addObject:@"--skip-ipa"];

        NSTask *task = [[NSTask alloc] init];
        task.launchPath = @"/usr/bin/python3";
        task.arguments = args;
        task.currentDirectoryPath = self.projectRoot;

        NSPipe *pipe = [NSPipe pipe];
        task.standardOutput = pipe;
        task.standardError = pipe;

        NSFileHandle *file = [pipe fileHandleForReading];
        file.readabilityHandler = ^(NSFileHandle *handle) {
            NSData *data = [handle availableData];
            if (data.length > 0) {
                NSString *str = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
                if (str) [self appendLog:str];
            }
        };

        [task launch];
        [task waitUntilExit];
        file.readabilityHandler = nil;

        if (task.terminationStatus == 0) {
            [self appendLog:@"\n🎉 ¡Compilación completada exitosamente!\n"];
            if (doInstall && (sel == 0 || sel == 1 || sel == 3)) {
                [self appendLog:@"\nIniciando instalación en dispositivos conectados...\n"];
                NSTask *installTask = [[NSTask alloc] init];
                installTask.launchPath = @"/usr/bin/python3";
                installTask.arguments = @[[self.projectRoot stringByAppendingPathComponent:@"build.py"],
                                          sel == 1 ? @"--install-tvos" : @"--install-ios"];
                installTask.currentDirectoryPath = self.projectRoot;
                NSPipe *inPipe = [NSPipe pipe];
                installTask.standardOutput = inPipe;
                installTask.standardError = inPipe;
                inPipe.fileHandleForReading.readabilityHandler = ^(NSFileHandle *h) {
                    NSData *d = [h availableData];
                    if (d.length > 0) {
                        NSString *s = [[NSString alloc] initWithData:d encoding:NSUTF8StringEncoding];
                        if (s) [self appendLog:s];
                    }
                };
                [installTask launch];
                [installTask waitUntilExit];
                inPipe.fileHandleForReading.readabilityHandler = nil;
            }
        } else {
            [self appendLog:[NSString stringWithFormat:@"\n❌ Error durante la compilación (código %d)\n", task.terminationStatus]];
        }

        dispatch_async(dispatch_get_main_queue(), ^{
            self.isBuilding = NO;
            self.buildButton.enabled = YES;
            [self.spinner stopAnimation:nil];
        });
    });
}

@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSApplication *app = [NSApplication sharedApplication];
        [app setActivationPolicy:NSApplicationActivationPolicyRegular];

        NSString *root = [[NSBundle mainBundle] bundlePath];
        if ([root hasSuffix:@".app"]) {
            root = [root stringByDeletingLastPathComponent]; // dist/
            root = [root stringByDeletingLastPathComponent]; // repo root
        } else {
            root = [[NSFileManager defaultManager] currentDirectoryPath];
        }

        HaloBuilderWindowController *wc = [[HaloBuilderWindowController alloc] initWithProjectRoot:root];
        [wc showWindow:nil];
        [app activateIgnoringOtherApps:YES];
        [app run];
    }
    return 0;
}
