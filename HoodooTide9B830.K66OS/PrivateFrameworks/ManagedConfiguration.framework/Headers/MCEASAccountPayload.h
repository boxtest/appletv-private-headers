/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSNumber, NSData, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
	NSString *_accountDescription;	// 60 = 0x3c
	NSString *_hostname;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_password;	// 72 = 0x48
	NSString *_emailAddress;	// 76 = 0x4c
	BOOL _useSSL;	// 80 = 0x50
	NSNumber *_mailNumberOfPastDaysToSync;	// 84 = 0x54
	NSData *_embeddedCertificate;	// 88 = 0x58
	NSString *_embeddedCertificateName;	// 92 = 0x5c
	NSString *_embeddedCertificatePassword;	// 96 = 0x60
	NSString *_certificateUUID;	// 100 = 0x64
	NSString *_accountPersistentUUID;	// 104 = 0x68
	NSData *_certificatePersistentID;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x33b21701; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x33b21661; S=0x33b2193d; @synthesize=_accountPersistentUUID
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x33b21651; S=0x33b21961; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x33b21671; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *emailAddress;	// G=0x33b21a15; S=0x33b218f5; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSData *embeddedCertificate;	// G=0x33b216a1; @synthesize=_embeddedCertificate
@property(readonly, assign, nonatomic) NSString *embeddedCertificateName;	// G=0x33b21691; @synthesize=_embeddedCertificateName
@property(copy, nonatomic) NSString *embeddedCertificatePassword;	// G=0x33b21681; S=0x33b21919; @synthesize=_embeddedCertificatePassword
@property(readonly, assign, nonatomic) BOOL hasCertificate;	// G=0x33b21625; 
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x33b216f1; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSNumber *mailNumberOfPastDaysToSync;	// G=0x33b216b1; @synthesize=_mailNumberOfPastDaysToSync
@property(copy, nonatomic) NSString *password;	// G=0x33b216d1; S=0x33b218d1; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x33b216c1; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x33b216e1; S=0x33b218ad; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33b21825
+ (id)typeStrings;	// 0x33b21885
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b21df1
// declared property getter: - (id)accountDescription;	// 0x33b21701
// declared property getter: - (id)accountPersistentUUID;	// 0x33b21661
// declared property getter: - (id)certificatePersistentID;	// 0x33b21651
// declared property getter: - (id)certificateUUID;	// 0x33b21671
- (void)dealloc;	// 0x33b21711
- (id)description;	// 0x33b21be9
// declared property getter: - (id)emailAddress;	// 0x33b21a15
// declared property getter: - (id)embeddedCertificate;	// 0x33b216a1
// declared property getter: - (id)embeddedCertificateName;	// 0x33b21691
// declared property getter: - (id)embeddedCertificatePassword;	// 0x33b21681
// declared property getter: - (BOOL)hasCertificate;	// 0x33b21625
// declared property getter: - (id)hostname;	// 0x33b216f1
// declared property getter: - (id)mailNumberOfPastDaysToSync;	// 0x33b216b1
// declared property getter: - (id)password;	// 0x33b216d1
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x33b2193d
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x33b21961
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x33b218f5
// declared property setter: - (void)setEmbeddedCertificatePassword:(id)password;	// 0x33b21919
// declared property setter: - (void)setPassword:(id)password;	// 0x33b218d1
// declared property setter: - (void)setUsername:(id)username;	// 0x33b218ad
- (id)stubDictionary;	// 0x33b21ad5
- (id)subtitle1Description;	// 0x33b219c5
- (id)subtitle1Label;	// 0x33b219d5
- (id)subtitle2Description;	// 0x33b21989
- (id)subtitle2Label;	// 0x33b21999
- (id)title;	// 0x33b219e5
// declared property getter: - (BOOL)useSSL;	// 0x33b216c1
// declared property getter: - (id)username;	// 0x33b216e1
@end

