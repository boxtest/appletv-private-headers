/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextFieldAtomBackgroundView : UIView {
@private
	int _atomStyle;	// 44 = 0x2c
}
@property(assign) int atomStyle;	// G=0x306e1ae5; S=0x306e1bdd; converted property
+ (id)_blueAtomBackgroundImage;	// 0x3070af15
+ (id)_purpleAtomBackgroundImage;	// 0x306e3939
- (id)initWithFrame:(CGRect)frame;	// 0x306e1a61
// converted property getter: - (int)atomStyle;	// 0x306e1ae5
- (void)drawRect:(CGRect)rect;	// 0x306e386d
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x306e1bdd
@end

