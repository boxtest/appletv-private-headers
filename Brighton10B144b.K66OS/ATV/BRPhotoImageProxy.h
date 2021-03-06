/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRPhotoMediaAsset, BRPhotoMediaCollection;

__attribute__((visibility("hidden")))
@interface BRPhotoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
	BRPhotoMediaCollection *_collection;	// 8 = 0x8
}
@property(readonly, retain) BRPhotoMediaAsset *asset;	// G=0x2b1ce9; converted property
+ (id)imageProxyWithAsset:(id)asset;	// 0x2b1695
+ (id)imageProxyWithCollection:(id)collection;	// 0x2b1739
- (id)initWithAsset:(id)asset;	// 0x2b16e1
- (id)initWithCollection:(id)collection;	// 0x2b1785
// converted property getter: - (id)asset;	// 0x2b1ce9
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x2b1ae1
- (void)dealloc;	// 0x2b1839
- (id)defaultImageForImageSize:(int)imageSize;	// 0x2b1a91
- (id)imageForImageSize:(int)imageSize;	// 0x2b1901
- (id)imageIDForImageSize:(int)imageSize;	// 0x2b189d
- (id)object;	// 0x2b1cc1
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x2b1add
@end

