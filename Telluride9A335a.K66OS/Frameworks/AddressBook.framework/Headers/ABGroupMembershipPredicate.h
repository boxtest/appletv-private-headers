/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {
@private
	void *_group;	// 8 = 0x8
	void *_store;	// 12 = 0xc
	NSString *_accountIdentifier;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x3400a765; S=0x3400a80d; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *group;	// G=0x3400a785; S=0x3400aaed; @synthesize=_group
@property(assign, nonatomic) void *store;	// G=0x3400a775; S=0x3400aab9; @synthesize=_store
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x3400a91d
// declared property getter: - (id)accountIdentifier;	// 0x3400a765
- (void)dealloc;	// 0x3400a795
- (id)description;	// 0x3400a831
// declared property getter: - (void *)group;	// 0x3400a785
- (BOOL)isValid;	// 0x3400a725
- (id)queryWhereString;	// 0x3400a9cd
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x3400a80d
// declared property setter: - (void)setGroup:(void *)group;	// 0x3400aaed
// declared property setter: - (void)setStore:(void *)store;	// 0x3400aab9
// declared property getter: - (void *)store;	// 0x3400a775
@end

