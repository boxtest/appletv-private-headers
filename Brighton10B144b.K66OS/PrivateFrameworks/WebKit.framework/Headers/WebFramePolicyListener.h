/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebPolicyDecisionListener.h"
#import "WebFormSubmissionListener.h"
#import <NSObject.h> // Unknown library


@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
	Frame *m_frame;	// 4 = 0x4
}
+ (void)initialize;	// 0x3659be75
- (id)initWithWebCoreFrame:(Frame *)webCoreFrame;	// 0x3659be79
- (void)continue;	// 0x365d89e9
- (void)dealloc;	// 0x3659cf2d
- (void)download;	// 0x365d89d5
- (void)finalize;	// 0x365d88d5
- (void)ignore;	// 0x365a1fc9
- (void)invalidate;	// 0x365d87f5
- (void)receivedPolicyDecision:(int)decision;	// 0x3659c03d
- (void)use;	// 0x3659c029
@end
