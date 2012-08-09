/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

__attribute__((visibility("hidden")))
@interface BRScrollControl : BRControl {
	BRControl *_content;	// 80 = 0x50
	BRControl *_topFade;	// 84 = 0x54
	BRControl *_bottomFade;	// 88 = 0x58
	BRControl *_leftFade;	// 92 = 0x5c
	BRControl *_rightFade;	// 96 = 0x60
	BRFadeMaskLayer *_mask;	// 100 = 0x64
	ScrollAnimationDelegate *_animationDelegate;	// 104 = 0x68
	int _scrollDirection;	// 108 = 0x6c
	int _mode;	// 112 = 0x70
	float _edgeFadePercent;	// 116 = 0x74
	float _extraBottomSpace;	// 120 = 0x78
	float _extraTopSpace;	// 124 = 0x7c
	float _extraLeftSpace;	// 128 = 0x80
	float _extraRightSpace;	// 132 = 0x84
	BOOL _scrollPointSet;	// 136 = 0x88
	BOOL _constrainAllContentToEdges;	// 137 = 0x89
	BOOL _useRealMasks;	// 138 = 0x8a
	BOOL _followsFocus;	// 139 = 0x8b
	BOOL _contentLayoutDone;	// 140 = 0x8c
	BOOL _repeatActive;	// 141 = 0x8d
	BOOL _autoChangeAnimationModes;	// 142 = 0x8e
}
@property(assign) int animationMode;	// G=0x2d1cd9; S=0x2d1af1; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x2d20d1; S=0x2d20e1; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x2d1add; S=0x2d1ac1; converted property
@property(retain) BRControl *content;	// G=0x2d1671; S=0x2d1549; converted property
@property(assign) float edgeFadePercentage;	// G=0x2d1ab1; S=0x2d1a59; converted property
@property(assign) BOOL followsFocus;	// G=0x2d18b1; S=0x2d1875; converted property
@property(assign) int scrollDirection;	// G=0x2d1d05; S=0x2d1ce9; converted property
@property(assign) BOOL useRealMasks;	// G=0x2d1a49; S=0x2d1a1d; converted property
- (id)init;	// 0x2d1325
- (BOOL)_animatingPositionChange;	// 0x2d2351
- (void)_attemptToRemoveFadeMask;	// 0x2d3c29
- (id)_bottomFadeFilters;	// 0x2d3e0d
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x2d278d
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x2d282d
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x2d28cd
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x2d298d
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x2d3b71
- (void)_focusChanged:(id)changed;	// 0x2d3091
- (id)_leftFadeFilters;	// 0x2d3f21
- (void)_minimizeVisiblePlaneArea;	// 0x2d2a4d
- (id)_parentScrollControl;	// 0x2d2aed
- (id)_rightFadeFilters;	// 0x2d4035
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x2d2d55
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x2d2da1
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x2d23b1
- (id)_topFadeFilters;	// 0x2d3cf9
- (void)_updateEdgeFading;	// 0x2d3165
- (void)_updateFocusNotifications;	// 0x2d2fe9
- (void)_updateHorizontalEdgeFading;	// 0x2d36a5
- (void)_updateScrollPositionForFocus;	// 0x2d2e25
- (void)_updateVerticalEdgeFading;	// 0x2d31b5
- (CGRect)_visibleRectOfControl:(id)control;	// 0x2d2af1
// converted property getter: - (int)animationMode;	// 0x2d1cd9
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x2d20d1
- (BOOL)autoScrolling;	// 0x2d1821
- (BOOL)brEventAction:(id)action;	// 0x2d1681
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x2d1add
// converted property getter: - (id)content;	// 0x2d1671
- (void)controlWasActivated;	// 0x2d1d15
- (void)controlWasDeactivated;	// 0x2d1d55
- (void)dealloc;	// 0x2d140d
// converted property getter: - (float)edgeFadePercentage;	// 0x2d1ab1
// converted property getter: - (BOOL)followsFocus;	// 0x2d18b1
- (void)layoutSubcontrols;	// 0x2d1d95
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2d2055
// converted property getter: - (int)scrollDirection;	// 0x2d1d05
- (void)scrollToControl:(id)control;	// 0x2d1931
- (void)scrollToPoint:(CGPoint)point;	// 0x2d18c1
- (void)scrollToRect:(CGRect)rect;	// 0x2d18f5
- (BOOL)scrolling;	// 0x2d17fd
- (void)scrollingCompleted;	// 0x2d2099
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x2d1af1
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x2d20e1
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x2d1ac1
// converted property setter: - (void)setContent:(id)content;	// 0x2d1549
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x2d1a59
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x2d1875
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x2d1ce9
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x2d1a1d
// converted property getter: - (BOOL)useRealMasks;	// 0x2d1a49
@end
