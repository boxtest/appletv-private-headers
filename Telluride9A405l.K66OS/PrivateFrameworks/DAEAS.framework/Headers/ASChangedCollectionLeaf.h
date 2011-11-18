/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSDictionary, NSNumber, NSString;

@interface ASChangedCollectionLeaf : ASItem <NSCoding> {
	int _changeType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_clientID;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	BOOL _isResponse;	// 56 = 0x38
	BOOL _validateOpeningTokens;	// 57 = 0x39
	NSDictionary *_applicationData;	// 60 = 0x3c
}
@property(retain) NSDictionary *applicationData;	// G=0x341d21c9; S=0x341d21dd; @synthesize=_applicationData
@property(assign) int changeType;	// G=0x341d2101; S=0x341d2111; @synthesize=_changeType
@property(copy) NSString *clientID;	// G=0x341d2159; S=0x341d216d; @synthesize=_clientID
@property(readonly, assign) BOOL isResponse;	// G=0x341d1ae1; converted property
@property(retain) NSString *serverID;	// G=0x341d2121; S=0x341d2135; @synthesize=_serverID
@property(copy) NSNumber *status;	// G=0x341d2191; S=0x341d21a5; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x341d1379
+ (BOOL)frontingBasicTypes;	// 0x341d1475
+ (BOOL)notifyOfUnknownTokens;	// 0x341d14c9
+ (BOOL)parsingLeafNode;	// 0x341d13cd
+ (BOOL)parsingWithSubItems;	// 0x341d1421
- (id)init;	// 0x341d151d
- (id)initWithCoder:(id)coder;	// 0x341d1d75
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x341d196d
// declared property getter: - (id)applicationData;	// 0x341d21c9
- (id)asParseRules;	// 0x341d1af1
// declared property getter: - (int)changeType;	// 0x341d2101
// declared property getter: - (id)clientID;	// 0x341d2159
- (int)dataclass;	// 0x341d19fd
- (void)dealloc;	// 0x341d1a49
- (void)encodeWithCoder:(id)coder;	// 0x341d1f65
// converted property getter: - (BOOL)isResponse;	// 0x341d1ae1
- (void)loadClientIDs;	// 0x341d19b5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x341d155d
// declared property getter: - (id)serverID;	// 0x341d2121
// declared property setter: - (void)setApplicationData:(id)data;	// 0x341d21dd
// declared property setter: - (void)setChangeType:(int)type;	// 0x341d2111
// declared property setter: - (void)setClientID:(id)anId;	// 0x341d216d
// declared property setter: - (void)setServerID:(id)anId;	// 0x341d2135
// declared property setter: - (void)setStatus:(id)status;	// 0x341d21a5
- (void)setValidateOpeningTokens:(BOOL)tokens;	// 0x341d1ad1
// declared property getter: - (id)status;	// 0x341d2191
@end

