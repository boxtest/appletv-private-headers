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
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x2e61e1
- (id)candidates;	// 0x2e61dd
- (void)dealloc;	// 0x2e613d
- (BOOL)inputText:(id)text;	// 0x2e61d9
- (id)isoLanguageCode;	// 0x2e6195
- (id)name;	// 0x2e6189
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x2e61a1
@end

