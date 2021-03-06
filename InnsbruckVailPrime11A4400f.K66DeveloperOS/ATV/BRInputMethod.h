/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BRKeyboard, BRKeyboardCandidates, NSArray, NSMutableString;

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
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x35fb05; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x35fded; S=0x35fa51; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x35fac5; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x35fa41; converted property
- (id)init;	// 0x35f8a1
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x35fe01
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x35fdfd
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x35febd
- (id)candidates;	// 0x35fde9
// converted property getter: - (id)candidatesKeyboard;	// 0x35fb05
- (void)dealloc;	// 0x35f905
- (BOOL)deleteText;	// 0x35fcb1
- (void)flushText;	// 0x35fd75
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x35fded
- (BOOL)inputText:(id)text;	// 0x35fb91
- (id)isoLanguageCode;	// 0x35f99d
// converted property getter: - (id)keyboards;	// 0x35fac5
- (id)mostRecentCharacter;	// 0x35fca1
- (id)name;	// 0x35f991
- (void)removeCandidatesKeyboard;	// 0x35fb55
- (void)setActiveKeyboard:(id)keyboard;	// 0x35faf1
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x35fa51
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x35f9a1
// converted property getter: - (int)textEntryStyle;	// 0x35fa41
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x35fb01
@end

