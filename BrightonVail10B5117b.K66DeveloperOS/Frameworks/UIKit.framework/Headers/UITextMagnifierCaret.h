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
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x32f6bc61; S=0x32f6ca2d; @synthesize=_magnificationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x32f6bb1d; S=0x32f6bb35; 
@property(assign, nonatomic) CGPoint offset;	// G=0x32f6c9e1; S=0x32f6c9f9; @synthesize=_offset
@property(retain, nonatomic) UIView *target;	// G=0x32dd26f1; S=0x32f6c9d1; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x32f6bbc1; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x32f6bbf1; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x32f6c9b1; S=0x32f6c9c1; @synthesize=_text
@property(assign, nonatomic) float yOffset;	// G=0x32f6ca0d; S=0x32f6ca1d; @synthesize=_yOffset
+ (id)sharedCaretMagnifier;	// 0x32dd237d
- (id)initWithDefaultFrame;	// 0x32dd2409
- (void)animateToAutoscrollRenderer;	// 0x32f6bc99
- (void)animateToMagnifierRenderer;	// 0x32f6bd89
// declared property getter: - (CGPoint)animationPoint;	// 0x32f6bc61
- (void)autoscrollWillNotStart;	// 0x32f6bf7d
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x32f6c749
- (void)dealloc;	// 0x32f6baa5
- (void)detectLostTouches:(id)touches;	// 0x32f6c691
// declared property getter: - (CGPoint)magnificationPoint;	// 0x32f6bb1d
// declared property getter: - (CGPoint)offset;	// 0x32f6c9e1
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x32f6bc79
- (void)remove;	// 0x32f6c395
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x32f6ca2d
- (void)setAutoscrollDirections:(int)directions;	// 0x32f6be01
- (void)setFrame:(CGRect)frame;	// 0x32dd2511
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x32f6bb35
- (void)setNeedsDisplay;	// 0x32dd25d5
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x32f6c9f9
// declared property setter: - (void)setTarget:(id)target;	// 0x32f6c9d1
// declared property setter: - (void)setText:(id)text;	// 0x32f6c9c1
- (void)setToMagnifierRenderer;	// 0x32f6bd41
// declared property setter: - (void)setYOffset:(float)offset;	// 0x32f6ca1d
- (void)stopMagnifying:(BOOL)magnifying;	// 0x32f6c8f5
// declared property getter: - (id)target;	// 0x32dd26f1
// declared property getter: - (CGPoint)terminalPoint;	// 0x32f6bbc1
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x32f6bbf1
// declared property getter: - (id)text;	// 0x32f6c9b1
- (void)updateFrameAndOffset;	// 0x32f6c40d
- (void)windowWillRotate:(id)window;	// 0x32f6c735
// declared property getter: - (float)yOffset;	// 0x32f6ca0d
- (void)zoomDownAnimation;	// 0x32f6c111
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x32f6c361
- (void)zoomUpAnimation;	// 0x32f6bfa1
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x32f6c101
@end

