/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject {
	ABFavoritesListManager *_favoritesListManager;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x34f92b69
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x34f7837d
- (id)initWithAddressBook:(void *)addressBook;	// 0x34f783c9
- (void)_applicationWillSuspend:(id)_application;	// 0x34fabf69
- (void)addEntry:(id)entry;	// 0x34f92b7d
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x34fac0b1
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x34fac049
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x34f785e9
- (void)dealloc;	// 0x34fabf0d
- (id)entries;	// 0x34fabf89
- (id)entriesForPerson:(void *)person;	// 0x34fabfa9
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x34fac0e5
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x34fac071
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x34fac091
- (BOOL)isFull;	// 0x34f78485
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x34fabfe9
- (void)recacheIdentitiesSoon;	// 0x34fac029
- (void)removeEntryAtIndex:(int)index;	// 0x34fabfc9
- (void)save;	// 0x34fac009
@end
