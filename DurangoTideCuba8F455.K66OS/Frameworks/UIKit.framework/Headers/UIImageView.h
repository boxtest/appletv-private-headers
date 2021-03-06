/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, NSArray;

@interface UIImageView : UIView {
@private
	id _storage;	// 44 = 0x2c
}
@property(assign, getter=isAnimating) BOOL animating;	// G=0x300a96ed; S=0x302016ad; converted property
@property(assign, nonatomic) double animationDuration;	// G=0x30201849; S=0x302018b9; 
@property(copy, nonatomic) NSArray *animationImages;	// G=0x3014d249; S=0x30201e41; 
@property(assign, nonatomic) int animationRepeatCount;	// G=0x302016f5; S=0x30201761; 
@property(assign, nonatomic) int drawMode;	// G=0x300a9485; S=0x300b923d; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x300a8f85; S=0x3012dee9; 
@property(copy, nonatomic) NSArray *highlightedAnimationImages;	// G=0x3012e0e1; S=0x302019ad; 
@property(retain, nonatomic) UIImage *highlightedImage;	// G=0x3012e079; S=0x30109ed9; 
@property(retain, nonatomic) UIImage *image;	// G=0x3007d12d; S=0x300a8ff1; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// @dynamic
- (id)initWithCoder:(id)coder;	// 0x30202045
- (id)initWithFrame:(CGRect)frame;	// 0x300b90d5
- (id)initWithImage:(id)image;	// 0x300a8d9d
- (id)initWithImage:(id)image highlightedImage:(id)image2;	// 0x3010ef99
- (BOOL)_canDrawContent;	// 0x300a8e39
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x30201bd5
- (BOOL)_shouldDrawImage:(id)image;	// 0x300a9645
- (void)_updateState;	// 0x300a9149
// declared property getter: - (double)animationDuration;	// 0x30201849
// declared property getter: - (id)animationImages;	// 0x3014d249
// declared property getter: - (int)animationRepeatCount;	// 0x302016f5
- (void)dealloc;	// 0x300fb6f9
- (unsigned long long)defaultAccessibilityTraits;	// 0x3028f549
// declared property getter: - (int)drawMode;	// 0x300a9485
- (void)drawRect:(CGRect)rect;	// 0x301746c9
- (void)encodeWithCoder:(id)coder;	// 0x30201c31
// declared property getter: - (id)highlightedAnimationImages;	// 0x3012e0e1
// declared property getter: - (id)highlightedImage;	// 0x3012e079
// declared property getter: - (id)image;	// 0x3007d12d
- (CGImageRef)imageRef;	// 0x30175085
- (BOOL)isAccessibilityElementByDefault;	// 0x3028f3c1
// converted property getter: - (BOOL)isAnimating;	// 0x300a96ed
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f3c5
// declared property getter: - (BOOL)isHighlighted;	// 0x300a8f85
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x302016ad
// declared property setter: - (void)setAnimationDuration:(double)duration;	// 0x302018b9
// declared property setter: - (void)setAnimationImages:(id)images;	// 0x30201e41
// declared property setter: - (void)setAnimationRepeatCount:(int)count;	// 0x30201761
- (void)setBackgroundColor:(id)color;	// 0x3012dfe9
- (void)setBounds:(CGRect)bounds;	// 0x30105f2d
- (void)setCGImageRef:(CGImageRef)ref;	// 0x302016d1
// declared property setter: - (void)setDrawMode:(int)mode;	// 0x300b923d
- (void)setFrame:(CGRect)frame;	// 0x3007c25d
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3012dee9
// declared property setter: - (void)setHighlightedAnimationImages:(id)images;	// 0x302019ad
// declared property setter: - (void)setHighlightedImage:(id)image;	// 0x30109ed9
// declared property setter: - (void)setImage:(id)image;	// 0x300a8ff1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3014d32d
- (void)startAnimating;	// 0x30202375
- (void)stopAnimating;	// 0x300fb755
- (BOOL)useBlockyMagnificationInClassic;	// 0x302016a9
@end

