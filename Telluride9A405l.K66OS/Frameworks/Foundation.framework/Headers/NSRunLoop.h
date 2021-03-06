/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSRunLoop.h> // Unknown library


@interface NSRunLoop (NSRunLoop)
+ (id)_new:(id)aNew;	// 0x3026b051
+ (id)currentRunLoop;	// 0x30250509
+ (id)mainRunLoop;	// 0x30281979
- (id)init;	// 0x302e88d9
- (void)_addPort:(id)port forMode:(id)mode;	// 0x302e839d
- (BOOL)_containsPort:(id)port forMode:(id)mode;	// 0x302e81f9
- (void)_enumerateInfoPairsWithBlock:(id)block;	// 0x302e7dc1
- (void)_invalidateTimers;	// 0x302e8ef1
- (void)_portInvalidated:(id)invalidated;	// 0x302e7e99
- (void)_removePort:(id)port forMode:(id)mode;	// 0x302e85a1
- (void)_wakeup;	// 0x302e9019
- (void)acceptInputForMode:(id)mode beforeDate:(id)date;	// 0x302e9045
- (void)addPort:(id)port forMode:(id)mode;	// 0x302e8955
- (void)addTimer:(id)timer forMode:(id)mode;	// 0x30277a21
- (id)allModes;	// 0x302e8e9d
- (void)cancelPerformSelector:(SEL)selector target:(id)target argument:(id)argument;	// 0x302e94d1
- (void)cancelPerformSelectorsWithTarget:(id)target;	// 0x3027aab9
- (BOOL)containsPort:(id)port forMode:(id)mode;	// 0x302e8b81
- (BOOL)containsTimer:(id)timer forMode:(id)mode;	// 0x302e8da9
- (id)copyWithZone:(NSZone *)zone;	// 0x302e88c9
- (id)currentMode;	// 0x30255b3d
- (void)dealloc;	// 0x3026e38d
- (id)description;	// 0x302e88f1
- (CFRunLoopRef)getCFRunLoop;	// 0x30250539
- (id)limitDateForMode:(id)mode;	// 0x302e8ef5
- (void)performSelector:(SEL)selector target:(id)target argument:(id)argument order:(unsigned)order modes:(id)modes;	// 0x3026b5f5
- (id)portsForMode:(id)mode;	// 0x302e8c81
- (void)removePort:(id)port forMode:(id)mode;	// 0x302e8a81
- (void)removeTimer:(id)timer forMode:(id)mode;	// 0x302e8c9d
- (void)run;	// 0x3026c4e5
- (BOOL)runBeforeDate:(id)date;	// 0x302e9235
- (BOOL)runMode:(id)mode beforeDate:(id)date;	// 0x30252a85
- (BOOL)runMode:(id)mode untilDate:(id)date;	// 0x302e9141
- (void)runUntilDate:(id)date;	// 0x30277b11
- (id)timersForMode:(id)mode;	// 0x302e8d8d
@end

