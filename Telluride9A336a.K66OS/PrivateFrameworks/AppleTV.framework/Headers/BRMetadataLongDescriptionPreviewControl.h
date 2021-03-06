/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, NSTimer, BRMetadataLongDescriptionControl, BRCoverArtImageLayer;
@protocol BRMetadataProvider;

@interface BRMetadataLongDescriptionPreviewControl : BRControl {
@private
	id _asset;	// 48 = 0x30
	id<BRMetadataProvider> _metadataProvider;	// 52 = 0x34
	BRControl *_coverArtWrapper;	// 56 = 0x38
	BRCoverArtImageLayer *_coverArtLayer;	// 60 = 0x3c
	BRReflectionControl *_reflectionLayer;	// 64 = 0x40
	BRMetadataLongDescriptionControl *_metadataLayer;	// 68 = 0x44
	NSTimer *_timer;	// 72 = 0x48
	BOOL _showsMetadataImmediately;	// 76 = 0x4c
	BOOL _showingMetadata;	// 77 = 0x4d
}
@property(retain) id asset;	// G=0x33aa9725; S=0x33aa953d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x33aa9795; S=0x33aa9775; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x33aa97d9; S=0x33aa97b9; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x33aa9765; S=0x33aa9735; converted property
- (id)init;	// 0x33aa8d59
- (void)_coverArtChanged:(id)changed;	// 0x33aa9b11
- (void)_downloadStateChanged:(id)changed;	// 0x33aa9b8d
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x33aa9bcd
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x33aa9c89
- (void)_metadataTimerFired:(id)fired;	// 0x33aa9b6d
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x33aa9c99
- (void)_showMetadataAfterDelay;	// 0x33aa991d
- (void)_updateMetadataLayer;	// 0x33aa99bd
- (id)accessibilityLabel;	// 0x33aa98a1
- (id)accessibilityScreenContent;	// 0x33aa9ce5
// converted property getter: - (id)asset;	// 0x33aa9725
- (void)controlWasActivated;	// 0x33aa980d
- (void)controlWasDeactivated;	// 0x33aa984d
- (void)dealloc;	// 0x33aa9079
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x33aa9795
- (void)layoutSubcontrols;	// 0x33aa9159
- (id)metadataControl;	// 0x33aa97fd
// converted property setter: - (void)setAsset:(id)asset;	// 0x33aa953d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x33aa9775
- (void)setImageProxy:(id)proxy;	// 0x33aa9471
- (void)setMetadataProvider:(id)provider;	// 0x33aa94d1
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x33aa97b9
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x33aa9735
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x33aa97d9
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x33aa9765
@end

