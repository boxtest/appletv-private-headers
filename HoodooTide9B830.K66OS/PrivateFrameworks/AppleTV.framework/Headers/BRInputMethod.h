/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, BRKeyboard, NSMutableString, NSString, BRKeyboardCandidates;

__attribute__((visibility("hidden")))
@interface BRInputMethod : NSObject {
@private
	int _textEntryStyle;	// 4 = 0x4
	NSArray *_keyboards;	// 8 = 0x8
	BOOL _includeHistoryKeyboard;	// 12 = 0xc
	NSString *_mostRecentCandidateCharacter;	// 16 = 0x10
	NSMutableString *_candidatesBuffer;	// 20 = 0x14
	BRKeyboard *_activeKeyboard;	// 24 = 0x18
	BRKeyboardCandidates *_candidatesKeyboard;	// 28 = 0x1c
}
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x32a09279; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x32a09551; S=0x32a091ad; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x32a09239; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x32a0919d; converted property
- (id)init;	// 0x32a08ff5
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x32a09565
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x32a09561
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x32a09621
- (id)candidates;	// 0x32a0954d
// converted property getter: - (id)candidatesKeyboard;	// 0x32a09279
- (void)dealloc;	// 0x32a09059
- (BOOL)deleteText;	// 0x32a0940d
- (void)flushText;	// 0x32a094d9
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x32a09551
- (BOOL)inputText:(id)text;	// 0x32a09309
- (id)isoLanguageCode;	// 0x32a090ed
// converted property getter: - (id)keyboards;	// 0x32a09239
- (id)mostRecentCharacter;	// 0x32a093fd
- (id)name;	// 0x32a090e1
- (void)removeCandidatesKeyboard;	// 0x32a092c9
- (void)setActiveKeyboard:(id)keyboard;	// 0x32a09265
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x32a091ad
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x32a090f1
// converted property getter: - (int)textEntryStyle;	// 0x32a0919d
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x32a09275
@end
