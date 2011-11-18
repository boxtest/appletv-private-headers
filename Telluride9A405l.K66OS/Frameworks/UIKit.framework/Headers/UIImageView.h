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
@property(assign, getter=isAnimating) BOOL animating;	// G=0x32c95985; S=0x32e65169; converted property
@property(assign, nonatomic) double animationDuration;	// G=0x32e6503d; S=0x32dc1111; 
@property(copy, nonatomic) NSArray *animationImages;	// G=0x32cab279; S=0x32dc0dcd; 
@property(assign, nonatomic) int animationRepeatCount;	// G=0x32e650b9; S=0x32dc1219; 
@property(assign, nonatomic) int drawMode;	// G=0x32c956dd; S=0x32c960bd; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x32c949d9; S=0x32dc856d; 
@property(copy, nonatomic) NSArray *highlightedAnimationImages;	// G=0x32cab305; S=0x32e64cb9; 
@property(retain, nonatomic) UIImage *highlightedImage;	// G=0x32cab205; S=0x32cd8cd5; 
@property(retain, nonatomic) UIImage *image;	// G=0x32c7a571; S=0x32c94be1; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// @dynamic
- (id)initWithCoder:(id)coder;	// 0x32e646b1
- (id)initWithFrame:(CGRect)frame;	// 0x32c9406d
- (id)initWithImage:(id)image;	// 0x32caaf5d
- (id)initWithImage:(id)image highlightedImage:(id)image2;	// 0x32d48801
- (id)_cachedPretiledImageForImage:(id)image;	// 0x32c95d35
- (BOOL)_canDrawContent;	// 0x32c94885
- (void)_clearPretiledImageCacheForImage:(id)image;	// 0x32c94db1
- (BOOL)_recomputePretilingState;	// 0x32cab00d
- (BOOL)_setImageViewContents:(id)contents;	// 0x32c95a3d
- (void)_setViewGeometry:(CGRect)geometry forMetric:(int)metric;	// 0x32c772fd
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x32c9a845
- (BOOL)_shouldDrawImage:(id)image;	// 0x32c958ad
- (void)_updatePretiledImageCacheForImage:(id)image;	// 0x32c94ebd
- (void)_updateState;	// 0x32c953e1
// declared property getter: - (double)animationDuration;	// 0x32e6503d
// declared property getter: - (id)animationImages;	// 0x32cab279
// declared property getter: - (int)animationRepeatCount;	// 0x32e650b9
- (void)dealloc;	// 0x32c9f785
- (unsigned long long)defaultAccessibilityTraits;	// 0x32f01575
// declared property getter: - (int)drawMode;	// 0x32c956dd
- (void)drawRect:(CGRect)rect;	// 0x32df1281
- (void)encodeWithCoder:(id)coder;	// 0x32e64a79
// declared property getter: - (id)highlightedAnimationImages;	// 0x32cab305
// declared property getter: - (id)highlightedImage;	// 0x32cab205
// declared property getter: - (id)image;	// 0x32c7a571
- (CGImageRef)imageRef;	// 0x32e65149
- (BOOL)isAccessibilityElementByDefault;	// 0x32f01571
// converted property getter: - (BOOL)isAnimating;	// 0x32c95985
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f015b5
// declared property getter: - (BOOL)isHighlighted;	// 0x32c949d9
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x32e65169
// declared property setter: - (void)setAnimationDuration:(double)duration;	// 0x32dc1111
// declared property setter: - (void)setAnimationImages:(id)images;	// 0x32dc0dcd
// declared property setter: - (void)setAnimationRepeatCount:(int)count;	// 0x32dc1219
- (void)setBackgroundColor:(id)color;	// 0x32dc50d5
- (void)setBounds:(CGRect)bounds;	// 0x32cfc42d
- (void)setCGImageRef:(CGImageRef)ref;	// 0x32e65129
- (void)setContentStretch:(CGRect)stretch;	// 0x32ceafc9
// declared property setter: - (void)setDrawMode:(int)mode;	// 0x32c960bd
- (void)setFrame:(CGRect)frame;	// 0x32c772d1
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32dc856d
// declared property setter: - (void)setHighlightedAnimationImages:(id)images;	// 0x32e64cb9
// declared property setter: - (void)setHighlightedImage:(id)image;	// 0x32cd8cd5
// declared property setter: - (void)setImage:(id)image;	// 0x32c94be1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32d43079
- (void)startAnimating;	// 0x32dc130d
- (void)stopAnimating;	// 0x32c9f9b9
- (BOOL)useBlockyMagnificationInClassic;	// 0x32e65191
@end

