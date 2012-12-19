/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView {
	int _selectionStyle;	// 84 = 0x54
	UIColor *_multiselectBackgroundColor;	// 88 = 0x58
	UIColor *_selectionTintColor;	// 92 = 0x5c
	BOOL _multiselect;	// 96 = 0x60
}
@property(assign, nonatomic, getter=isMultiselect) BOOL multiselect;	// G=0x32d57c4d; S=0x32c25179; 
@property(retain, nonatomic) UIColor *multiselectBackgroundColor;	// G=0x32d57c6d; S=0x32c25215; @synthesize=_multiselectBackgroundColor
@property(assign, nonatomic) int selectionStyle;	// G=0x32d57c5d; S=0x32c24b3d; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x32d57c7d; S=0x32c24b85; @synthesize=_selectionTintColor
- (void)dealloc;	// 0x32c3ffe1
- (void)drawRect:(CGRect)rect;	// 0x32c26bbd
// declared property getter: - (BOOL)isMultiselect;	// 0x32d57c4d
// declared property getter: - (id)multiselectBackgroundColor;	// 0x32d57c6d
// declared property getter: - (int)selectionStyle;	// 0x32d57c5d
// declared property getter: - (id)selectionTintColor;	// 0x32d57c7d
// declared property setter: - (void)setMultiselect:(BOOL)multiselect;	// 0x32c25179
// declared property setter: - (void)setMultiselectBackgroundColor:(id)color;	// 0x32c25215
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x32c24b3d
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x32c24b85
@end
