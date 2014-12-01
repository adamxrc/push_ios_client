

#import <UIKit/UIKit.h>

@interface PushViewController : UIViewController <UIWebViewDelegate> {
    UIWebView *_webView;
    UIBarButtonItem *_leftButton;
    UIBarButtonItem *_rightButton;
    NSString *_info;
}

@end
