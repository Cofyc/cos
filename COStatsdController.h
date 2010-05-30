#import <Cocoa/Cocoa.h>
#import <Security/Security.h>

@interface COStatsdController : NSObject {
    @private
    CFSocketNativeHandle fd;
    CFSocketRef socketRef;
}

@property(readwrite) CGFloat percent;
@property(readwrite) CGFloat cpu_user_percent; 
@property(readwrite) CGFloat cpu_sys_percent; 
@property(readwrite) CGFloat cpu_idle_percent; 

+ (COStatsdController*)sharedStatsdController;

- (void)parseStats:(struct stats_struct *)stats;

- (void)stats;

@end
