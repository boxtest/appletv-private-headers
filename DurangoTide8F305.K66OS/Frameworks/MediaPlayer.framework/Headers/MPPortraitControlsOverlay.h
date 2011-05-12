/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class UILabel, UIImageView;

@interface MPPortraitControlsOverlay : MPPlaybackControlsView {
	UILabel *_scrubSpeedLabel;	// 136 = 0x88
	UILabel *_scrubInstructionLabel;	// 140 = 0x8c
	UIImageView *_scrubInstructionOverlay;	// 144 = 0x90
	UIImageView *_backgroundView;	// 148 = 0x94
	BOOL _boundsAnimInFlight;	// 152 = 0x98
	CGRect _boundsAnimGoal;	// 156 = 0x9c
}
- (id)initWithFrame:(CGRect)frame;	// 0x3375324d
- (void)_hideScrubInstructionOverlayAnimationDidEnd;	// 0x33752ac5
- (int)_layoutStyle;	// 0x33752cfd
- (void)_resetStateAfterSliderTrackingDone:(id)done;	// 0x33754179
- (void)_showScrubInstructionOverlayAnimationDidEnd;	// 0x33752ac1
- (void)_sizeToFitAnimationDidEnd;	// 0x33752ab1
- (float)_sizeToFitForCurrentStateAnimated:(BOOL)currentStateAnimated;	// 0x337533ed
- (CGRect)bounds;	// 0x33753609
- (id)createButtonForPart:(unsigned)part;	// 0x33754585
- (id)createProgressIndicator;	// 0x33752d95
- (void)dealloc;	// 0x33753175
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x33752efd
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x33754651
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x33752ce9
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x33752b4d
- (CGRect)hitRect;	// 0x3375365d
- (void)layoutSubviews;	// 0x337530a9
- (void)layoutSubviews_Compact;	// 0x33752d2d
- (void)layoutSubviews_Short;	// 0x3375369d
- (void)layoutSubviews_Tall;	// 0x33753a3d
- (void)resetDetailSlider:(id)slider;	// 0x33752ffd
- (void)setVisibleParts:(unsigned)parts;	// 0x33753125
- (void)updateForEndOfDetailScrubbing;	// 0x33752f69
@end
