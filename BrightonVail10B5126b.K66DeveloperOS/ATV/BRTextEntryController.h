/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVAutoDismissable.h"
#import "BRMenuController.h"

@class NSString, BRImageControl, BRTextFieldControl, BRTextFieldBackgroundLayer, BRCursorControl, BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRTextEntryController : BRMenuController <ATVAutoDismissable> {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRTextFieldControl *_textField;	// 148 = 0x94
	BRImageControl *_verticalDividerImage;	// 152 = 0x98
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 156 = 0x9c
	BRTextControl *_textFieldLabel;	// 160 = 0xa0
	BRTextControlWithWiderFocusFrame *_submitButton;	// 164 = 0xa4
	BRTextControl *_footnoteText;	// 168 = 0xa8
	BRCursorControl *_cursor;	// 172 = 0xac
	BOOL _cursorNavigatedFromEditor;	// 176 = 0xb0
	BOOL _allowAutoDismiss;	// 177 = 0xb1
	long _autoDismissIdx;	// 180 = 0xb4
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 184 = 0xb8
	NSString *_tagString;	// 188 = 0xbc
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x33edf9; converted property
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x33fed9; S=0x33fef5; @synthesize=_maxFootnoteTextHeight
@property(copy, nonatomic) NSString *tagString;	// G=0x33ff05; S=0x33ff19; @synthesize=_tagString
- (id)init;	// 0x33e7a9
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x33e7ad
- (void)_addCursor;	// 0x340051
- (void)_historyItemSelected:(id)selected;	// 0x33ff29
- (void)_removeCursor;	// 0x3400c5
- (void)_submitButtonClick:(id)click;	// 0x340031
- (void)_switchFocusToSubmitButton;	// 0x33ff39
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x33fccd
- (id)accessibilityScreenContent;	// 0x33fcad
- (BOOL)autoDismiss;	// 0x33fe49
- (BOOL)brEventAction:(id)action;	// 0x33ee0d
- (void)controlWasUnfocused;	// 0x33ffd5
- (void)dealloc;	// 0x33ec7d
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x33edb9
// converted property getter: - (id)editor;	// 0x33edf9
- (BOOL)isValidAfterDataUpdate;	// 0x33ee09
- (void)layoutSubcontrols;	// 0x33f1d1
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x33fed9
- (void)reset;	// 0x33fc8d
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x33fe29
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x33ed99
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x33fc05
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x33fcd1
- (void)setInitialTextEntryText:(id)text;	// 0x33fbb1
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x33fef5
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x33f97d
- (void)setShowUserEnteredText:(BOOL)text;	// 0x33fc6d
- (void)setSupplementaryText:(id)text;	// 0x33fa45
// declared property setter: - (void)setTagString:(id)string;	// 0x33ff19
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x33edd9
- (void)setTextEntryStyle:(int)style;	// 0x33f941
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x33fa55
- (void)setTextFieldDelegate:(id)delegate;	// 0x33fb91
// declared property getter: - (id)tagString;	// 0x33ff05
@end
