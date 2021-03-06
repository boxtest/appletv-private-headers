/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSAutoreleasePool : NSObject {
@private
	void *_token;	// 4 = 0x4
	void *_reserved3;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (void)addObject:(id)object;	// 0x336a1e55
+ (id)allocWithZone:(NSZone *)zone;	// 0x336487e5
+ (BOOL)autoreleasePoolExists;	// 0x336a1fad
+ (unsigned)autoreleasedObjectCount;	// 0x336a1fa5
+ (void)enableFreedObjectCheck:(BOOL)check;	// 0x336a1fb5
+ (void)enableRelease:(BOOL)release;	// 0x336a1fb1
+ (unsigned)poolCountHighWaterMark;	// 0x336a1fb9
+ (unsigned)poolCountHighWaterResolution;	// 0x336a1fc1
+ (void)releaseAllPools;	// 0x336a1fa1
+ (void)resetTotalAutoreleasedObjects;	// 0x336a1fcd
+ (void)setPoolCountHighWaterMark:(unsigned)mark;	// 0x336a1fbd
+ (void)setPoolCountHighWaterResolution:(unsigned)resolution;	// 0x336a1fc5
+ (void)showPools;	// 0x336a1f9d
+ (unsigned)topAutoreleasePoolCount;	// 0x336a1fa9
+ (unsigned)totalAutoreleasedObjects;	// 0x336a1fc9
- (id)init;	// 0x3364885d
- (id)initWithCapacity:(unsigned)capacity;	// 0x336a1e5d
- (void)addObject:(id)object;	// 0x336a1e91
- (id)autorelease;	// 0x336a1f35
- (void)dealloc;	// 0x336a1f81
- (void)drain;	// 0x33651a71
- (oneway void)release;	// 0x3364abe1
- (id)retain;	// 0x336a1ee5
- (unsigned)retainCount;	// 0x336a1f31
@end

