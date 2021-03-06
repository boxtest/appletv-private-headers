/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPolicyDecisionListener.h"
#import <NSObject.h> // Unknown library
#import "NSObject.h"

@class WebPolicyDecisionListenerPrivate;

@protocol WebPolicyDecisionListener <NSObject>
- (void)download;
- (void)ignore;
- (void)use;
@end

__attribute__((visibility("hidden")))
@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
@private
	WebPolicyDecisionListenerPrivate *_private;	// 4 = 0x4
}
- (id)_initWithTarget:(id)target action:(SEL)action;	// 0x339ff14d
- (void)_invalidate;	// 0x339ff20d
- (void)_usePolicy:(int)policy;	// 0x339ff241
- (void)dealloc;	// 0x339ff27d
- (void)download;	// 0x339ff1d1
- (void)ignore;	// 0x339ff1e5
- (void)use;	// 0x339ff1f9
@end

