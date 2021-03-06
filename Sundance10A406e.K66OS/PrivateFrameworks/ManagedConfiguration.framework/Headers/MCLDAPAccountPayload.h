/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSArray *_searchSettings;	// 60 = 0x3c
	NSString *_accountPersistentUUID;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x357aae91; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x357aaf41; S=0x357aaf55; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x357aaea1; @synthesize=_hostname
@property(retain, nonatomic) NSString *password;	// G=0x357aaee9; S=0x357aaef9; @synthesize=_password
@property(readonly, assign, nonatomic) NSArray *searchSettings;	// G=0x357aaf31; @synthesize=_searchSettings
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x357aaf21; @synthesize=_useSSL
@property(retain, nonatomic) NSString *username;	// G=0x357aaeb1; S=0x357aaec1; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x357aa48d
+ (id)typeStrings;	// 0x357aa465
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x357aa515
- (void).cxx_destruct;	// 0x357aaf65
// declared property getter: - (id)accountDescription;	// 0x357aae91
// declared property getter: - (id)accountPersistentUUID;	// 0x357aaf41
- (id)description;	// 0x357aaaad
// declared property getter: - (id)hostname;	// 0x357aaea1
// declared property getter: - (id)password;	// 0x357aaee9
// declared property getter: - (id)searchSettings;	// 0x357aaf31
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x357aaf55
// declared property setter: - (void)setPassword:(id)password;	// 0x357aaef9
// declared property setter: - (void)setUsername:(id)username;	// 0x357aaec1
- (id)stubDictionary;	// 0x357aac41
- (id)subtitle1Description;	// 0x357aad9d
- (id)subtitle1Label;	// 0x357aad8d
- (id)subtitle2Description;	// 0x357aae21
- (id)subtitle2Label;	// 0x357aadad
- (id)title;	// 0x357aad31
// declared property getter: - (BOOL)useSSL;	// 0x357aaf21
// declared property getter: - (id)username;	// 0x357aaeb1
@end

