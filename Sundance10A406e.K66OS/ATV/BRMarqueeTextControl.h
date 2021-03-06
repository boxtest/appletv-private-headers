/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRFadeMaskLayer, NSTimer, BRScrollingTextPlane;
@protocol BRMarqueeScrollingDelegate;

__attribute__((visibility("hidden")))
@interface BRMarqueeTextControl : BRControl {
	BRScrollingTextPlane *_plane;	// 84 = 0x54
	BRControl *_leftFade;	// 88 = 0x58
	BRControl *_rightFade;	// 92 = 0x5c
	BRFadeMaskLayer *_mask;	// 96 = 0x60
	NSTimer *_scrollTimer;	// 100 = 0x64
	NSTimer *_fadeMaskTimer;	// 104 = 0x68
	float _maskRemovalTime;	// 108 = 0x6c
	float _scrollPosition;	// 112 = 0x70
	BOOL _autoScrolls;	// 116 = 0x74
	BOOL _crossfadeEnabled;	// 117 = 0x75
	BOOL _crossfading;	// 118 = 0x76
	BOOL _useAlphaFadeMask;	// 119 = 0x77
	id<BRMarqueeScrollingDelegate> _scrollingDelegate;	// 120 = 0x78
}
@property(retain) id attributedString;	// G=0x2dcca5; S=0x2dcac9; converted property
@property(assign) BOOL autoScrolls;	// G=0x2dcded; S=0x2dcd69; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x2dd035; S=0x2dd019; converted property
@property(assign) float scrollPosition;	// G=0x2dd111; S=0x2dd0d9; converted property
@property(assign) id scrollingDelegate;	// G=0x2dd121; S=0x2dd131; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x2dd151; S=0x2dd141; converted property
- (id)init;	// 0x2dc909
- (BOOL)_autoscrollInProgress;	// 0x2de519
- (void)_beginScroll:(id)scroll;	// 0x2ddcd9
- (void)_clearFadeMaskTimer;	// 0x2de3ad
- (void)_clearScrollTimer;	// 0x2de381
- (void)_realignCenteredTextToLeftJustified;	// 0x2ddb9d
- (void)_removeFadeMask:(id)mask;	// 0x2de1f5
- (void)_resetScrollTimer;	// 0x2de289
- (void)_scrollDidStart:(id)_scroll;	// 0x2de3d9
- (void)_scrollDidStop:(id)_scroll;	// 0x2de4c5
- (void)_scrollDidStop:(id)_scroll finished:(BOOL)finished;	// 0x2de469
- (void)_updateEdgeMaskingIfScrollingNeeded:(BOOL)needed;	// 0x2dd951
- (id)accessibilityLabel;	// 0x2dd929
// converted property getter: - (id)attributedString;	// 0x2dcca5
// converted property getter: - (BOOL)autoScrolls;	// 0x2dcded
- (void)controlWasActivated;	// 0x2dd8e9
- (void)controlWasDeactivated;	// 0x2dd86d
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x2dd035
- (void)dealloc;	// 0x2dc9c9
- (void)layoutSubcontrols;	// 0x2dd2c5
- (float)maxScrollPosition;	// 0x2dcc71
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x2dd045
- (CGSize)pixelBounds;	// 0x2dccc5
- (id)preferredActionForKey:(id)key;	// 0x2dd1c1
- (CGSize)renderedSize;	// 0x2dccf5
// converted property getter: - (float)scrollPosition;	// 0x2dd111
// converted property getter: - (id)scrollingDelegate;	// 0x2dd121
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2dcac9
// converted property setter: - (void)setAutoScrolls:(BOOL)scrolls;	// 0x2dcd69
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x2dd019
// converted property setter: - (void)setScrollPosition:(float)position;	// 0x2dd0d9
// converted property setter: - (void)setScrollingDelegate:(id)delegate;	// 0x2dd131
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x2dca55
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x2dd141
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2dd161
- (void)updateBoundDimmed;	// 0x2dcdfd
- (void)updateBoundHidden;	// 0x2dcf01
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x2dd151
@end

