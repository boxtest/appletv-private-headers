/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
	UIResponder<UITextInput> *_text;	// 84 = 0x54
	UIView *_target;	// 88 = 0x58
	CGPoint _magnificationPoint;	// 92 = 0x5c
	CGPoint _offset;	// 100 = 0x64
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 108 = 0x6c
	float _yOffset;	// 112 = 0x70
	UIView *_magnifierRenderer;	// 116 = 0x74
	UIView *_autoscrollRenderer;	// 120 = 0x78
	int _autoscrollDirections;	// 124 = 0x7c
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x31eb5349; S=0x31eb6115; @synthesize=_magnificationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x31eb5205; S=0x31eb521d; 
@property(assign, nonatomic) CGPoint offset;	// G=0x31eb60c9; S=0x31eb60e1; @synthesize=_offset
@property(retain, nonatomic) UIView *target;	// G=0x31d1c2b1; S=0x31eb60b9; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x31eb52a9; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x31eb52d9; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x31eb6099; S=0x31eb60a9; @synthesize=_text
@property(assign, nonatomic) float yOffset;	// G=0x31eb60f5; S=0x31eb6105; @synthesize=_yOffset
+ (id)sharedCaretMagnifier;	// 0x31d1bf3d
- (id)initWithDefaultFrame;	// 0x31d1bfc9
- (void)animateToAutoscrollRenderer;	// 0x31eb5381
- (void)animateToMagnifierRenderer;	// 0x31eb5471
// declared property getter: - (CGPoint)animationPoint;	// 0x31eb5349
- (void)autoscrollWillNotStart;	// 0x31eb5665
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x31eb5e31
- (void)dealloc;	// 0x31eb518d
- (void)detectLostTouches:(id)touches;	// 0x31eb5d79
// declared property getter: - (CGPoint)magnificationPoint;	// 0x31eb5205
// declared property getter: - (CGPoint)offset;	// 0x31eb60c9
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x31eb5361
- (void)remove;	// 0x31eb5a7d
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x31eb6115
- (void)setAutoscrollDirections:(int)directions;	// 0x31eb54e9
- (void)setFrame:(CGRect)frame;	// 0x31d1c0d1
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x31eb521d
- (void)setNeedsDisplay;	// 0x31d1c195
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x31eb60e1
// declared property setter: - (void)setTarget:(id)target;	// 0x31eb60b9
// declared property setter: - (void)setText:(id)text;	// 0x31eb60a9
- (void)setToMagnifierRenderer;	// 0x31eb5429
// declared property setter: - (void)setYOffset:(float)offset;	// 0x31eb6105
- (void)stopMagnifying:(BOOL)magnifying;	// 0x31eb5fdd
// declared property getter: - (id)target;	// 0x31d1c2b1
// declared property getter: - (CGPoint)terminalPoint;	// 0x31eb52a9
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x31eb52d9
// declared property getter: - (id)text;	// 0x31eb6099
- (void)updateFrameAndOffset;	// 0x31eb5af5
- (void)windowWillRotate:(id)window;	// 0x31eb5e1d
// declared property getter: - (float)yOffset;	// 0x31eb60f5
- (void)zoomDownAnimation;	// 0x31eb57f9
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x31eb5a49
- (void)zoomUpAnimation;	// 0x31eb5689
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x31eb57e9
@end
