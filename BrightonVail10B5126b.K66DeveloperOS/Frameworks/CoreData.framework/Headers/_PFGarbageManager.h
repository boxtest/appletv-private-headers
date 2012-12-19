/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {
	NSMutableDictionary *_storeLinksDirs;	// 4 = 0x4
	NSMutableDictionary *_filesToCleanUp;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30ecabf1
+ (id)defaultInstance;	// 0x30ecac01
+ (void)initialize;	// 0x30ecabbd
- (void)_deleteIfNecessary:(id)necessary;	// 0x30ecac2d
- (void)_doCleanupForDir:(id)dir exceptURLs:(id)urls;	// 0x30ecaca5
- (id)_init__;	// 0x30ecab2d
- (BOOL)_isDeallocating;	// 0x30ecac21
- (BOOL)_tryRetain;	// 0x30ecac25
- (id)autorelease;	// 0x30ecac29
- (void)doCleanupForURL:(id)url;	// 0x30ecb34d
- (BOOL)registerURLForCleanup:(id)cleanup;	// 0x30ecaf09
- (void)release;	// 0x30ecac1d
- (void)removeDirectory:(id)directory;	// 0x30ecb309
- (id)retain;	// 0x30ecac11
- (unsigned)retainCount;	// 0x30ecac15
- (id)temporaryLinksDirectoryForStore:(id)store;	// 0x30ecb0f5
@end
