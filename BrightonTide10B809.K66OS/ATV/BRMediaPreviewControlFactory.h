/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"

@class BRMediaType;

__attribute__((visibility("hidden")))
@interface BRMediaPreviewControlFactory : XXUnknownSuperclass <BRControlFactory> {
	BRMediaType *_missingType;	// 4 = 0x4
	BOOL _deletterboxArtwork;	// 8 = 0x8
	BOOL _shouldShowMetadata;	// 9 = 0x9
	BOOL _showMetadataImmediately;	// 10 = 0xa
}
@property(retain) BRMediaType *missingType;	// G=0x2c56a5; S=0x2c5665; converted property
@property(assign) BOOL previewShouldShowMetadata;	// G=0x2c56c5; S=0x2c56b5; converted property
@property(assign) BOOL previewShouldShowMetadataImmediately;	// G=0x2c56e5; S=0x2c56d5; converted property
@property(assign) BOOL shouldDeletterboxArtwork;	// G=0x2c5705; S=0x2c56f5; converted property
+ (id)factory;	// 0x2c4bd1
+ (id)filterProxies:(id)proxies;	// 0x2c4c19
- (id)init;	// 0x2c4eb5
- (id)_coverArtControllerForAssets:(id)assets;	// 0x2c5845
- (id)_metadataControllerForAsset:(id)asset;	// 0x2c596d
- (id)_paradeControllerForAssets:(id)assets;	// 0x2c5a0d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2c5715
- (void)dealloc;	// 0x2c4f25
// converted property getter: - (id)missingType;	// 0x2c56a5
- (id)previewControlForAsset:(id)asset;	// 0x2c4f71
- (id)previewControlForAssets:(id)assets;	// 0x2c5055
- (id)previewControlForImageProxies:(id)imageProxies;	// 0x2c5395
- (id)previewControlForImageProxy:(id)imageProxy;	// 0x2c4fb5
// converted property getter: - (BOOL)previewShouldShowMetadata;	// 0x2c56c5
// converted property getter: - (BOOL)previewShouldShowMetadataImmediately;	// 0x2c56e5
// converted property setter: - (void)setMissingType:(id)type;	// 0x2c5665
// converted property setter: - (void)setPreviewShouldShowMetadata:(BOOL)showMetadata;	// 0x2c56b5
// converted property setter: - (void)setPreviewShouldShowMetadataImmediately:(BOOL)showMetadataImmediately;	// 0x2c56d5
// converted property setter: - (void)setShouldDeletterboxArtwork:(BOOL)deletterboxArtwork;	// 0x2c56f5
// converted property getter: - (BOOL)shouldDeletterboxArtwork;	// 0x2c5705
- (id)updatePreviewControl:(id)control imageProxies:(id)proxies;	// 0x2c54d1
@end

