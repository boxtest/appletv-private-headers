/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMetadataControl, BRReflectionControl, BRCoverArtImageLayer, NSTimer;
@protocol BRMetadataProvider;

__attribute__((visibility("hidden")))
@interface BRMetadataPreviewControl : BRControl {
	id _asset;	// 84 = 0x54
	id<BRMetadataProvider> _metadataProvider;	// 88 = 0x58
	BRControl *_coverArtWrapper;	// 92 = 0x5c
	BRCoverArtImageLayer *_coverArtLayer;	// 96 = 0x60
	BRReflectionControl *_reflectionLayer;	// 100 = 0x64
	BRMetadataControl *_metadataLayer;	// 104 = 0x68
	NSTimer *_timer;	// 108 = 0x6c
	BOOL _showsMetadataImmediately;	// 112 = 0x70
	BOOL _showingMetadata;	// 113 = 0x71
}
@property(retain) id asset;	// G=0x3a0e31; S=0x3a0c71; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x3a0e9d; S=0x3a0e7d; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x3a0ee1; S=0x3a0ec1; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x3a0e6d; S=0x3a0e41; converted property
- (id)init;	// 0x3a00b1
- (void)_coverArtChanged:(id)changed;	// 0x3a13d5
- (void)_downloadStateChanged:(id)changed;	// 0x3a1451
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x3a1495
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x3a15b1
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x3a18d5
- (void)_metadataTimerFired:(id)fired;	// 0x3a1431
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x3a1985
- (void)_showMetadataAfterDelay;	// 0x3a0fc9
- (void)_updateMetadataLayer;	// 0x3a1065
- (id)accessibilityLabel;	// 0x3a0fa9
// converted property getter: - (id)asset;	// 0x3a0e31
- (void)controlWasActivated;	// 0x3a0f15
- (void)controlWasDeactivated;	// 0x3a0f55
- (void)dealloc;	// 0x3a02d9
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x3a0e9d
- (void)layoutSubcontrols;	// 0x3a03b9
- (id)metadataControl;	// 0x3a0f05
// converted property setter: - (void)setAsset:(id)asset;	// 0x3a0c71
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x3a0e7d
- (void)setImageProxy:(id)proxy;	// 0x3a0ba5
- (void)setMetadataProvider:(id)provider;	// 0x3a0c05
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x3a0ec1
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x3a0e41
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x3a0ee1
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x3a0e6d
@end

