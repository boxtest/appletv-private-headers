/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRKeyboard, NSString, BRKeyboardCandidates, NSArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface BRInputMethod : XXUnknownSuperclass {
	int _textEntryStyle;	// 4 = 0x4
	NSArray *_keyboards;	// 8 = 0x8
	BOOL _includeHistoryKeyboard;	// 12 = 0xc
	NSString *_mostRecentCandidateCharacter;	// 16 = 0x10
	NSMutableString *_candidatesBuffer;	// 20 = 0x14
	BRKeyboard *_activeKeyboard;	// 24 = 0x18
	BRKeyboardCandidates *_candidatesKeyboard;	// 28 = 0x1c
}
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x2d98e9; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x2d9bcd; S=0x2d9835; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x2d98a9; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x2d9825; converted property
- (id)init;	// 0x2d968d
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x2d9be1
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x2d9bdd
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x2d9c9d
- (id)candidates;	// 0x2d9bc9
// converted property getter: - (id)candidatesKeyboard;	// 0x2d98e9
- (void)dealloc;	// 0x2d96f1
- (BOOL)deleteText;	// 0x2d9a95
- (void)flushText;	// 0x2d9b55
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x2d9bcd
- (BOOL)inputText:(id)text;	// 0x2d9975
- (id)isoLanguageCode;	// 0x2d9789
// converted property getter: - (id)keyboards;	// 0x2d98a9
- (id)mostRecentCharacter;	// 0x2d9a85
- (id)name;	// 0x2d977d
- (void)removeCandidatesKeyboard;	// 0x2d9939
- (void)setActiveKeyboard:(id)keyboard;	// 0x2d98d5
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x2d9835
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x2d978d
// converted property getter: - (int)textEntryStyle;	// 0x2d9825
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x2d98e5
@end
