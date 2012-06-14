/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"


@interface NSInvocationOperation : NSOperation {
@private
	id _inv;	// 12 = 0xc
	id _exception;	// 16 = 0x10
	void *_reserved2;	// 20 = 0x14
}
- (id)init;	// 0x320933b5
- (id)initWithInvocation:(id)invocation;	// 0x3209351d
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x320933c9
- (void)dealloc;	// 0x320935bd
- (id)invocation;	// 0x3209361d
- (void)main;	// 0x3209362d
- (id)result;	// 0x32093729
@end
