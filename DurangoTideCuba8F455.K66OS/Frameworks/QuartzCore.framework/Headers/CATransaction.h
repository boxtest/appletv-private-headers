/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface CATransaction : NSObject {
}
+ (double)animationDuration;	// 0x3341ba09
+ (id)animationTimingFunction;	// 0x3341b9e9
+ (void)begin;	// 0x3338f5f1
+ (BOOL)beginWithoutBlocking;	// 0x3341b969
+ (void)commit;	// 0x33390869
+ (id)completionBlock;	// 0x3341b9a5
+ (unsigned)currentState;	// 0x3341bb29
+ (BOOL)disableActions;	// 0x3341b9c5
+ (void)flush;	// 0x3339ddb1
+ (void)lock;	// 0x333b8a29
+ (void)setAnimationDuration:(double)duration;	// 0x3341ba51
+ (void)setAnimationTimingFunction:(id)function;	// 0x3341ba35
+ (void)setCompletionBlock:(id)block;	// 0x3341ba71
+ (void)setDisableActions:(BOOL)actions;	// 0x3338fad5
+ (void)setValue:(id)value forKey:(id)key;	// 0x3338f6e5
+ (void)synchronize;	// 0x3339f425
+ (void)unlock;	// 0x333b8a39
+ (id)valueForKey:(id)key;	// 0x3341bab9
- (void)_addTimer:(CFRunLoopTimerRef)timer;	// 0x3341b919
@end
