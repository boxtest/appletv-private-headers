/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface ABContactsFilter : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSArray *_groups;	// 8 = 0x8
	NSArray *_sources;	// 12 = 0xc
	void *_directorySource;	// 16 = 0x10
	BOOL _showsAllContacts;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) void *addressBook;	// G=0x370dc3cd; 
@property(readonly, assign, nonatomic) void *directorySource;	// G=0x370dd911; @synthesize=_directorySource
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x370dd229; 
@property(readonly, assign, nonatomic) void *groupForNewRecords;	// G=0x370dd395; 
@property(readonly, assign, nonatomic) NSArray *groups;	// G=0x370dd901; @synthesize=_groups
@property(readonly, assign, nonatomic) BOOL isDirectory;	// G=0x370dcd8d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x370dd3dd; 
@property(readonly, assign, nonatomic) BOOL shouldChangeModelSelectionWhenDisplayed;	// G=0x370dcda5; 
@property(readonly, assign, nonatomic) BOOL showsAllContacts;	// G=0x370dd921; @synthesize=_showsAllContacts
@property(readonly, assign, nonatomic) void *sourceForNewRecords;	// G=0x370dd3b9; 
@property(readonly, assign, nonatomic) NSArray *sources;	// G=0x370dd0a9; @synthesize=_sources
+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)groupWrapperRepresentation withAddressBook:(void *)addressBook;	// 0x370dc41d
+ (id)newContactsFilterFromDictionaryRepresentation:(id)dictionaryRepresentation withAddressBook:(void *)addressBook;	// 0x370dc68d
- (id)initWithAddressBook:(void *)addressBook;	// 0x370dc289
- (id)initWithDirectorySource:(void *)directorySource addressBook:(void *)book;	// 0x370dc2bd
- (id)initWithGroups:(id)groups sources:(id)sources addressBook:(void *)book;	// 0x370dc0a9
- (void *)_defaultSourceForAccountContainingSource:(void *)accountContainingSource;	// 0x370dcdc9
- (void)_getWritableSource:(const void **)source andGroup:(const void **)group;	// 0x370dcdf1
- (id)_sortedRecordsForRecords:(id)records byNameProperty:(int)property;	// 0x370dd441
// declared property getter: - (void *)addressBook;	// 0x370dc3cd
- (id)copyDictionaryRepresentation;	// 0x370dca6d
- (void)dealloc;	// 0x370dc33d
- (id)description;	// 0x370dd5a1
// declared property getter: - (void *)directorySource;	// 0x370dd911
// declared property getter: - (void *)groupForNewRecords;	// 0x370dd395
// declared property getter: - (id)groups;	// 0x370dd901
- (unsigned)hash;	// 0x370dd799
- (void)invalidateSourcesForAllContacts;	// 0x370dc3dd
// declared property getter: - (BOOL)isDirectory;	// 0x370dcd8d
// declared property getter: - (BOOL)isEditable;	// 0x370dd229
- (BOOL)isEqual:(id)equal;	// 0x370dd639
// declared property getter: - (id)name;	// 0x370dd3dd
// declared property getter: - (BOOL)shouldChangeModelSelectionWhenDisplayed;	// 0x370dcda5
// declared property getter: - (BOOL)showsAllContacts;	// 0x370dd921
- (id)sortedGroupsForGroups:(id)groups;	// 0x370dd561
- (id)sortedSourcesForSources:(id)sources;	// 0x370dd581
// declared property getter: - (void *)sourceForNewRecords;	// 0x370dd3b9
// declared property getter: - (id)sources;	// 0x370dd0a9
@end
