/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRInputMethod.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRJapaneseInputMethod : BRInputMethod {
@private
	NSString *_mostRecentCandidateBaseCharacter;	// 32 = 0x20
}
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x32a097d9
- (id)candidates;	// 0x32a097d5
- (void)dealloc;	// 0x32a09735
- (BOOL)inputText:(id)text;	// 0x32a097d1
- (id)isoLanguageCode;	// 0x32a0978d
- (id)name;	// 0x32a09781
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x32a09799
@end
