/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl {
	UITableViewCell *_cell;	// 108 = 0x6c
	unsigned _style : 2;	// 112 = 0x70
	unsigned _rotated : 1;	// 112 = 0x70
	unsigned _rotating : 1;	// 112 = 0x70
	unsigned _hiding : 1;	// 112 = 0x70
	unsigned _reserved : 27;	// 112 = 0x70
}
@property(assign, nonatomic, getter=isHiding) BOOL hiding;	// G=0x33c836d1; S=0x33c836b9; 
@property(assign, nonatomic, getter=isRotated) BOOL rotated;	// G=0x33b23d69; S=0x33c83691; 
+ (id)_deleteImage;	// 0x33b0f9d9
+ (id)_deleteImageBackground;	// 0x33a51009
+ (id)_insertImage;	// 0x33b0e731
+ (CGRect)_minusRect;	// 0x33b0faa9
+ (id)_multiSelectHighlightedImage;	// 0x33c83621
+ (id)_multiSelectNotSelectedImage;	// 0x33c83579
+ (id)_multiSelectSelectedImage;	// 0x33c835b1
+ (CGSize)defaultSize;	// 0x33a50fad
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x33b0cb79
- (id)_currentImage;	// 0x33b0cf31
- (id)_minusView;	// 0x33b23b6d
- (void)_multiselectColorChanged;	// 0x33c836e5
- (void)_toggleRotate;	// 0x33b23b45
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x33b24e41
- (void)_updateImageView;	// 0x33b2080d
// declared property getter: - (BOOL)isHiding;	// 0x33c836d1
// declared property getter: - (BOOL)isRotated;	// 0x33b23d69
- (BOOL)isRotating;	// 0x33c836a5
- (void)layoutSubviews;	// 0x33b0cd61
- (void)setFrame:(CGRect)frame;	// 0x33b0cd19
// declared property setter: - (void)setHiding:(BOOL)hiding;	// 0x33c836b9
- (void)setHighlighted:(BOOL)highlighted;	// 0x33b207cd
// declared property setter: - (void)setRotated:(BOOL)rotated;	// 0x33c83691
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;	// 0x33b0d789
- (void)setSelected:(BOOL)selected;	// 0x33b6f0a1
@end

