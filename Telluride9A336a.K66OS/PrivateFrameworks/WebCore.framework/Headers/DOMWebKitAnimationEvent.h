/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitAnimationEvent : DOMEvent {
}
@property(readonly, copy) NSString *animationName;	// G=0x31c2b451; 
@property(readonly, assign) double elapsedTime;	// G=0x31c2b525; 
- (void)initWebKitAnimationEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 animationNameArg:(id)arg4 elapsedTimeArg:(double)arg5;	// 0x31c2b5e5
// declared property getter: - (id)animationName;	// 0x31c2b451
// declared property getter: - (double)elapsedTime;	// 0x31c2b525
@end
