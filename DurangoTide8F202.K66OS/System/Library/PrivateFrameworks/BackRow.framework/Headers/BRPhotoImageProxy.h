/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRImageProxy.h"

@class BRPhotoMediaAsset, BRPhotoMediaCollection;

@interface BRPhotoImageProxy : NSObject <BRImageProxy> {
@private
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
	BRPhotoMediaCollection *_collection;	// 8 = 0x8
}
@property(readonly, retain) BRPhotoMediaAsset *asset;	// G=0x328df94d; converted property
+ (id)imageProxyWithAsset:(id)asset;	// 0x328dff15
+ (id)imageProxyWithCollection:(id)collection;	// 0x328dfe81
- (id)initWithAsset:(id)asset;	// 0x328dfec5
- (id)initWithCollection:(id)collection;	// 0x328dfdd5
// converted property getter: - (id)asset;	// 0x328df94d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x328df95d
- (void)dealloc;	// 0x328dfd79
- (id)defaultImageForImageSize:(int)imageSize;	// 0x328dfb39
- (id)imageForImageSize:(int)imageSize;	// 0x328dfb7d
- (id)imageIDForImageSize:(int)imageSize;	// 0x328dfd11
- (id)object;	// 0x328df92d
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x328df929
@end

