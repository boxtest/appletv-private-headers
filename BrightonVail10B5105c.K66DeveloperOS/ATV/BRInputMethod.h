/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString, BRKeyboard, BRKeyboardCandidates, NSString, NSArray;

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
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x303315; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x3035f9; S=0x303261; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x3032d5; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x303251; converted property
- (id)init;	// 0x3030b9
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x30360d
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x303609
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x3036c9
- (id)candidates;	// 0x3035f5
// converted property getter: - (id)candidatesKeyboard;	// 0x303315
- (void)dealloc;	// 0x30311d
- (BOOL)deleteText;	// 0x3034c1
- (void)flushText;	// 0x303581
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x3035f9
- (BOOL)inputText:(id)text;	// 0x3033a1
- (id)isoLanguageCode;	// 0x3031b5
// converted property getter: - (id)keyboards;	// 0x3032d5
- (id)mostRecentCharacter;	// 0x3034b1
- (id)name;	// 0x3031a9
- (void)removeCandidatesKeyboard;	// 0x303365
- (void)setActiveKeyboard:(id)keyboard;	// 0x303301
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x303261
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x3031b9
// converted property getter: - (int)textEntryStyle;	// 0x303251
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x303311
@end

