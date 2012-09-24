/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCache, NSString;

@interface CPBitmapStore : NSObject {
	NSString *_path;	// 4 = 0x4
	NSString *_imagePath;	// 8 = 0x8
	NSCache *_cache;	// 12 = 0xc
	int _version;	// 16 = 0x10
}
@property(readonly, retain) NSString *imagePath;	// G=0x3074b01d; converted property
@property(readonly, assign, nonatomic) int version;	// G=0x3074b175; 
+ (id)CPBitmapStoreWithPath:(id)path version:(int)version useDirectHashing:(BOOL)hashing;	// 0x3074a2d1
- (id)initWithPath:(id)path version:(int)version;	// 0x3074a331
- (CGImageRef)_copyAndStoreImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale fillMem:(id)mem alternateCompletion:(id)completion;	// 0x3074a765
- (id)_versionPath;	// 0x3074b121
- (id)allGroups;	// 0x3074a5a5
- (void)commitTransaction;	// 0x3074ad71
- (void)commitTxn;	// 0x3074a5c1
- (CGImageRef)copyAndStoreImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale draw:(id)draw;	// 0x3074a9d9
- (CGImageRef)copyImageForKey:(id)key;	// 0x3074a5a1
- (CGImageRef)copyImageForKey:(id)key inGroup:(id)group;	// 0x3074a5c5
- (void)dealloc;	// 0x3074a441
- (BOOL)findImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x3074a545
- (int)imageCount;	// 0x3074b079
- (id)imageNameForKey:(id)key inGroup:(id)group;	// 0x3074a4b9
// converted property getter: - (id)imagePath;	// 0x3074b01d
- (unsigned)memContentOffset;	// 0x3074a59d
- (void *)openAndMmap:(id)mmap withInfo:(img *)info;	// 0x3074a565
- (void)purge;	// 0x3074b0d9
- (void)removeImagesInGroups:(id)groups;	// 0x3074ad75
- (BOOL)saveImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x3074a561
- (int)setVersion:(int)version;	// 0x3074b231
- (void)storeImageForKey:(id)key inGroup:(id)group opaque:(BOOL)opaque image:(CGImageRef)image;	// 0x3074abb1
// declared property getter: - (int)version;	// 0x3074b175
@end
