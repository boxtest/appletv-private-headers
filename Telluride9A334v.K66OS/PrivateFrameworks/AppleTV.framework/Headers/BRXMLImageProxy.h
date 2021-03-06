/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library

@class BRXMLMediaAsset;

__attribute__((visibility("hidden")))
@interface BRXMLImageProxy : NSObject <BRImageProxy> {
@private
	BRXMLMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x331de9c5
- (id)initWithAsset:(id)asset;	// 0x331dea0d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x331dec11
- (void)dealloc;	// 0x331dea65
- (id)defaultImageForImageSize:(int)imageSize;	// 0x331deb59
- (id)imageForImageSize:(int)imageSize;	// 0x331deb05
- (id)imageIDForImageSize:(int)imageSize;	// 0x331deab1
- (id)object;	// 0x331dec15
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x331deba5
@end

