/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextEntryControl, BRCursorControl, BRImageControl, ATVTextEntryTextControl, BRTextControl, BRTextFieldBackgroundLayer, BRTextFieldControl, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface ATVTextEntryView : BRControl {
	BOOL _cursorNavigatedFromEditor;	// 84 = 0x54
	BRTextEntryControl *_editor;	// 88 = 0x58
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 92 = 0x5c
	BRHeaderControl *_headerControl;	// 96 = 0x60
	BRTextFieldControl *_textField;	// 100 = 0x64
	BRImageControl *_verticalDividerImage;	// 104 = 0x68
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 108 = 0x6c
	BRTextControl *_label;	// 112 = 0x70
	ATVTextEntryTextControl *_submitButton;	// 116 = 0x74
	BRTextControl *_supplementaryText;	// 120 = 0x78
	BRTextControl *_footnoteText;	// 124 = 0x7c
	BRCursorControl *_cursor;	// 128 = 0x80
}
@property(retain, nonatomic) BRCursorControl *_cursor;	// G=0xdba59; S=0xdba69; @synthesize
@property(assign, nonatomic) BOOL _cursorNavigatedFromEditor;	// G=0xdba79; S=0xdba89; @synthesize
@property(retain, nonatomic) BRTextControl *_footnoteText;	// G=0xdba39; S=0xdba49; @synthesize
@property(retain, nonatomic) BRTextControl *_label;	// G=0xdb9d9; S=0xdb9e9; @synthesize
@property(retain, nonatomic) ATVTextEntryTextControl *_submitButton;	// G=0xdb9f9; S=0xdba09; @synthesize
@property(retain, nonatomic) BRTextControl *_supplementaryText;	// G=0xdba19; S=0xdba29; @synthesize
@property(retain, nonatomic) BRTextFieldControl *_textField;	// G=0xdb979; S=0xdb989; @synthesize
@property(retain, nonatomic) BRTextFieldBackgroundLayer *_textFieldBackground;	// G=0xdb9b9; S=0xdb9c9; @synthesize
@property(retain, nonatomic) BRImageControl *_verticalDividerImage;	// G=0xdb999; S=0xdb9a9; @synthesize
@property(retain, nonatomic) BRTextEntryControl *editor;	// G=0xdb91d; S=0xdb92d; @synthesize=_editor
@property(retain, nonatomic) BRHeaderControl *headerControl;	// G=0xdb969; S=0xda9fd; @synthesize=_headerControl
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0xdb93d; S=0xdb959; @synthesize=_maxFootnoteTextHeight
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0xda371
- (void)_addCursor;	// 0xdbb51
// declared property getter: - (id)_cursor;	// 0xdba59
// declared property getter: - (BOOL)_cursorNavigatedFromEditor;	// 0xdba79
// declared property getter: - (id)_footnoteText;	// 0xdba39
- (void)_historyItemSelected:(id)selected;	// 0xdba99
// declared property getter: - (id)_label;	// 0xdb9d9
- (void)_removeCursor;	// 0xdbbf9
// declared property getter: - (id)_submitButton;	// 0xdb9f9
- (void)_submitButtonClick;	// 0xdbb29
// declared property getter: - (id)_supplementaryText;	// 0xdba19
- (void)_switchFocusToSubmitButton;	// 0xdbaa9
// declared property getter: - (id)_textField;	// 0xdb979
// declared property getter: - (id)_textFieldBackground;	// 0xdb9b9
// declared property getter: - (id)_verticalDividerImage;	// 0xdb999
- (id)accessibilityLabel;	// 0xdb8ad
- (id)accessibilityScreenContent;	// 0xdb8f5
- (BOOL)brEventAction:(id)action;	// 0xdaf6d
- (void)controlWasActivated;	// 0xdaebd
- (void)dealloc;	// 0xda8cd
// declared property getter: - (id)editor;	// 0xdb91d
// declared property getter: - (id)headerControl;	// 0xdb969
- (void)layoutSubcontrols;	// 0xdb1fd
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0xdb93d
// declared property setter: - (void)setEditor:(id)editor;	// 0xdb92d
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0xdaced
// declared property setter: - (void)setHeaderControl:(id)control;	// 0xda9fd
- (void)setInitialText:(id)text;	// 0xdae69
- (void)setLabel:(id)label;	// 0xdaa85
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0xdb959
- (void)setSupplementaryText:(id)text;	// 0xdabc1
// declared property setter: - (void)set_cursor:(id)cursor;	// 0xdba69
// declared property setter: - (void)set_cursorNavigatedFromEditor:(BOOL)editor;	// 0xdba89
// declared property setter: - (void)set_footnoteText:(id)text;	// 0xdba49
// declared property setter: - (void)set_label:(id)label;	// 0xdb9e9
// declared property setter: - (void)set_submitButton:(id)button;	// 0xdba09
// declared property setter: - (void)set_supplementaryText:(id)text;	// 0xdba29
// declared property setter: - (void)set_textField:(id)field;	// 0xdb989
// declared property setter: - (void)set_textFieldBackground:(id)background;	// 0xdb9c9
// declared property setter: - (void)set_verticalDividerImage:(id)image;	// 0xdb9a9
@end

