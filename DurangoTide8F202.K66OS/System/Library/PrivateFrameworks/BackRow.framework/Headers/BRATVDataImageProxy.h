/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BackRow-Structs.h"
#import "BRImageProxy.h"

@class NSMutableArray;

@interface BRATVDataImageProxy : NSObject <BRImageProxy> {
@private
	void *_mediaObject;	// 4 = 0x4
	ATVDataClientRef _dataClient;	// 8 = 0x8
	NSMutableArray *_savedTokens;	// 12 = 0xc
	BOOL _usesScreenSaverImageManager;	// 16 = 0x10
}
+ (id)imageProxyWithMediaObject:(void *)mediaObject;	// 0x32991c51
- (id)initWithMediaObject:(void *)mediaObject;	// 0x32991cfd
- (void)_cancelImageForImageID:(id)imageID;	// 0x32991e55
- (id)_imageIDForImageSize:(int)imageSize;	// 0x329919c5
- (id)_imageIDStringForSize:(int)size;	// 0x32991945
- (id)_imageManager;	// 0x32991985
- (void *)_mediaID;	// 0x32991f01
- (void)_removeTokenForImageID:(id)imageID;	// 0x32991a79
- (void)_saveToken:(void *)token forImageID:(id)imageID;	// 0x32991ac9
- (id)_tokenInfoForImageID:(id)imageID;	// 0x32991b19
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x32991b8d
- (void)dealloc;	// 0x32991de9
- (id)defaultImageForImageSize:(int)imageSize;	// 0x32991c85
- (id)imageForImageSize:(int)imageSize;	// 0x32992049
- (id)imageIDForImageSize:(int)imageSize;	// 0x32991c3d
- (id)object;	// 0x32991925
- (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x32991935
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x32991921
@end
