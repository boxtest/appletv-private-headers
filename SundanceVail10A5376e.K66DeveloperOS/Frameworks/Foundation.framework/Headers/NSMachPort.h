/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMachPort : NSPort {
	id _delegate;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	unsigned _machPort;	// 12 = 0xc
	unsigned _reserved;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x34dca31d; S=0x34dca2a9; converted property
@property(readonly, assign) unsigned machPort;	// G=0x34dca255; converted property
+ (void)_fixNSMachPortLeak;	// 0x34dc9e25
+ (id)port;	// 0x34dc9cb5
+ (id)portWithMachPort:(unsigned)machPort;	// 0x34dc9cf1
+ (id)portWithMachPort:(unsigned)machPort options:(unsigned)options;	// 0x34dc9d31
+ (void)resetAllPorts;	// 0x34dc9cb1
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x34dca389
- (id)init;	// 0x34dcad89
- (id)initWithMachPort:(unsigned)machPort;	// 0x34dcad75
- (id)initWithMachPort:(unsigned)machPort options:(unsigned)options;	// 0x34dcab0d
- (unsigned long)_cfTypeID;	// 0x34dc9d75
- (BOOL)_isDeallocating;	// 0x34dc9f95
- (BOOL)_tryRetain;	// 0x34dc9f99
- (void)dealloc;	// 0x34dcae01
// converted property getter: - (id)delegate;	// 0x34dca31d
- (void)finalize;	// 0x34dcae2d
- (unsigned)hash;	// 0x34dc9dd1
- (void)invalidate;	// 0x34dca151
- (BOOL)isEqual:(id)equal;	// 0x34dc9d79
- (BOOL)isKindOfClass:(Class)aClass;	// 0x34dc9ff1
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x34dca075
- (BOOL)isValid;	// 0x34dca0f9
// converted property getter: - (unsigned)machPort;	// 0x34dca255
- (oneway void)release;	// 0x34dc9ebd
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x34dcaa69
- (id)retain;	// 0x34dc9e29
- (unsigned)retainCount;	// 0x34dc9f9d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x34dca9c5
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x34dca905
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x34dca961
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x34dca8a9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34dca2a9
@end
