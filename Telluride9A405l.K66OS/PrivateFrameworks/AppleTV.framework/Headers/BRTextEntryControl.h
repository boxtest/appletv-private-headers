/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRTextFieldCharacterInputDelegate.h"
#import "BRTabControlDelegate.h"

@class BRTextControl, NSString, BRInputMethod, BRKeyboard, BRTextFieldControl, BRCursorControl, NSAttributedString, NSMutableSet, BRScrollControl, BRDeviceKeyboardMessage, BRTextEntryPlayPauseMessage, BRTextFieldBackgroundLayer, BRTabControl, NSArray, BRKeyboardControl;

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
@property(assign) BOOL canWrapHorizontally;	// G=0x35e31155; S=0x35e31179; converted property
@property(assign) BOOL canWrapVertically;	// G=0x35e311c5; S=0x35e311e9; converted property
@property(assign) CGPoint keyboardFocus;	// G=0x35e316c5; S=0x35e316f5; converted property
@property(assign) BOOL providesOwnFocusCursor;	// G=0x35e31505; S=0x35e31515; converted property
@property(retain) BRTabControl *tabControl;	// G=0x35e318c5; S=0x35e318d5; converted property
@property(assign) int textEntryStyle;	// G=0x35e30bc5; S=0x35e30759; converted property
@property(retain) BRTextFieldControl *textField;	// G=0x35e30f51; S=0x35e30f61; converted property
@property(assign) id textFieldDelegate;	// G=0x35e312b1; S=0x35e31291; converted property
@property(assign) int textLengthLimit;	// G=0x35e30f09; S=0x35e30f19; converted property
- (id)init;	// 0x35e2f4b1
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x35e2f839
- (void)_addCursor;	// 0x35e31db9
- (void)_addCustomizedTextFieldControls;	// 0x35e326a1
- (void)_addMainKeyboardContainerForKeyboard:(id)keyboard;	// 0x35e322d9
- (void)_addOrRemoveCandidatesContainer:(id)container;	// 0x35e323e9
- (void)_addOrRemoveTabControl;	// 0x35e31ea9
- (id)_bestKeyboardLanguage:(int)language;	// 0x35e327c1
- (id)_currentTextEntryStyleName;	// 0x35e341ed
- (void)_customizeTextEntryControls;	// 0x35e323ed
- (void)_finalizeControlWasFocused;	// 0x35e32959
- (void)_generateKeyEventWithCharacters:(id)characters immediatelyObscureCharacters:(BOOL)characters2;	// 0x35e338d9
- (void)_handleDisplayPopupKeyboardEvent:(BOOL)event;	// 0x35e33a25
- (void)_inputActionAppendCandidate:(id)candidate;	// 0x35e32cd5
- (void)_inputActionAppendText:(id)text;	// 0x35e32ad1
- (void)_inputActionClearText:(id)text;	// 0x35e32d41
- (void)_inputActionDeleteText:(id)text;	// 0x35e32dcd
- (void)_inputActionEscape:(id)escape;	// 0x35e3383d
- (void)_inputActionSwitchInputMethod:(id)method;	// 0x35e3362d
- (void)_inputActionSwitchKeyboard:(id)keyboard;	// 0x35e32eb5
- (void)_invokeInputActionWithDictionary:(id)dictionary;	// 0x35e329b9
- (id)_keyboardMappingData;	// 0x35e31c91
- (void)_registerAsTextFieldCharacterInputDelegate;	// 0x35e33fc5
- (void)_removeActionKeysRow;	// 0x35e323a9
- (void)_removeCursor;	// 0x35e31e69
- (void)_removeCustomizedTextFieldControls;	// 0x35e32751
- (void)_removePopupKeyboard;	// 0x35e33db1
- (void)_saveTextEntryHistory;	// 0x35e33ec9
- (void)_setActiveKeyboard:(id)keyboard;	// 0x35e32279
- (BOOL)_shouldIgnoreKey:(id)key forTextField:(id)textField;	// 0x35e31bf9
- (id)_stringFromRect:(CGRect)rect;	// 0x35e34185
- (void)_stripTrailingDotIfNecessary:(id)necessary;	// 0x35e32ba9
- (void)_swapPopupkeyboard;	// 0x35e339e5
- (void)_textDidChangeNotification:(id)_text;	// 0x35e3423d
- (void)_textDidEndEditingNotification:(id)_text;	// 0x35e342c5
- (void)_unregisterAsTextFieldCharacterInputDelegate;	// 0x35e34139
- (void)_wrapAroundEdge:(int)edge;	// 0x35e327bd
- (id)accessibilityLabel;	// 0x35e2fad5
- (id)accessibilityScreenContent;	// 0x35e2fb15
- (id)accessibilityTraits;	// 0x35e2faa9
- (id)accessibilityValue;	// 0x35e2faf5
- (BOOL)brEventAction:(id)action;	// 0x35e301b9
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x35e31155
// converted property getter: - (BOOL)canWrapVertically;	// 0x35e311c5
- (void)completeTextEntry;	// 0x35e31101
- (void)controlWasActivated;	// 0x35e2fd21
- (void)controlWasDeactivated;	// 0x35e2fdad
- (void)controlWasFocused;	// 0x35e3009d
- (void)controlWasUnfocused;	// 0x35e30135
- (void)dealloc;	// 0x35e2f871
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x35e30e9d
- (void)deleteTextEntryHistoryItem:(id)item forTextEntryHistoryClients:(id)textEntryHistoryClients textEntryBehaviors:(id)behaviors;	// 0x35e30de9
- (void)deviceKeyboardClose;	// 0x35e342d5
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x35e344d1
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x35e34355
- (void)dismissPopupKeyboard;	// 0x35e31a0d
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x35e30c31
- (BOOL)focusIsAtRightEdge;	// 0x35e3160d
- (void)invokeInputActionWithDictionary:(id)dictionary;	// 0x35e31be9
// converted property getter: - (CGPoint)keyboardFocus;	// 0x35e316c5
- (void)layoutSubcontrols;	// 0x35e2fe25
// converted property getter: - (BOOL)providesOwnFocusCursor;	// 0x35e31505
- (void)reset;	// 0x35e313b1
- (void)saveTextEntryHistory;	// 0x35e30dbd
- (void)saveTextEntryHistoryUsingClient:(id)client textEntryBehavior:(id)behavior;	// 0x35e30d7d
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x35e31179
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x35e311e9
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x35e319fd
- (void)setDeviceKeyboardTitle:(id)title subText:(id)text;	// 0x35e31871
- (void)setDisplayPlayPauseMessage:(BOOL)message;	// 0x35e31a2d
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x35e30bd5
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x35e3155d
- (void)setInitialText:(id)text;	// 0x35e312d1
// converted property setter: - (void)setKeyboardFocus:(CGPoint)focus;	// 0x35e316f5
- (void)setPopupBackgroundColor:(CGColorRef)color;	// 0x35e3199d
- (void)setPopupOutlineColor:(CGColorRef)color;	// 0x35e319d5
- (void)setPopupShadowStyle:(int)style;	// 0x35e319c5
// converted property setter: - (void)setProvidesOwnFocusCursor:(BOOL)cursor;	// 0x35e31515
- (void)setShowUserEnteredText:(BOOL)text;	// 0x35e31235
// converted property setter: - (void)setTabControl:(id)control;	// 0x35e318d5
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x35e30d09
// converted property setter: - (void)setTextEntryStyle:(int)style;	// 0x35e30759
// converted property setter: - (void)setTextField:(id)field;	// 0x35e30f61
// converted property setter: - (void)setTextFieldDelegate:(id)delegate;	// 0x35e31291
- (void)setTextFieldLabel:(id)label;	// 0x35e31435
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x35e30f19
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e2fb35
- (void)startSpinning;	// 0x35e31115
- (void)stopSpinning;	// 0x35e31135
- (void)switchToKeyboardNamed:(id)keyboardNamed focusOnKeyboardAfterSwitch:(BOOL)aSwitch;	// 0x35e317a9
// converted property getter: - (id)tabControl;	// 0x35e318c5
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x35e31c29
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x35e31c89
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x35e31c8d
// converted property getter: - (int)textEntryStyle;	// 0x35e30bc5
// converted property getter: - (id)textField;	// 0x35e30f51
// converted property getter: - (id)textFieldDelegate;	// 0x35e312b1
// converted property getter: - (int)textLengthLimit;	// 0x35e30f09
@end

