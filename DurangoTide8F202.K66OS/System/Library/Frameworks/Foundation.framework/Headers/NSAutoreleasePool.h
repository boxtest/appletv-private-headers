/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSAutoreleasePool : NSObject {
@private
	void *_token;	// 4 = 0x4
	void *_reserved3;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (void)addObject:(id)object;	// 0x32456815
+ (id)allocWithZone:(NSZone *)zone;	// 0x3240fbc5
+ (BOOL)autoreleasePoolExists;	// 0x32456669
+ (unsigned)autoreleasedObjectCount;	// 0x32456661
+ (void)enableFreedObjectCheck:(BOOL)check;	// 0x32456671
+ (void)enableRelease:(BOOL)release;	// 0x3245666d
+ (unsigned)poolCountHighWaterMark;	// 0x32456675
+ (unsigned)poolCountHighWaterResolution;	// 0x3245667d
+ (void)releaseAllPools;	// 0x3245665d
+ (void)resetTotalAutoreleasedObjects;	// 0x32456689
+ (void)setPoolCountHighWaterMark:(unsigned)mark;	// 0x32456679
+ (void)setPoolCountHighWaterResolution:(unsigned)resolution;	// 0x32456681
+ (void)showPools;	// 0x324567ed
+ (unsigned)topAutoreleasePoolCount;	// 0x32456665
+ (unsigned)totalAutoreleasedObjects;	// 0x32456685
- (id)init;	// 0x3240fc39
- (id)initWithCapacity:(unsigned)capacity;	// 0x32456759
- (void)addObject:(id)object;	// 0x32456785
- (id)autorelease;	// 0x324566a9
- (void)dealloc;	// 0x3245668d
- (void)drain;	// 0x3241eb79
- (oneway void)release;	// 0x32410169
- (id)retain;	// 0x32456701
- (unsigned)retainCount;	// 0x32456659
@end
