/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface BRInvocationAnimationDelegate : XXUnknownSuperclass {
	NSInvocation *_startInvocation;	// 4 = 0x4
	NSInvocation *_endInvocation;	// 8 = 0x8
	id _endTarget;	// 12 = 0xc
}
@property(readonly, retain) NSInvocation *endInvocation;	// G=0x384c41; converted property
@property(readonly, retain) NSInvocation *startInvocation;	// G=0x384c31; converted property
+ (id)delegateWithEndInvocation:(id)endInvocation;	// 0x3849a1
+ (id)delegateWithStartInvocation:(id)startInvocation;	// 0x3849f1
+ (id)delegateWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x384a41
+ (id)delegateWithTarget:(id)target endSelector:(SEL)selector;	// 0x384a91
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector;	// 0x384ac5
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector endSelector:(SEL)selector3;	// 0x384afd
- (id)initWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x384889
- (void)animationDidStart:(id)animation;	// 0x384c51
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x384cf9
- (void)dealloc;	// 0x384929
// converted property getter: - (id)endInvocation;	// 0x384c41
// converted property getter: - (id)startInvocation;	// 0x384c31
@end

