/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class BRMediaType, NSDictionary, NSString, BRImage, NSURL;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRURLImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_imageID;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSDictionary *_headerFields;	// 12 = 0xc
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 16 = 0x10
	BRMediaType *_mediaTypeForDefaultImage;	// 20 = 0x14
	BRImage *_defaultImage;	// 24 = 0x18
	BOOL _writeToDisk;	// 28 = 0x1c
	long _imageIDLazyInitializationGuard;	// 32 = 0x20
}
@property(retain) id decryptionAgent;	// G=0x3a6375; S=0x3a6385; converted property
@property(retain) BRImage *defaultImage;	// G=0x3a62f9; S=0x3a62bd; converted property
@property(retain) NSDictionary *headerFields;	// G=0x3a6329; S=0x3a6339; converted property
@property(retain) BRMediaType *mediaTypeForDefaultImage;	// G=0x3a6269; S=0x3a6259; converted property
@property(retain) id object;	// G=0x3a6315; S=0x3a6311; converted property
@property(readonly, retain) NSURL *url;	// G=0x3a6319; converted property
@property(assign) BOOL writeToDisk;	// G=0x3a63a5; S=0x3a6395; converted property
+ (id)proxyWithURL:(id)url;	// 0x3a5d09
+ (id)proxyWithURL:(id)url decryptionAgent:(id)agent;	// 0x3a5d55
+ (id)proxyWithURL:(id)url headerFields:(id)fields;	// 0x3a5da5
+ (id)proxyWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3a5df5
- (id)initWithURL:(id)url;	// 0x3a5e4d
- (id)initWithURL:(id)url decryptionAgent:(id)agent;	// 0x3a5e6d
- (id)initWithURL:(id)url headerFields:(id)fields;	// 0x3a5e8d
- (id)initWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3a5eb1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x3a630d
- (void)dealloc;	// 0x3a5f51
// converted property getter: - (id)decryptionAgent;	// 0x3a6375
// converted property getter: - (id)defaultImage;	// 0x3a62f9
- (id)defaultImageForImageSize:(int)imageSize;	// 0x3a6279
// converted property getter: - (id)headerFields;	// 0x3a6329
- (id)imageForImageSize:(int)imageSize;	// 0x3a60c1
- (id)imageIDForImageSize:(int)imageSize;	// 0x3a5fdd
// converted property getter: - (id)mediaTypeForDefaultImage;	// 0x3a6269
// converted property getter: - (id)object;	// 0x3a6315
// converted property setter: - (void)setDecryptionAgent:(id)agent;	// 0x3a6385
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x3a62bd
// converted property setter: - (void)setHeaderFields:(id)fields;	// 0x3a6339
// converted property setter: - (void)setMediaTypeForDefaultImage:(id)defaultImage;	// 0x3a6259
// converted property setter: - (void)setObject:(id)object;	// 0x3a6311
// converted property setter: - (void)setWriteToDisk:(BOOL)disk;	// 0x3a6395
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x3a6309
// converted property getter: - (id)url;	// 0x3a6319
// converted property getter: - (BOOL)writeToDisk;	// 0x3a63a5
@end
