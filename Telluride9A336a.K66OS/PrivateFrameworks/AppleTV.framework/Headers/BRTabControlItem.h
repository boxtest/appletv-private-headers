/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMultiPartWidgetLayer;

@interface BRTabControlItem : BRControl {
@private
	id _opaqueIdentifier;	// 48 = 0x30
	BRMultiPartWidgetLayer *_baseControl;	// 52 = 0x34
	BRTextControl *_label;	// 56 = 0x38
}
@property(retain) id identifier;	// G=0x33aba4dd; S=0x33aba4ed; converted property
@property(retain) BRTextControl *label;	// G=0x33aba535; S=0x33aba571; converted property
- (id)init;	// 0x33aba359
- (id)accessibilityLabel;	// 0x33aba905
- (void)dealloc;	// 0x33aba469
// converted property getter: - (id)identifier;	// 0x33aba4dd
- (BOOL)isAccessibilityElement;	// 0x33aba959
// converted property getter: - (id)label;	// 0x33aba535
- (void)layoutSubcontrols;	// 0x33aba745
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x33aba4ed
// converted property setter: - (void)setLabel:(id)label;	// 0x33aba571
- (void)setLabelAttributes:(id)attributes;	// 0x33aba61d
- (void)setLabelOpacity:(float)opacity;	// 0x33aba675
- (void)setTabImages:(id)images;	// 0x33aba695
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33aba831
@end

