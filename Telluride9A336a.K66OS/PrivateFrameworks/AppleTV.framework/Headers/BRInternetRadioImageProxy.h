/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface BRInternetRadioImageProxy : NSObject <BRImageProxy> {
@private
	NSString *_category;	// 4 = 0x4
}
- (id)initWithCategory:(id)category;	// 0x33a5b1b9
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x33a5b3f5
- (void)dealloc;	// 0x33a5b211
- (id)defaultImageForImageSize:(int)imageSize;	// 0x33a5b39d
- (id)imageForImageSize:(int)imageSize;	// 0x33a5b2a1
- (id)imageIDForImageSize:(int)imageSize;	// 0x33a5b25d
- (id)object;	// 0x33a5b3f9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x33a5b3dd
@end
