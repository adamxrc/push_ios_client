
#import "APProtocol.h"

@class APClient;
@class APReadPacket;
@class APReceipt;

@interface APDispatch : APNetElement {
    UInt32 _fromUid;
}

@property (nonatomic, assign, readonly) UInt32 fromUid;

+ (APDispatch *)dispatchWithHeader:(const PROTOCOL_HEADER *)header;

- (void)handleForClient:(APClient *)client;
- (APReceipt *)receipt;

@end
