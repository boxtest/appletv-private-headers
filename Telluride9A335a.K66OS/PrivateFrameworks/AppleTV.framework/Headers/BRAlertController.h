/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAXTitleChangeProtocol.h"
#import "BRAXSelectionChangeProtocol.h"
#import "BRController.h"

@class BRTextControl, BRAlignmentAdjustingTextControl, BRHeaderControl, BRImageControl;

@interface BRAlertController : BRController <BRAXSelectionChangeProtocol, BRAXTitleChangeProtocol> {
@private
	id _eventDelegate;	// 80 = 0x50
	SEL _eventSelector;	// 84 = 0x54
	BRHeaderControl *_header;	// 88 = 0x58
	int _type;	// 92 = 0x5c
	BRTextControl *_primary;	// 96 = 0x60
	BRAlignmentAdjustingTextControl *_secondary;	// 100 = 0x64
	BRAlignmentAdjustingTextControl *_footer;	// 104 = 0x68
	BRImageControl *_image;	// 108 = 0x6c
}
@property(retain) id footerText;	// G=0x341ce2dd; S=0x341ce28d; converted property
@property(retain) id primaryText;	// G=0x341ce125; S=0x341ce03d; converted property
@property(retain) id secondaryText;	// G=0x341ce1bd; S=0x341ce16d; converted property
+ (id)alertForError:(id)error;	// 0x341cd6c5
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x341cd76d
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x341cd7b9
- (id)_imageForType:(int)type;	// 0x341ce471
- (id)accessibilityLabel;	// 0x341ce409
- (id)axSelectedItemText;	// 0x341ce4c1
- (id)axTitleText;	// 0x341ce4b1
- (BOOL)brEventAction:(id)action;	// 0x341cde6d
- (void)dealloc;	// 0x341cd935
// converted property getter: - (id)footerText;	// 0x341ce2dd
- (id)footerTextControl;	// 0x341ce315
- (BOOL)isAccessibilityElement;	// 0x341ce405
- (void)layoutSubcontrols;	// 0x341cd9e5
// converted property getter: - (id)primaryText;	// 0x341ce125
- (id)primaryTextControl;	// 0x341ce15d
- (BOOL)recreateOnReselect;	// 0x341cde69
// converted property getter: - (id)secondaryText;	// 0x341ce1bd
- (id)secondaryTextControl;	// 0x341ce1f5
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x341ce3ad
// converted property setter: - (void)setFooterText:(id)text;	// 0x341ce28d
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x341ce325
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x341ce03d
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x341ce08d
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x341ce16d
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x341ce205
- (void)setTitle:(id)title;	// 0x341cdffd
- (void)wasPushed;	// 0x341cdf9d
@end

