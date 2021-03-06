/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, ASFolderItemsSyncResponse, NSNumber, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x36c37121; S=0x36c37159; converted property
@property(retain) NSString *collectionId;	// G=0x36c38e91; S=0x36c38ec9; converted property
@property(readonly, assign) int dataclass;	// G=0x36c36f71; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x36c38f89; S=0x36c38fc1; converted property
@property(retain) NSArray *responseItems;	// G=0x36c3719d; S=0x36c371d5; converted property
@property(retain) NSNumber *status;	// G=0x36c38f0d; S=0x36c38f45; converted property
@property(retain) NSString *syncKey;	// G=0x36c38e15; S=0x36c38e4d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c36cbd
+ (id)asParseRules;	// 0x36c37219
+ (BOOL)frontingBasicTypes;	// 0x36c36db9
+ (BOOL)notifyOfUnknownTokens;	// 0x36c36e0d
+ (BOOL)parsingLeafNode;	// 0x36c36d11
+ (BOOL)parsingWithSubItems;	// 0x36c36d65
- (id)init;	// 0x36c36e61
// converted property getter: - (id)changedItems;	// 0x36c37121
// converted property getter: - (id)collectionId;	// 0x36c38e91
// converted property getter: - (int)dataclass;	// 0x36c36f71
- (void)dealloc;	// 0x36c36ead
- (id)description;	// 0x36c39005
// converted property getter: - (id)moreAvailable;	// 0x36c38f89
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36c38cad
// converted property getter: - (id)responseItems;	// 0x36c3719d
// converted property setter: - (void)setChangedItems:(id)items;	// 0x36c37159
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x36c38ec9
- (void)setDataclassString:(id)string;	// 0x36c37041
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x36c38fc1
- (void)setParentResponse:(id)response;	// 0x36c36f61
// converted property setter: - (void)setResponseItems:(id)items;	// 0x36c371d5
// converted property setter: - (void)setStatus:(id)status;	// 0x36c38f45
// converted property setter: - (void)setSyncKey:(id)key;	// 0x36c38e4d
- (int)sniffableTypeForAccount:(id)account;	// 0x36c38da5
// converted property getter: - (id)status;	// 0x36c38f0d
// converted property getter: - (id)syncKey;	// 0x36c38e15
@end

