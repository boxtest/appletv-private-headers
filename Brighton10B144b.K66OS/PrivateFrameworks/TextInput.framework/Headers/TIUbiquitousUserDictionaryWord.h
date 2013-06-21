/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIUserDictionaryWord.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TIUbiquitousUserDictionaryWord : TIUserDictionaryWord {
}
@property(retain) id target;	// G=0x359af8dd; S=0x359af8f9; converted property
@property(retain, nonatomic) NSNumber *timestamp;	// @dynamic
+ (id)predicateFilteringForSearchText:(id)searchText;	// 0x359af8a9
+ (id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;	// 0x359af871
+ (id)sortDescriptors;	// 0x359af7a9
- (id)changeDescriptionKey:(id)key;	// 0x359afa71
- (int)compareTimestamps:(id)timestamps;	// 0x359af9a5
- (BOOL)hasChangesToTargetOrShortcut;	// 0x359afa15
// converted property setter: - (void)setTarget:(id)target;	// 0x359af8f9
// converted property getter: - (id)target;	// 0x359af8dd
- (void)updateTimestamp;	// 0x359af961
@end
