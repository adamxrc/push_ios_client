
#import <UIKit/UIKit.h>

@interface InfoDetailViewController : UIViewController {
    UILabel *_infoLabel;
    UILabel *_tokenLabel;
    UILabel *_udidLabel;
    NSString *_info;
}

-(id)initWithInfo:(NSString *)info;

@end
