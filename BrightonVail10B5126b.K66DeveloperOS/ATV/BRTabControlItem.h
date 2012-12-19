/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMultiPartWidgetLayer;

__attribute__((visibility("hidden")))
@interface BRTabControlItem : BRControl {
	id _opaqueIdentifier;	// 84 = 0x54
	BRMultiPartWidgetLayer *_baseControl;	// 88 = 0x58
	BRTextControl *_label;	// 92 = 0x5c
}
@property(retain) id identifier;	// G=0x309161; S=0x309171; converted property
@property(retain) BRTextControl *label;	// G=0x3091b5; S=0x3091f5; converted property
- (id)init;	// 0x308fdd
- (id)accessibilityLabel;	// 0x309585
- (void)dealloc;	// 0x3090e9
// converted property getter: - (id)identifier;	// 0x309161
- (BOOL)isAccessibilityElement;	// 0x3095dd
// converted property getter: - (id)label;	// 0x3091b5
- (void)layoutSubcontrols;	// 0x3093c9
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x309171
// converted property setter: - (void)setLabel:(id)label;	// 0x3091f5
- (void)setLabelAttributes:(id)attributes;	// 0x3092a5
- (void)setLabelOpacity:(float)opacity;	// 0x3092fd
- (void)setTabImages:(id)images;	// 0x30931d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3094a9
@end
