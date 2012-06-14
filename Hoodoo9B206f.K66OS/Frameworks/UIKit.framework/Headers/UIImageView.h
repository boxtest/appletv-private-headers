/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImage;

@interface UIImageView : UIView {
@private
	id _storage;	// 48 = 0x30
}
@property(assign, getter=isAnimating) BOOL animating;	// G=0x35325e19; S=0x354f82f1; converted property
@property(assign, nonatomic) double animationDuration;	// G=0x354f81c5; S=0x35451a45; 
@property(copy, nonatomic) NSArray *animationImages;	// G=0x3533b721; S=0x35451701; 
@property(assign, nonatomic) int animationRepeatCount;	// G=0x354f8241; S=0x35451b4d; 
@property(assign, nonatomic) int drawMode;	// G=0x35325b71; S=0x35326551; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x35324e6d; S=0x35458ea1; 
@property(copy, nonatomic) NSArray *highlightedAnimationImages;	// G=0x3533b7ad; S=0x354f7e41; 
@property(retain, nonatomic) UIImage *highlightedImage;	// G=0x3533b6ad; S=0x353691cd; 
@property(retain, nonatomic) UIImage *image;	// G=0x3530a75d; S=0x35325075; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// @dynamic
- (id)initWithCoder:(id)coder;	// 0x354f7839
- (id)initWithFrame:(CGRect)frame;	// 0x35324489
- (id)initWithImage:(id)image;	// 0x3533b405
- (id)initWithImage:(id)image highlightedImage:(id)image2;	// 0x353d8405
- (id)_cachedPretiledImageForImage:(id)image;	// 0x353261c9
- (BOOL)_canDrawContent;	// 0x35324d19
- (void)_clearPretiledImageCacheForImage:(id)image;	// 0x35325245
- (BOOL)_recomputePretilingState;	// 0x3533b4b5
- (BOOL)_setImageViewContents:(id)contents;	// 0x35325ed1
- (void)_setViewGeometry:(CGRect)geometry forMetric:(int)metric;	// 0x353074e9
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x3532ad75
- (BOOL)_shouldDrawImage:(id)image;	// 0x35325d41
- (void)_updatePretiledImageCacheForImage:(id)image;	// 0x35325351
- (void)_updateState;	// 0x35325875
// declared property getter: - (double)animationDuration;	// 0x354f81c5
// declared property getter: - (id)animationImages;	// 0x3533b721
// declared property getter: - (int)animationRepeatCount;	// 0x354f8241
- (void)dealloc;	// 0x3532fcc5
- (unsigned long long)defaultAccessibilityTraits;	// 0x355954a5
// declared property getter: - (int)drawMode;	// 0x35325b71
- (void)drawRect:(CGRect)rect;	// 0x35481cdd
- (void)encodeWithCoder:(id)coder;	// 0x354f7c01
// declared property getter: - (id)highlightedAnimationImages;	// 0x3533b7ad
// declared property getter: - (id)highlightedImage;	// 0x3533b6ad
// declared property getter: - (id)image;	// 0x3530a75d
- (CGImageRef)imageRef;	// 0x354f82d1
- (BOOL)isAccessibilityElementByDefault;	// 0x355954a1
// converted property getter: - (BOOL)isAnimating;	// 0x35325e19
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x355954e5
// declared property getter: - (BOOL)isHighlighted;	// 0x35324e6d
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x354f82f1
// declared property setter: - (void)setAnimationDuration:(double)duration;	// 0x35451a45
// declared property setter: - (void)setAnimationImages:(id)images;	// 0x35451701
// declared property setter: - (void)setAnimationRepeatCount:(int)count;	// 0x35451b4d
- (void)setBackgroundColor:(id)color;	// 0x35455a09
- (void)setBounds:(CGRect)bounds;	// 0x3538b471
- (void)setCGImageRef:(CGImageRef)ref;	// 0x354f82b1
- (void)setContentStretch:(CGRect)stretch;	// 0x3537a369
// declared property setter: - (void)setDrawMode:(int)mode;	// 0x35326551
- (void)setFrame:(CGRect)frame;	// 0x353074bd
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x35458ea1
// declared property setter: - (void)setHighlightedAnimationImages:(id)images;	// 0x354f7e41
// declared property setter: - (void)setHighlightedImage:(id)image;	// 0x353691cd
// declared property setter: - (void)setImage:(id)image;	// 0x35325075
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x353d2de9
- (void)startAnimating;	// 0x35451c41
- (void)stopAnimating;	// 0x3532fef9
- (BOOL)useBlockyMagnificationInClassic;	// 0x354f8319
@end
