/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRInputMethod.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRJapaneseInputMethod : BRInputMethod {
	NSString *_mostRecentCandidateBaseCharacter;	// 32 = 0x20
}
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x30abf5
- (id)candidates;	// 0x30abf1
- (void)dealloc;	// 0x30ab51
- (BOOL)inputText:(id)text;	// 0x30abed
- (id)isoLanguageCode;	// 0x30aba9
- (id)name;	// 0x30ab9d
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x30abb5
@end
