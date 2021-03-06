/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldCharacterInputDelegate.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"

@class BRScrollControl, BRDeviceKeyboardMessage, BRTextEntryPlayPauseMessage, NSArray, NSString, BRTextFieldBackgroundLayer, BRTabControl, BRKeyboardControl, BRTextControl, BRInputMethod, NSAttributedString, BRKeyboard, NSMutableSet, BRTextFieldControl, BRCursorControl;

@interface BRTextEntryControl : BRControl <BRTabControlDelegate, BRTextFieldCharacterInputDelegate> {
@private
	int _textEntryStyle;	// 48 = 0x30
	BRInputMethod *_inputMethod;	// 52 = 0x34
	BRKeyboard *_activeKeyboard;	// 56 = 0x38
	NSMutableSet *_validInputCharacterSet;	// 60 = 0x3c
	BOOL _displayTextEntryHistory;	// 64 = 0x40
	NSString *_textEntryHistoryClient;	// 68 = 0x44
	NSString *_textEntryHistoryBehavior;	// 72 = 0x48
	BRTextEntryPlayPauseMessage *_playPauseMessage;	// 76 = 0x4c
	BRControl *_candidatesBackground;	// 80 = 0x50
	BRScrollControl *_candidatesKeysContainer;	// 84 = 0x54
	BRKeyboardControl *_keyboardControl;	// 88 = 0x58
	BRScrollControl *_keyboardContainer;	// 92 = 0x5c
	BRControl *_actionKeysContainer;	// 96 = 0x60
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 100 = 0x64
	BRTextControl *_textFieldLabel;	// 104 = 0x68
	NSAttributedString *_textFieldLabelString;	// 108 = 0x6c
	BRTextFieldControl *_textField;	// 112 = 0x70
	BRTabControl *_tabControl;	// 116 = 0x74
	BRCursorControl *_cursor;	// 120 = 0x78
	BOOL _providesOwnCursor;	// 124 = 0x7c
	NSArray *_customizedTextFieldControls;	// 128 = 0x80
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 132 = 0x84
	BRKeyboard *_popupKeyboard;	// 136 = 0x88
	CGPoint _focusedMainKeyRemembery;	// 140 = 0x8c
	BOOL _displayPopupKeyboardAfterKeyboardSwitch;	// 148 = 0x94
	CGColorRef _popupBackgroundColor;	// 152 = 0x98
	CGColorRef _popupBorderColor;	// 156 = 0x9c
	int _popupShadowStyle;	// 160 = 0xa0
	BOOL _constrainCursorToPopupKeyboard;	// 164 = 0xa4
	BRKeyboardControl *_popupKeyboardControl;	// 168 = 0xa8
	CGPoint _previousKeyboardFocus;	// 172 = 0xac
	int _textLengthLimit;	// 180 = 0xb4
	BOOL _showUserEnteredText;	// 184 = 0xb8
	BOOL _textFieldIsInternal;	// 185 = 0xb9
	BOOL _shouldRestoreTextFieldCursor;	// 186 = 0xba
	BOOL _shouldWrapHorizontally;	// 187 = 0xbb
	BOOL _shouldWrapVertically;	// 188 = 0xbc
	BOOL _clientHasSpecifiedHorizontalWrapping;	// 189 = 0xbd
	BOOL _clientHasSpecifiedVerticalWrapping;	// 190 = 0xbe
	BOOL _displayPlayPauseMessage;	// 191 = 0xbf
	NSString *_uniqueIDForPlayPauseRegistration;	// 192 = 0xc0
	NSString *_lastStringSetIntoTextField;	// 196 = 0xc4
}
@property(assign) BOOL canWrapHorizontally;	// G=0x3323e3a1; S=0x3323e3c5; converted property
@property(assign) BOOL canWrapVertically;	// G=0x3323e411; S=0x3323e435; converted property
@property(assign) CGPoint keyboardFocus;	// G=0x3323e911; S=0x3323e941; converted property
@property(assign) BOOL providesOwnFocusCursor;	// G=0x3323e751; S=0x3323e761; converted property
@property(retain) BRTabControl *tabControl;	// G=0x3323eb11; S=0x3323eb21; converted property
@property(assign) int textEntryStyle;	// G=0x3323de11; S=0x3323d9a5; converted property
@property(retain) BRTextFieldControl *textField;	// G=0x3323e19d; S=0x3323e1ad; converted property
@property(assign) id textFieldDelegate;	// G=0x3323e4fd; S=0x3323e4dd; converted property
@property(assign) int textLengthLimit;	// G=0x3323e155; S=0x3323e165; converted property
- (id)init;	// 0x3323c6fd
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x3323ca85
- (void)_addCursor;	// 0x3323f005
- (void)_addCustomizedTextFieldControls;	// 0x3323f8ed
- (void)_addMainKeyboardContainerForKeyboard:(id)keyboard;	// 0x3323f525
- (void)_addOrRemoveCandidatesContainer:(id)container;	// 0x3323f635
- (void)_addOrRemoveTabControl;	// 0x3323f0f5
- (id)_bestKeyboardLanguage:(int)language;	// 0x3323fa0d
- (id)_currentTextEntryStyleName;	// 0x332413f9
- (void)_customizeTextEntryControls;	// 0x3323f639
- (void)_finalizeControlWasFocused;	// 0x3323fba5
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x33240b15
- (void)_handleDisplayPopupKeyboardEvent:(BOOL)event;	// 0x33240c31
- (void)_inputActionAppendCandidate:(id)candidate;	// 0x3323ff1d
- (void)_inputActionAppendText:(id)text;	// 0x3323fd1d
- (void)_inputActionClearText:(id)text;	// 0x3323ff89
- (void)_inputActionDeleteText:(id)text;	// 0x33240011
- (void)_inputActionEscape:(id)escape;	// 0x33240a7d
- (void)_inputActionSwitchInputMethod:(id)method;	// 0x3324086d
- (void)_inputActionSwitchKeyboard:(id)keyboard;	// 0x332400f5
- (void)_invokeInputActionWithDictionary:(id)dictionary;	// 0x3323fc05
- (id)_keyboardMappingData;	// 0x3323eedd
- (void)_registerAsTextFieldCharacterInputDelegate;	// 0x332411d1
- (void)_removeActionKeysRow;	// 0x3323f5f5
- (void)_removeCursor;	// 0x3323f0b5
- (void)_removeCustomizedTextFieldControls;	// 0x3323f99d
- (void)_removePopupKeyboard;	// 0x33240fbd
- (void)_saveTextEntryHistory;	// 0x332410d5
- (void)_setActiveKeyboard:(id)keyboard;	// 0x3323f4c5
- (BOOL)_shouldIgnoreKey:(id)key forTextField:(id)textField;	// 0x3323ee45
- (id)_stringFromRect:(CGRect)rect;	// 0x33241391
- (void)_stripTrailingDotIfNecessary:(id)necessary;	// 0x3323fdf1
- (void)_swapPopupkeyboard;	// 0x33240bf1
- (void)_textDidChangeNotification:(id)_text;	// 0x33241449
- (void)_textDidEndEditingNotification:(id)_text;	// 0x332414d1
- (void)_unregisterAsTextFieldCharacterInputDelegate;	// 0x33241345
- (void)_wrapAroundEdge:(int)edge;	// 0x3323fa09
- (id)accessibilityLabel;	// 0x3323cd21
- (id)accessibilityScreenContent;	// 0x3323cd61
- (id)accessibilityTraits;	// 0x3323ccf5
- (id)accessibilityValue;	// 0x3323cd41
- (BOOL)brEventAction:(id)action;	// 0x3323d405
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x3323e3a1
// converted property getter: - (BOOL)canWrapVertically;	// 0x3323e411
- (void)completeTextEntry;	// 0x3323e34d
- (void)controlWasActivated;	// 0x3323cf6d
- (void)controlWasDeactivated;	// 0x3323cff9
- (void)controlWasFocused;	// 0x3323d2e9
- (void)controlWasUnfocused;	// 0x3323d381
- (void)dealloc;	// 0x3323cabd
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x3323e0e9
- (void)deleteTextEntryHistoryItem:(id)item forTextEntryHistoryClients:(id)textEntryHistoryClients textEntryBehaviors:(id)behaviors;	// 0x3323e035
- (void)deviceKeyboardClose;	// 0x332414e1
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x332416dd
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x33241561
- (void)dismissPopupKeyboard;	// 0x3323ec59
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x3323de7d
- (BOOL)focusIsAtRightEdge;	// 0x3323e859
- (void)invokeInputActionWithDictionary:(id)dictionary;	// 0x3323ee35
// converted property getter: - (CGPoint)keyboardFocus;	// 0x3323e911
- (void)layoutSubcontrols;	// 0x3323d071
// converted property getter: - (BOOL)providesOwnFocusCursor;	// 0x3323e751
- (void)reset;	// 0x3323e5fd
- (void)saveTextEntryHistory;	// 0x3323e009
- (void)saveTextEntryHistoryUsingClient:(id)client textEntryBehavior:(id)behavior;	// 0x3323dfc9
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x3323e3c5
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x3323e435
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x3323ec49
- (void)setDeviceKeyboardTitle:(id)title subText:(id)text;	// 0x3323eabd
- (void)setDisplayPlayPauseMessage:(BOOL)message;	// 0x3323ec79
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x3323de21
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3323e7a9
- (void)setInitialText:(id)text;	// 0x3323e51d
// converted property setter: - (void)setKeyboardFocus:(CGPoint)focus;	// 0x3323e941
- (void)setPopupBackgroundColor:(CGColorRef)color;	// 0x3323ebe9
- (void)setPopupOutlineColor:(CGColorRef)color;	// 0x3323ec21
- (void)setPopupShadowStyle:(int)style;	// 0x3323ec11
// converted property setter: - (void)setProvidesOwnFocusCursor:(BOOL)cursor;	// 0x3323e761
- (void)setShowUserEnteredText:(BOOL)text;	// 0x3323e481
// converted property setter: - (void)setTabControl:(id)control;	// 0x3323eb21
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x3323df55
// converted property setter: - (void)setTextEntryStyle:(int)style;	// 0x3323d9a5
// converted property setter: - (void)setTextField:(id)field;	// 0x3323e1ad
// converted property setter: - (void)setTextFieldDelegate:(id)delegate;	// 0x3323e4dd
- (void)setTextFieldLabel:(id)label;	// 0x3323e681
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x3323e165
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3323cd81
- (void)startSpinning;	// 0x3323e361
- (void)stopSpinning;	// 0x3323e381
- (void)switchToKeyboardNamed:(id)keyboardNamed focusOnKeyboardAfterSwitch:(BOOL)aSwitch;	// 0x3323e9f5
// converted property getter: - (id)tabControl;	// 0x3323eb11
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x3323ee75
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x3323eed5
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x3323eed9
// converted property getter: - (int)textEntryStyle;	// 0x3323de11
// converted property getter: - (id)textField;	// 0x3323e19d
// converted property getter: - (id)textFieldDelegate;	// 0x3323e4fd
// converted property getter: - (int)textLengthLimit;	// 0x3323e155
@end

