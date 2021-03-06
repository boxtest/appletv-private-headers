/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, AVMetadataItem;

__attribute__((visibility("hidden")))
@interface LTVideoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_identifier;	// 4 = 0x4
	AVMetadataItem *_metadataItem;	// 8 = 0x8
}
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x4689bd
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x468a1d
- (void).cxx_destruct;	// 0x468e75
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x468e6d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x468e15
- (id)imageForImageSize:(int)imageSize;	// 0x468ac5
- (id)imageIDForImageSize:(int)imageSize;	// 0x468ab1
- (id)object;	// 0x468e71
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x468e69
@end

