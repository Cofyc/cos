#import <Cocoa/Cocoa.h>

@class COStatsdController;

@interface COAppDelegate : NSObject {
    @private
    NSStatusBar *_statusBar;
    NSTimer *_checkTimer;
    NSStatusItem *_memoryStatusItem;
    NSStatusItem *_cpuStatusItem;
    NSStatusItem *_networkStatusItem;
    COStatsdController *_statsdController;
}

- (void)update:(NSTimer *)timer;

- (NSStatusItem*)newStatusItem:(NSString*)title;

- (void)drawCPUGraph:(CGFloat)user_percent withSysPercent:(CGFloat)sys_percent withIdlePercent:(CGFloat)idle_percent;

- (void)drawMemoryGraph:(CGFloat)mem_percent;

- (void)drawNetworkGraph:(CGFloat)networkIn withNetworkOut:(CGFloat)networkOut;

- (void)closeApp:(id)sender;

- (IBAction)editPreferences:(id)sender;

@end