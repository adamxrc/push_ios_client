
#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    UIWindow *_window;
    NSString *_deviceToken;
}

@property (nonatomic,strong) NSString *deviceToken;

@end
