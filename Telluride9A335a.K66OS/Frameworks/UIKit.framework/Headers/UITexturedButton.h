/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton {
}
- (id)initWithFrame:(CGRect)frame;	// 0x33af5dbd
- (id)backgroundImageForState:(unsigned)state;	// 0x33be6ae1
- (int)buttonType;	// 0x33be6a21
- (void)drawRect:(CGRect)rect;	// 0x33af64d5
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x33be6add
- (void)setHighlighted:(BOOL)highlighted;	// 0x33be6a25
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x33be6acd
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x33be6ad5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33be6a65
- (id)titleColorForState:(unsigned)state;	// 0x33be6ad1
- (id)titleShadowColorForState:(unsigned)state;	// 0x33be6ad9
@end
