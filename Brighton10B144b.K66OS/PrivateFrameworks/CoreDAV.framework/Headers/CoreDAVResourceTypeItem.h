/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_shared;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_principal;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_collection;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_unauthenticated;	// 48 = 0x30
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x3371d291; S=0x3371d2a5; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x3371d321; S=0x3371d335; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x3371d2fd; S=0x3371d311; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x3371d2b5; S=0x3371d2c9; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x3371d2d9; S=0x3371d2ed; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x3371cb65; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x3371d345; S=0x3371d359; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x3371c54d
- (id)init;	// 0x3371c2f9
// declared property getter: - (id)addressBook;	// 0x3371d291
// declared property getter: - (id)collection;	// 0x3371d321
- (void)dealloc;	// 0x3371c325
- (id)description;	// 0x3371c3d9
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3371d029
// declared property getter: - (id)principal;	// 0x3371d2fd
// declared property getter: - (id)searchAddressBook;	// 0x3371d2b5
// declared property setter: - (void)setAddressBook:(id)book;	// 0x3371d2a5
// declared property setter: - (void)setCollection:(id)collection;	// 0x3371d335
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x3371d311
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x3371d2c9
// declared property setter: - (void)setShared:(id)shared;	// 0x3371d2ed
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x3371d359
// declared property getter: - (id)shared;	// 0x3371d2d9
// declared property getter: - (id)stringSet;	// 0x3371cb65
// declared property getter: - (id)unauthenticated;	// 0x3371d345
- (void)write:(id)write;	// 0x3371c985
@end
