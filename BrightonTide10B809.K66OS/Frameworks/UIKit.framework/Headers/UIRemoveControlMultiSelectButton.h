/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIRemoveControlMinusButton.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {
	unsigned _isHighlighted : 1;	// 116 = 0x74
	unsigned _isSelected : 1;	// 116 = 0x74
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x32cffd19; S=0x32cffd1d; converted property
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x32cffef9; S=0x32cffed5; converted property
+ (float)defaultWidth;	// 0x32cffbcd
+ (id)minusCenterImage;	// 0x32cffc09
+ (id)minusImage;	// 0x32cffbe9
+ (id)plusImage;	// 0x32cffbf9
- (id)initWithRemoveControl:(id)removeControl;	// 0x32cffc0d
- (void)drawRect:(CGRect)rect;	// 0x32cffd21
// converted property getter: - (BOOL)isHiding;	// 0x32cffd19
// converted property getter: - (BOOL)isHighlighted;	// 0x32cffef9
- (BOOL)isRotated;	// 0x32cffd11
- (BOOL)isRotating;	// 0x32cffd15
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x32cffd1d
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32cffed5
- (void)setSelected:(BOOL)selected;	// 0x32cfff0d
- (void)setSelected:(BOOL)selected highlighted:(BOOL)highlighted;	// 0x32cffe65
- (void)toggleRotate:(BOOL)rotate;	// 0x32cffd0d
@end
