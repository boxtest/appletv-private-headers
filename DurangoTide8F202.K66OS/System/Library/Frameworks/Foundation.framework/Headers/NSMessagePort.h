/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
@private
	void *_port;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x324905c9; S=0x324905b9; converted property
+ (void)_fixNSMessagePortLeak;	// 0x324905d9
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x324912b5
- (id)init;	// 0x32490695
- (id)initWithName:(id)name;	// 0x32491519
- (id)initWithRemoteName:(id)remoteName;	// 0x324915a1
- (void)dealloc;	// 0x32490c01
// converted property getter: - (id)delegate;	// 0x324905c9
- (void)finalize;	// 0x324909a5
- (void)invalidate;	// 0x32490f65
- (BOOL)isValid;	// 0x32490f49
- (id)name;	// 0x32490fd1
- (oneway void)release;	// 0x32490c65
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3249100d
- (id)retain;	// 0x32490be5
- (unsigned)retainCount;	// 0x32490c4d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x32491055
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x32490885
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x32490825
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x324908e1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x324905b9
- (BOOL)setName:(id)name;	// 0x32490fe9
@end
