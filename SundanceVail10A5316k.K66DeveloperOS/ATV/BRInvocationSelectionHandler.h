/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface BRInvocationSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSInvocation *_invocation;	// 4 = 0x4
	BOOL _useInvocationReturnValue;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x326365; converted property
@property(assign) BOOL useInvocationReturnValue;	// G=0x326469; S=0x326459; converted property
+ (id)handlerWithInvocation:(id)invocation;	// 0x326375
+ (id)handlerWithTarget:(id)target selector:(SEL)selector;	// 0x3263c1
- (id)initWithInvocation:(id)invocation;	// 0x3262a9
- (void)dealloc;	// 0x326319
- (BOOL)handleSelectionForControl:(id)control;	// 0x326479
// converted property getter: - (id)invocation;	// 0x326365
// converted property setter: - (void)setUseInvocationReturnValue:(BOOL)value;	// 0x326459
// converted property getter: - (BOOL)useInvocationReturnValue;	// 0x326469
@end
