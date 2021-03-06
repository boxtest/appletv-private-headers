/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverBackgroundView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
@private
	UIView *_arrowView;	// 48 = 0x30
	UIView *_leftCapView;	// 52 = 0x34
	UIView *_rightCapView;	// 56 = 0x38
	float _arrowOffset;	// 60 = 0x3c
	unsigned _arrowDirection;	// 64 = 0x40
	int _backgroundStyle;	// 68 = 0x44
	BOOL _arrowVisible;	// 72 = 0x48
	BOOL useShortMode;	// 73 = 0x49
	BOOL _debugMode;	// 74 = 0x4a
}
@property(assign) unsigned arrowDirection;	// G=0x3328243d; S=0x3328244d; converted property
@property(assign) float arrowOffset;	// G=0x332823b1; S=0x332823f1; converted property
@property(assign, nonatomic, getter=isArrowVisible) BOOL arrowVisible;	// G=0x33282f9d; S=0x33282fad; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x33282d8d; S=0x33282d9d; 
@property(assign, nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;	// G=0x33282fe9; S=0x33282ff9; @synthesize=_debugMode
@property(assign, nonatomic) BOOL useShortMode;	// G=0x3328247d; S=0x33282fd9; @synthesize
+ (float)arrowBase;	// 0x33282465
+ (float)arrowHeight;	// 0x3328245d
+ (UIEdgeInsets)contentViewInsets;	// 0x3328246d
- (id)initWithFrame:(CGRect)frame;	// 0x332817b1
- (void)_layoutArrowViewsLeftOrRight;	// 0x33281d49
- (void)_layoutArrowViewsNone;	// 0x332821dd
- (void)_layoutArrowViewsUpOrDown;	// 0x33281905
- (void)_loadNecessaryViews;	// 0x332824a5
// converted property getter: - (unsigned)arrowDirection;	// 0x3328243d
// converted property getter: - (float)arrowOffset;	// 0x332823b1
// declared property getter: - (int)backgroundStyle;	// 0x33282d8d
- (void)dealloc;	// 0x332817f9
- (BOOL)hasComponentViews;	// 0x33282a0d
// declared property getter: - (BOOL)isArrowVisible;	// 0x33282f9d
// declared property getter: - (BOOL)isDebugModeEnabled;	// 0x33282fe9
- (BOOL)isPinned;	// 0x33282a4d
- (BOOL)isRightArrowPinnedToBottom;	// 0x33282d45
- (BOOL)isRightArrowPinnedToTop;	// 0x33282cfd
- (void)layoutSubviews;	// 0x332822e9
- (float)maxNonPinnedOffset;	// 0x33282c25
- (float)minNonPinnedOffset;	// 0x33282b29
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x332823a5
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x332823ad
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x332823a9
// converted property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x3328244d
// converted property setter: - (void)setArrowOffset:(float)offset;	// 0x332823f1
// declared property setter: - (void)setArrowVisible:(BOOL)visible;	// 0x33282fad
- (void)setArrowVisible:(BOOL)visible animated:(BOOL)animated;	// 0x33282fbd
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x33282d9d
- (void)setBackgroundStyle:(int)style animated:(BOOL)animated;	// 0x33282f8d
// declared property setter: - (void)setDebugModeEnabled:(BOOL)enabled;	// 0x33282ff9
// declared property setter: - (void)setUseShortMode:(BOOL)mode;	// 0x33282fd9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33282395
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x332823a1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3328239d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33282399
// declared property getter: - (BOOL)useShortMode;	// 0x3328247d
- (void)willMoveToWindow:(id)window;	// 0x3328186d
- (BOOL)wouldPinForOffset:(float)offset;	// 0x33282ac1
@end

