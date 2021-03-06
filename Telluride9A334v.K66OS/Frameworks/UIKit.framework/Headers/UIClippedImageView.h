/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIClippedImageView : UIView {
@private
	UIImageView *m_imageView;	// 48 = 0x30
	CGRect m_originalFrame;	// 52 = 0x34
	CGRect m_baseFrame;	// 68 = 0x44
}
@property(assign) CGRect baseFrame;	// G=0x3024f63d; S=0x3024f621; converted property
@property(retain) id image;	// G=0x3024f455; S=0x3024f475; converted property
- (id)initWithFrame:(CGRect)frame image:(id)image;	// 0x3024f30d
// converted property getter: - (CGRect)baseFrame;	// 0x3024f63d
- (void)dealloc;	// 0x3024f409
// converted property getter: - (id)image;	// 0x3024f455
// converted property setter: - (void)setBaseFrame:(CGRect)frame;	// 0x3024f621
- (void)setFrame:(CGRect)frame;	// 0x3024f4dd
// converted property setter: - (void)setImage:(id)image;	// 0x3024f475
- (void)setImageOrigin:(CGPoint)origin;	// 0x3024f661
- (void)setOpaque:(BOOL)opaque;	// 0x3024f495
- (void)setOriginAdjustingImage:(CGPoint)image;	// 0x3024f681
@end

