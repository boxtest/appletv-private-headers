/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextMagnifier.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
@private
	UIResponder<UITextInput> *_text;	// 48 = 0x30
	UIView *_target;	// 52 = 0x34
	CGPoint _magnificationPoint;	// 56 = 0x38
	CGPoint _offset;	// 64 = 0x40
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 72 = 0x48
	float _yOffset;	// 76 = 0x4c
	UIView *_magnifierRenderer;	// 80 = 0x50
	UIView *_autoscrollRenderer;	// 84 = 0x54
	int _autoscrollDirections;	// 88 = 0x58
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x32f45989; S=0x32f46751; @synthesize=_magnificationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x32f45835; S=0x32f45851; 
@property(assign, nonatomic) CGPoint offset;	// G=0x32f46701; S=0x32f4671d; @synthesize=_offset
@property(retain, nonatomic) UIView *target;	// G=0x32da85bd; S=0x32f466dd; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x32f458e1; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x32f45911; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x32f466a9; S=0x32f466b9; @synthesize=_text
@property(assign, nonatomic) float yOffset;	// G=0x32f46731; S=0x32f46741; @synthesize=_yOffset
+ (id)sharedCaretMagnifier;	// 0x32da8245
- (id)initWithDefaultFrame;	// 0x32da82d1
- (void)animateToAutoscrollRenderer;	// 0x32f459c5
- (void)animateToMagnifierRenderer;	// 0x32f45aad
// declared property getter: - (CGPoint)animationPoint;	// 0x32f45989
- (void)autoscrollWillNotStart;	// 0x32f45ccd
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x32f4644d
- (void)dealloc;	// 0x32f457c1
- (void)detectLostTouches:(id)touches;	// 0x32f46395
// declared property getter: - (CGPoint)magnificationPoint;	// 0x32f45835
// declared property getter: - (CGPoint)offset;	// 0x32f46701
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x32f459a5
- (void)remove;	// 0x32f460c9
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x32f46751
- (void)setAutoscrollDirections:(int)directions;	// 0x32f45b25
- (void)setFrame:(CGRect)frame;	// 0x32da83cd
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x32f45851
- (void)setNeedsDisplay;	// 0x32da84a1
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x32f4671d
// declared property setter: - (void)setTarget:(id)target;	// 0x32f466dd
// declared property setter: - (void)setText:(id)text;	// 0x32f466b9
- (void)setToMagnifierRenderer;	// 0x32f45a69
// declared property setter: - (void)setYOffset:(float)offset;	// 0x32f46741
- (void)stopMagnifying:(BOOL)magnifying;	// 0x32f465ed
// declared property getter: - (id)target;	// 0x32da85bd
// declared property getter: - (CGPoint)terminalPoint;	// 0x32f458e1
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x32f45911
// declared property getter: - (id)text;	// 0x32f466a9
- (void)updateFrameAndOffset;	// 0x32f46141
- (void)windowWillRotate:(id)window;	// 0x32f46439
// declared property getter: - (float)yOffset;	// 0x32f46731
- (void)zoomDownAnimation;	// 0x32f45e51
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x32f46095
- (void)zoomUpAnimation;	// 0x32f45ced
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x32f45e41
@end

