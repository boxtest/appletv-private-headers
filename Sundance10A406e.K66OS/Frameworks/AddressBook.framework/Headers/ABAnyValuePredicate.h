/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"


@interface ABAnyValuePredicate : ABPredicate {
	int _property;	// 8 = 0x8
}
@property(assign, nonatomic) int property;	// G=0x329bdeb5; S=0x329bdec5; @synthesize=_property
- (id)init;	// 0x329bdd55
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x329bde75
- (BOOL)isValid;	// 0x329bdd95
// declared property getter: - (int)property;	// 0x329bdeb5
- (id)queryGroupByProperties;	// 0x329bddfd
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x329bddb1
- (id)queryWhereString;	// 0x329bde25
// declared property setter: - (void)setProperty:(int)property;	// 0x329bdec5
@end

