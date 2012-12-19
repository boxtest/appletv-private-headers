/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
	NSURLCacheInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned diskCapacity;	// G=0x3196db65; S=0x3196d8f5; converted property
@property(assign) unsigned memoryCapacity;	// G=0x3196db85; S=0x3196d8cd; converted property
+ (void)_diskCacheSyncLoop:(id)loop;	// 0x31a1b201
+ (void)_performDiskCacheSync;	// 0x31a1b1e5
+ (void)setSharedURLCache:(id)cache;	// 0x31981459
+ (id)sharedURLCache;	// 0x3196d571
- (id)init;	// 0x3196d665
- (id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;	// 0x31a1a861
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x3196d691
- (CFURLCacheRef)_CFURLCache;	// 0x3196d9b1
- (id)_cacheDirectory;	// 0x3196d9ad
- (XXStruct_K5nmsA)_cacheStatistics;	// 0x31a1ab01
- (void)_diskCacheClear;	// 0x31a1bc91
- (BOOL)_diskCacheCreateDirectory;	// 0x31a1b729
- (void)_diskCacheCreateLRUList:(id)list;	// 0x31a1b64d
- (id)_diskCacheDefaultPath;	// 0x3196d951
- (void)_diskCacheExecuteRemoval:(id)removal;	// 0x31a1c2bd
- (void)_diskCacheExecuteWrite:(id)write;	// 0x31a1bf8d
- (id)_diskCacheGet:(id)get;	// 0x31a1b835
- (void)_diskCacheScheduleRemoval:(id)removal;	// 0x31a1c1e1
- (void)_diskCacheScheduleWrite:(id)write;	// 0x31a1bec1
- (void)_diskCacheSetSyncTimer;	// 0x31a1b2b5
- (void)_diskCacheSync;	// 0x31a1b381
- (void)_diskCacheTruncate:(unsigned)truncate;	// 0x31a1bd55
- (void)_memoryCacheAppendNodeToLRUList:(id)lrulist;	// 0x31a1ac71
- (void)_memoryCacheClear;	// 0x31a1b139
- (id)_memoryCacheGet:(id)get;	// 0x31a1ae51
- (void)_memoryCachePut:(id)put;	// 0x31a1af09
- (void)_memoryCacheRemove:(id)remove;	// 0x31a1b039
- (void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;	// 0x31a1ab99
- (void)_memoryCacheTouchNode:(id)node;	// 0x31a1acf1
- (void)_memoryCacheTruncate:(unsigned)truncate;	// 0x31a1ad49
- (CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;	// 0x31a1a6a1
- (long)_nscfBridgeURLCacheCurrentDiskUsage;	// 0x31a1a851
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;	// 0x31a1a841
- (long)_nscfBridgeURLCacheDiskCapacity;	// 0x31a1a7e1
- (long)_nscfBridgeURLCacheMemoryCapacity;	// 0x31a1a831
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;	// 0x31a1a821
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;	// 0x31a1a811
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;	// 0x31a1a801
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;	// 0x31a1a7f1
- (void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;	// 0x31a1a721
- (id)cachedResponseForRequest:(id)request;	// 0x31a1a931
- (unsigned)currentDiskUsage;	// 0x31a1aae1
- (unsigned)currentMemoryUsage;	// 0x31a1aac1
- (void)dealloc;	// 0x31a1ab4d
// converted property getter: - (unsigned)diskCapacity;	// 0x3196db65
// converted property getter: - (unsigned)memoryCapacity;	// 0x3196db85
- (void)removeAllCachedResponses;	// 0x31996495
- (void)removeCachedResponseForRequest:(id)request;	// 0x31a1aa79
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x3196d8f5
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x3196d8cd
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x31a1aa05
@end
