/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSManagedObject.h> // Unknown library

@class NSString;

@interface TIUserDictionaryWord : NSManagedObject {
	NSString *_sectionIndex;	// 48 = 0x30
}
@property(copy, nonatomic) NSString *sectionIndex;	// G=0x334c23d1; S=0x334c24f9; @synthesize=_sectionIndex
@property(copy, nonatomic) NSString *shortcut;	// S=0x334c2369; @dynamic
@property(copy, nonatomic) NSString *target;	// S=0x334c2301; @dynamic
+ (id)entityDescription;	// 0x334c16ed
+ (id)predicateFilteringForSearchText:(id)searchText;	// 0x334c19c9
+ (id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;	// 0x334c1991
+ (id)sortDescriptors;	// 0x334c18cd
+ (BOOL)userWord:(id)word duplicatesTarget:(id)target andShortcut:(id)shortcut;	// 0x334c1d19
+ (int)validateWithNewTarget:(id)newTarget newShortcut:(id)shortcut otherWords:(id)words;	// 0x334c1a79
- (id)changeDescription;	// 0x334c2261
- (id)changeDescriptionKey:(id)key;	// 0x334c2055
- (int)compare:(id)compare;	// 0x334c19fd
- (id)copyWithContext:(id)context;	// 0x334c1f89
- (void)dealloc;	// 0x334c16a1
- (id)filteredValues:(id)values;	// 0x334c20a5
- (BOOL)hasChangesToTargetOrShortcut;	// 0x334c1ffd
// declared property getter: - (id)sectionIndex;	// 0x334c23d1
// declared property setter: - (void)setSectionIndex:(id)index;	// 0x334c24f9
// declared property setter: - (void)setShortcut:(id)shortcut;	// 0x334c2369
// declared property setter: - (void)setTarget:(id)target;	// 0x334c2301
- (void)takeValuesFrom:(id)from overwriteExistingValues:(BOOL)values;	// 0x334c1dc1
- (void)updateTimestamp;	// 0x334c1ff9
@end

