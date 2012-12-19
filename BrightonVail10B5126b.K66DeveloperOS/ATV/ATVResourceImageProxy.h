/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVResourceImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSBundle *_bundle;	// 4 = 0x4
	NSString *_imageName;	// 8 = 0x8
	NSString *_imageType;	// 12 = 0xc
	BOOL _shouldCacheImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSBundle *bundle;	// G=0x266ba5; S=0x266bb5; @synthesize=_bundle
@property(retain, nonatomic) NSString *imageName;	// G=0x266bc5; S=0x266bd5; @synthesize=_imageName
@property(retain, nonatomic) NSString *imageType;	// G=0x266be5; S=0x266bf5; @synthesize=_imageType
@property(assign, nonatomic) BOOL shouldCacheImage;	// G=0x266c05; S=0x266c15; @synthesize=_shouldCacheImage
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type;	// 0x266821
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x266871
- (id)initWithImageName:(id)imageName imageType:(id)type;	// 0x2668c9
- (id)initWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x26690d
// declared property getter: - (id)bundle;	// 0x266ba5
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x266b9d
- (void)dealloc;	// 0x26698d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x266b95
- (id)imageForImageSize:(int)imageSize;	// 0x266a99
- (id)imageIDForImageSize:(int)imageSize;	// 0x266a05
// declared property getter: - (id)imageName;	// 0x266bc5
// declared property getter: - (id)imageType;	// 0x266be5
- (id)object;	// 0x266ba1
// declared property setter: - (void)setBundle:(id)bundle;	// 0x266bb5
// declared property setter: - (void)setImageName:(id)name;	// 0x266bd5
// declared property setter: - (void)setImageType:(id)type;	// 0x266bf5
// declared property setter: - (void)setShouldCacheImage:(BOOL)cacheImage;	// 0x266c15
// declared property getter: - (BOOL)shouldCacheImage;	// 0x266c05
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x266b99
@end
