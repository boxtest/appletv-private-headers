/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {
@private
	NSArray *_itemImages;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *itemImages;	// G=0x34e67b99; @synthesize=_itemImages
- (id)initWithImageCollection:(id)imageCollection;	// 0x34e66c21
- (id)initWithItemImages:(id)itemImages;	// 0x34e66e9d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e67915
- (id)_imagesForSize:(CGSize)size scale:(float)scale;	// 0x34e672f5
- (id)_newImagesForDictionary:(id)dictionary;	// 0x34e676c5
- (id)bestImageForSize:(CGSize)size;	// 0x34e66f99
- (id)copyWithZone:(NSZone *)zone;	// 0x34e66f3d
- (id)copyXPCEncoding;	// 0x34e67a8d
- (void)dealloc;	// 0x34e66ef1
- (id)imagesForKind:(id)kind;	// 0x34e67139
- (id)imagesForSize:(CGSize)size;	// 0x34e66fe1
// declared property getter: - (id)itemImages;	// 0x34e67b99
@end
