/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class BRImageControl, BRTextFieldControl, BRTextFieldBackgroundLayer, BRCursorControl, BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRTextEntryController : BRMenuController {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRTextFieldControl *_textField;	// 148 = 0x94
	BRImageControl *_verticalDividerImage;	// 152 = 0x98
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 156 = 0x9c
	BRTextControl *_textFieldLabel;	// 160 = 0xa0
	BRTextControlWithWiderFocusFrame *_submitButton;	// 164 = 0xa4
	BRTextControl *_footnoteText;	// 168 = 0xa8
	BRCursorControl *_cursor;	// 172 = 0xac
	BOOL _cursorNavigatedFromEditor;	// 176 = 0xb0
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 180 = 0xb4
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x33bfbd; converted property
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x33cf51; S=0x33cf6d; @synthesize=_maxFootnoteTextHeight
- (id)init;	// 0x33b981
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x33b985
- (void)_addCursor;	// 0x33d01d
- (void)_historyItemSelected:(id)selected;	// 0x33cf7d
- (void)_removeCursor;	// 0x33d091
- (void)_submitButtonClick:(id)click;	// 0x33cffd
- (void)_switchFocusToSubmitButton;	// 0x33cf8d
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x33cdf5
- (id)accessibilityScreenContent;	// 0x33cdd5
- (BOOL)brEventAction:(id)action;	// 0x33bfd1
- (void)dealloc;	// 0x33be55
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x33bf7d
// converted property getter: - (id)editor;	// 0x33bfbd
- (BOOL)isValidAfterDataUpdate;	// 0x33bfcd
- (void)layoutSubcontrols;	// 0x33c2f9
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x33cf51
- (void)reset;	// 0x33cdb5
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x33bf5d
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x33cd2d
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x33cdf9
- (void)setInitialTextEntryText:(id)text;	// 0x33ccd9
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x33cf6d
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x33caa5
- (void)setShowUserEnteredText:(BOOL)text;	// 0x33cd95
- (void)setSupplementaryText:(id)text;	// 0x33cb6d
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x33bf9d
- (void)setTextEntryStyle:(int)style;	// 0x33ca69
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x33cb7d
- (void)setTextFieldDelegate:(id)delegate;	// 0x33ccb9
@end

