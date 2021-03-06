/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel {
	BOOL _reverseShadow;	// 160 = 0xa0
	UIButton *_button;	// 164 = 0xa4
}
@property(assign) CGSize shadowOffset;	// G=0x2f402335; S=0x2f401e01; converted property
- (id)_defaultAttributes;	// 0x2f6ab911
- (id)_initWithFrame:(CGRect)frame button:(id)button;	// 0x2f6ab705
- (void)_setMinimumFontSize:(float)size;	// 0x2f503c31
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x2f6ab9d9
- (CGSize)intrinsicContentSize;	// 0x2f6ab811
- (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x2f44a319
- (void)setFont:(id)font;	// 0x2f401c89
- (void)setLineBreakMode:(int)mode;	// 0x2f401ffd
- (void)setMinimumScaleFactor:(float)factor;	// 0x2f6ab755
- (void)setReverseShadow:(BOOL)shadow;	// 0x2f402115
// converted property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x2f401e01
- (void)setTextAlignment:(int)alignment;	// 0x2f4021b1
// converted property getter: - (CGSize)shadowOffset;	// 0x2f402335
@end

