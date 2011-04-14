/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"

@class BRTextFieldBackgroundLayer, BRTextEntryControl, BRTextControlWithWiderFocusFrame, BRImageControl, BRTextControl, BRCursorControl, BRTextFieldControl;

@interface BRTextEntryController : BRMenuController {
@private
	BRTextEntryControl *_editor;	// 104 = 0x68
	BRTextFieldControl *_textField;	// 108 = 0x6c
	BRImageControl *_verticalDividerImage;	// 112 = 0x70
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 116 = 0x74
	BRTextControl *_textFieldLabel;	// 120 = 0x78
	BRTextControlWithWiderFocusFrame *_submitButton;	// 124 = 0x7c
	BRTextControl *_footnoteText;	// 128 = 0x80
	BRCursorControl *_cursor;	// 132 = 0x84
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x32929ae1; converted property
- (id)init;	// 0x32929ee1
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x3292a261
- (void)_addCursor;	// 0x32929b15
- (void)_removeCursor;	// 0x32929af5
- (void)_submitButtonClick:(id)click;	// 0x32929b85
- (id)accessibilityScreenContent;	// 0x32929c3d
- (BOOL)brEventAction:(id)action;	// 0x32929fbd
- (void)dealloc;	// 0x3292a199
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x32929e9d
// converted property getter: - (id)editor;	// 0x32929ae1
- (BOOL)isValidAfterDataUpdate;	// 0x32929af1
- (void)layoutSubcontrols;	// 0x3292a6c5
- (void)reset;	// 0x32929c5d
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x32929ebd
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x32929ca1
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x32929ba5
- (void)setInitialTextEntryText:(id)text;	// 0x32929cc1
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x32929ef9
- (void)setShowUserEnteredText:(BOOL)text;	// 0x32929c7d
- (void)setSupplementaryText:(id)text;	// 0x32929e31
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x32929e7d
- (void)setTextEntryStyle:(int)style;	// 0x32929e45
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x32929d01
- (void)setTextFieldDelegate:(id)delegate;	// 0x32929ce1
@end
