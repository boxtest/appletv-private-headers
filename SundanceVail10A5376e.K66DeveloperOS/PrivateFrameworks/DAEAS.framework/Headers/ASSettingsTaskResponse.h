/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class ASSettingsTaskUserInformationResponse, NSNumber;

@interface ASSettingsTaskResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationResponse *_userInformation;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *status;	// G=0x32277abd; S=0x32277acd; @synthesize=_status
@property(retain, nonatomic) ASSettingsTaskUserInformationResponse *userInformation;	// G=0x32277add; S=0x32277aed; @synthesize=_userInformation
+ (BOOL)acceptsTopLevelLeaves;	// 0x3227753d
+ (id)asParseRules;	// 0x322777ad
+ (BOOL)frontingBasicTypes;	// 0x32277639
+ (BOOL)notifyOfUnknownTokens;	// 0x3227768d
+ (BOOL)parsingLeafNode;	// 0x32277591
+ (BOOL)parsingWithSubItems;	// 0x322775e5
- (void)dealloc;	// 0x322776e1
- (id)description;	// 0x32277745
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32277a15
// declared property setter: - (void)setStatus:(id)status;	// 0x32277acd
// declared property setter: - (void)setUserInformation:(id)information;	// 0x32277aed
// declared property getter: - (id)status;	// 0x32277abd
// declared property getter: - (id)userInformation;	// 0x32277add
@end
