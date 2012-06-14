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
- (id)initWithCategory:(id)category;	// 0x35dc8915
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x35dc8b51
- (void)dealloc;	// 0x35dc896d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x35dc8af9
- (id)imageForImageSize:(int)imageSize;	// 0x35dc89fd
- (id)imageIDForImageSize:(int)imageSize;	// 0x35dc89b9
- (id)object;	// 0x35dc8b55
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x35dc8b39
@end
