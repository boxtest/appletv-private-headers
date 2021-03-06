/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSPredicate.h> // Unknown library


@interface ABPredicate : NSPredicate {
}
+ (id)newQueryFromABPredicate:(id)abpredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x304ea475
+ (id)newQueryFromCompoundPredicate:(id)compoundPredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x304ea9e5
+ (id)newQueryWithProperties:(id)properties joins:(id)joins whereString:(id)string sortOrder:(unsigned)order groupByProperties:(id)properties5 addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x304eaec9
+ (id)personPredicateWithAnyValueForProperty:(int)property;	// 0x304ea641
+ (id)personPredicateWithGroup:(void *)group source:(void *)source account:(id)account;	// 0x304ea531
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x304ea7d1
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account showingPersonLinks:(BOOL)links addressBook:(void *)book;	// 0x304ea769
+ (id)personPredicateWithNameLike:(id)nameLike showingPersonLinks:(BOOL)links addressBook:(void *)book;	// 0x304ea73d
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x304ea5c1
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property;	// 0x304ea6ad
+ (void)searchPeopleWithPredicate:(id)predicate sortOrder:(unsigned)order inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x304eb07d
- (id)init;	// 0x304ea2d9
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x304eb355
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x304ea29d
- (BOOL)ab_hasCallback;	// 0x304ea339
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x304ea305
- (void)bindString:(id)string toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x304ea851
- (void *)callbackContext;	// 0x304ea295
- (void)dealloc;	// 0x304ea2ad
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x304ea299
- (BOOL)hasCallback;	// 0x304ea291
- (BOOL)isValid;	// 0x304ea27d
- (id)predicateFormat;	// 0x304ea3fd
- (id)queryGroupByProperties;	// 0x304ea289
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x304ea285
- (id)querySelectProperties;	// 0x304ea281
- (id)queryWhereString;	// 0x304ea28d
@end

