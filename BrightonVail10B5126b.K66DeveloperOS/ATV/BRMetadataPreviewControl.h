/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRCoverArtImageLayer, BRMetadataControl, NSTimer;
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
@property(retain) id asset;	// G=0x3337e5; S=0x333625; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x333851; S=0x333831; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x333895; S=0x333875; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x333821; S=0x3337f5; converted property
- (id)init;	// 0x332a79
- (void)_coverArtChanged:(id)changed;	// 0x333d8d
- (void)_downloadStateChanged:(id)changed;	// 0x333e09
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x333e4d
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x333f71
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x33428d
- (void)_metadataTimerFired:(id)fired;	// 0x333de9
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x33433d
- (void)_showMetadataAfterDelay;	// 0x33397d
- (void)_updateMetadataLayer;	// 0x333a19
- (id)accessibilityLabel;	// 0x33395d
// converted property getter: - (id)asset;	// 0x3337e5
- (void)controlWasActivated;	// 0x3338c9
- (void)controlWasDeactivated;	// 0x333909
- (void)dealloc;	// 0x332ca1
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x333851
- (void)layoutSubcontrols;	// 0x332d81
- (id)metadataControl;	// 0x3338b9
// converted property setter: - (void)setAsset:(id)asset;	// 0x333625
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x333831
- (void)setImageProxy:(id)proxy;	// 0x333559
- (void)setMetadataProvider:(id)provider;	// 0x3335b9
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x333875
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x3337f5
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x333895
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x333821
@end
