/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
@private
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x365c7631; converted property
@property(readonly, assign) int property;	// G=0x365c6cf5; converted property
@property(readonly, assign) int type;	// G=0x365c6d35; converted property
@property(readonly, retain) NSString *value;	// G=0x365c6d15; converted property
+ (void)_runLookup;	// 0x365c7a5d
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x365c6d79
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x365c7729
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x365c6d55
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x365c7469
- (void *)ABPerson;	// 0x365c7601
- (int)_abUid;	// 0x365c6d45
- (void)_lookupChanged:(id)changed;	// 0x365c719d
- (void)_lookupNotFound;	// 0x365c70e1
- (void)_postEntryChanged;	// 0x365c7099
- (void)_queueLookup;	// 0x365c792d
- (void)_unqueueLookup;	// 0x365c7045
- (void)dealloc;	// 0x365c7679
- (id)dictionaryRepresentation;	// 0x365c6d8d
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x365c6f29
- (id)displayName;	// 0x365c6cbd
- (int)identifier;	// 0x365c6d25
- (BOOL)isEqual:(id)equal;	// 0x365c6f65
// converted property getter: - (id)label;	// 0x365c7631
- (id)nonLocalizedLabel;	// 0x365c6d05
// converted property getter: - (int)property;	// 0x365c6cf5
- (void)recheckAddressBook;	// 0x365c7035
// converted property getter: - (int)type;	// 0x365c6d35
// converted property getter: - (id)value;	// 0x365c6d15
@end

