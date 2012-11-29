/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
	void *_port;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x3259ff1d; S=0x3259ff0d; converted property
+ (void)_fixNSMessagePortLeak;	// 0x325a06d9
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x3259ff65
- (id)init;	// 0x325a06c5
- (id)initWithName:(id)name;	// 0x325a0389
- (id)initWithRemoteName:(id)remoteName;	// 0x325a065d
- (BOOL)_isDeallocating;	// 0x325a06dd
- (BOOL)_tryRetain;	// 0x325a06e1
- (void)dealloc;	// 0x325a0799
// converted property getter: - (id)delegate;	// 0x3259ff1d
- (void)finalize;	// 0x325a07e1
- (void)invalidate;	// 0x3259fe95
- (BOOL)isValid;	// 0x3259fe75
- (id)name;	// 0x3259ff2d
- (oneway void)release;	// 0x325a0701
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x325a0339
- (id)retain;	// 0x325a06e5
- (unsigned)retainCount;	// 0x325a0785
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x325a02e9
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x325a0229
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x325a0285
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x325a01cd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3259ff0d
- (BOOL)setName:(id)name;	// 0x3259ff41
@end
