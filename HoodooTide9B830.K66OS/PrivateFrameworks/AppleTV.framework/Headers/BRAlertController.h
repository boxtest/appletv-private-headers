/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRTextControl, BRAlignmentAdjustingTextControl, BRHeaderControl, BRImageControl;

@interface BRAlertController : BRController {
@private
	id _eventDelegate;	// 84 = 0x54
	SEL _eventSelector;	// 88 = 0x58
	BRHeaderControl *_header;	// 92 = 0x5c
	int _type;	// 96 = 0x60
	BRTextControl *_primary;	// 100 = 0x64
	BRAlignmentAdjustingTextControl *_secondary;	// 104 = 0x68
	BRAlignmentAdjustingTextControl *_footer;	// 108 = 0x6c
	BRImageControl *_image;	// 112 = 0x70
}
@property(retain) id footerText;	// G=0x329be0c1; S=0x329be071; converted property
@property(retain) id primaryText;	// G=0x329bdf09; S=0x329bde21; converted property
@property(retain) id secondaryText;	// G=0x329bdfa1; S=0x329bdf51; converted property
+ (id)alertForError:(id)error;	// 0x329bd4a9
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x329bd551
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x329bd59d
- (id)_imageForType:(int)type;	// 0x329be255
- (id)accessibilityLabel;	// 0x329be1ed
- (id)axSelectedItemText;	// 0x329be2a5
- (id)axTitleText;	// 0x329be295
- (BOOL)brEventAction:(id)action;	// 0x329bdc51
- (void)dealloc;	// 0x329bd719
// converted property getter: - (id)footerText;	// 0x329be0c1
- (id)footerTextControl;	// 0x329be0f9
- (BOOL)isAccessibilityElement;	// 0x329be1e9
- (void)layoutSubcontrols;	// 0x329bd7c9
// converted property getter: - (id)primaryText;	// 0x329bdf09
- (id)primaryTextControl;	// 0x329bdf41
- (BOOL)recreateOnReselect;	// 0x329bdc4d
// converted property getter: - (id)secondaryText;	// 0x329bdfa1
- (id)secondaryTextControl;	// 0x329bdfd9
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x329be191
// converted property setter: - (void)setFooterText:(id)text;	// 0x329be071
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x329be109
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x329bde21
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x329bde71
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x329bdf51
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x329bdfe9
- (void)setTitle:(id)title;	// 0x329bdde1
- (void)wasPushed;	// 0x329bdd81
@end
