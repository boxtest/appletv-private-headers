/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface InvocationTrampoline : NSObject {
	id _target;	// 4 = 0x4
}
@property(retain) id target;	// G=0x36f465d5; S=0x36f465b1; @synthesize=_target
- (void)dealloc;	// 0x36f4655d
- (void)forwardInvocation:(id)invocation;	// 0x36f45e69
- (id)methodSignatureForSelector:(SEL)selector;	// 0x36f4664d
- (void)performInvocation:(id)invocation;	// 0x36f45de9
- (BOOL)respondsToSelector:(SEL)selector;	// 0x36f465ed
// declared property setter: - (void)setTarget:(id)target;	// 0x36f465b1
// declared property getter: - (id)target;	// 0x36f465d5
@end

