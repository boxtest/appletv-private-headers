/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSNumber, NSData, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
	NSString *_accountDescription;	// 64 = 0x40
	NSString *_hostname;	// 68 = 0x44
	NSString *_username;	// 72 = 0x48
	NSString *_password;	// 76 = 0x4c
	NSString *_emailAddress;	// 80 = 0x50
	BOOL _useSSL;	// 84 = 0x54
	NSNumber *_mailNumberOfPastDaysToSync;	// 88 = 0x58
	NSData *_embeddedCertificate;	// 92 = 0x5c
	NSString *_embeddedCertificateName;	// 96 = 0x60
	NSString *_embeddedCertificatePassword;	// 100 = 0x64
	NSString *_certificateUUID;	// 104 = 0x68
	NSString *_accountPersistentUUID;	// 108 = 0x6c
	NSData *_certificatePersistentID;	// 112 = 0x70
	BOOL _syncDefaultFoldersOnly;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x32ba0b01; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x32ba0bed; S=0x32ba0c01; @synthesize=_accountPersistentUUID
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x32ba0c11; S=0x32ba0c21; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x32ba0bdd; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *emailAddress;	// G=0x32ba0935; S=0x32ba0b69; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSData *embeddedCertificate;	// G=0x32ba0b99; @synthesize=_embeddedCertificate
@property(readonly, assign, nonatomic) NSString *embeddedCertificateName;	// G=0x32ba0ba9; @synthesize=_embeddedCertificateName
@property(copy, nonatomic) NSString *embeddedCertificatePassword;	// G=0x32ba0bb9; S=0x32ba0bcd; @synthesize=_embeddedCertificatePassword
@property(readonly, assign, nonatomic) BOOL hasCertificate;	// G=0x32ba0595; 
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x32ba0b11; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSNumber *mailNumberOfPastDaysToSync;	// G=0x32ba0b89; @synthesize=_mailNumberOfPastDaysToSync
@property(copy, nonatomic) NSString *password;	// G=0x32ba0b45; S=0x32ba0b59; @synthesize=_password
@property(assign, nonatomic) BOOL syncDefaultFoldersOnly;	// G=0x32ba0c49; S=0x32ba0c59; @synthesize=_syncDefaultFoldersOnly
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x32ba0b79; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x32ba0b21; S=0x32ba0b35; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b9fc29
+ (id)typeStrings;	// 0x32b9fc01
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b9fcb1
- (void).cxx_destruct;	// 0x32ba0c69
// declared property getter: - (id)accountDescription;	// 0x32ba0b01
// declared property getter: - (id)accountPersistentUUID;	// 0x32ba0bed
// declared property getter: - (id)certificatePersistentID;	// 0x32ba0c11
// declared property getter: - (id)certificateUUID;	// 0x32ba0bdd
- (id)description;	// 0x32ba05c5
// declared property getter: - (id)emailAddress;	// 0x32ba0935
// declared property getter: - (id)embeddedCertificate;	// 0x32ba0b99
// declared property getter: - (id)embeddedCertificateName;	// 0x32ba0ba9
// declared property getter: - (id)embeddedCertificatePassword;	// 0x32ba0bb9
// declared property getter: - (BOOL)hasCertificate;	// 0x32ba0595
// declared property getter: - (id)hostname;	// 0x32ba0b11
// declared property getter: - (id)mailNumberOfPastDaysToSync;	// 0x32ba0b89
// declared property getter: - (id)password;	// 0x32ba0b45
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x32ba0c01
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x32ba0c21
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x32ba0b69
// declared property setter: - (void)setEmbeddedCertificatePassword:(id)password;	// 0x32ba0bcd
// declared property setter: - (void)setPassword:(id)password;	// 0x32ba0b59
// declared property setter: - (void)setSyncDefaultFoldersOnly:(BOOL)only;	// 0x32ba0c59
// declared property setter: - (void)setUsername:(id)username;	// 0x32ba0b35
- (id)stubDictionary;	// 0x32ba0815
- (id)subtitle1Description;	// 0x32ba0a99
- (id)subtitle1Label;	// 0x32ba0a89
- (id)subtitle2Description;	// 0x32ba0af1
- (id)subtitle2Label;	// 0x32ba0aa9
// declared property getter: - (BOOL)syncDefaultFoldersOnly;	// 0x32ba0c49
- (id)title;	// 0x32ba0a2d
// declared property getter: - (BOOL)useSSL;	// 0x32ba0b79
// declared property getter: - (id)username;	// 0x32ba0b21
@end

