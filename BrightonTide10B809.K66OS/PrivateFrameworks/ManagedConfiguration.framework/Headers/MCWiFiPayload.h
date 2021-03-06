/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSNumber, NSString, NSArray;

@interface MCWiFiPayload : MCPayload {
	NSString *_ssid;	// 40 = 0x28
	BOOL _hidden;	// 44 = 0x2c
	NSString *_encryptionType;	// 48 = 0x30
	BOOL _isWEP;	// 52 = 0x34
	BOOL _isWPA;	// 53 = 0x35
	BOOL _autoJoin;	// 54 = 0x36
	NSDictionary *_eapClientConfig;	// 56 = 0x38
	BOOL _passwordRequired;	// 60 = 0x3c
	BOOL _usernameRequired;	// 61 = 0x3d
	NSString *_password;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_certificateUUID;	// 72 = 0x48
	NSArray *_payloadCertificateAnchorUUID;	// 76 = 0x4c
	int _proxyType;	// 80 = 0x50
	NSString *_proxyServer;	// 84 = 0x54
	NSNumber *_proxyServerPort;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_proxyPACURLString;	// 96 = 0x60
	NSString *_credentialUUID;	// 100 = 0x64
	NSString *_proxyUsername;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BOOL autoJoin;	// G=0x344c2d31; @synthesize=_autoJoin
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x344c2de1; @synthesize=_certificateUUID
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x344c2e61; S=0x344c2e71; @synthesize=_credentialUUID
@property(readonly, assign, nonatomic) NSDictionary *eapClientConfig;	// G=0x344c2d41; @synthesize=_eapClientConfig
@property(readonly, assign, nonatomic) NSString *encryptionType;	// G=0x344c2d01; @synthesize=_encryptionType
@property(readonly, assign, nonatomic) BOOL isHidden;	// G=0x344c2cf1; @synthesize=_hidden
@property(readonly, assign, nonatomic) BOOL isWEP;	// G=0x344c2d11; @synthesize=_isWEP
@property(readonly, assign, nonatomic) BOOL isWPA;	// G=0x344c2d21; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x344c2da9; S=0x344c2db9; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL passwordRequired;	// G=0x344c2d99; @synthesize=_passwordRequired
@property(readonly, assign, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x344c2df1; @synthesize=_payloadCertificateAnchorUUID
@property(readonly, assign, nonatomic) NSString *proxyPACURLString;	// G=0x344c2e51; @synthesize=_proxyPACURLString
@property(readonly, assign, nonatomic) NSString *proxyPassword;	// G=0x344c2e41; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyServer;	// G=0x344c2e11; @synthesize=_proxyServer
@property(readonly, assign, nonatomic) NSNumber *proxyServerPort;	// G=0x344c2e21; @synthesize=_proxyServerPort
@property(readonly, assign, nonatomic) int proxyType;	// G=0x344c2e01; @synthesize=_proxyType
@property(readonly, assign, nonatomic) NSString *proxyUsername;	// G=0x344c2e31; @synthesize=_proxyUsername
@property(readonly, assign, nonatomic) NSString *ssid;	// G=0x344c2ce1; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x344c2d61; S=0x344c2d71; @synthesize=_username
@property(readonly, assign, nonatomic) BOOL usernameRequired;	// G=0x344c2d51; @synthesize=_usernameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344c08e1
+ (id)typeStrings;	// 0x344c08b9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344c16dd
- (void).cxx_destruct;	// 0x344c2e99
- (BOOL)_configIsValid:(id)valid error:(id *)error;	// 0x344c09a9
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x344c1521
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x344c13e1
- (BOOL)_isEAPSIMConfig:(id)config;	// 0x344c1661
// declared property getter: - (BOOL)autoJoin;	// 0x344c2d31
// declared property getter: - (id)certificateUUID;	// 0x344c2de1
// declared property getter: - (id)credentialUUID;	// 0x344c2e61
- (id)description;	// 0x344c2a2d
// declared property getter: - (id)eapClientConfig;	// 0x344c2d41
// declared property getter: - (id)encryptionType;	// 0x344c2d01
// declared property getter: - (BOOL)isHidden;	// 0x344c2cf1
// declared property getter: - (BOOL)isWEP;	// 0x344c2d11
// declared property getter: - (BOOL)isWPA;	// 0x344c2d21
// declared property getter: - (id)password;	// 0x344c2da9
// declared property getter: - (BOOL)passwordRequired;	// 0x344c2d99
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x344c2df1
// declared property getter: - (id)proxyPACURLString;	// 0x344c2e51
// declared property getter: - (id)proxyPassword;	// 0x344c2e41
// declared property getter: - (id)proxyServer;	// 0x344c2e11
// declared property getter: - (id)proxyServerPort;	// 0x344c2e21
// declared property getter: - (int)proxyType;	// 0x344c2e01
// declared property getter: - (id)proxyUsername;	// 0x344c2e31
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x344c2e71
// declared property setter: - (void)setPassword:(id)password;	// 0x344c2db9
// declared property setter: - (void)setUsername:(id)username;	// 0x344c2d71
// declared property getter: - (id)ssid;	// 0x344c2ce1
- (id)stubDictionary;	// 0x344c279d
- (id)subtitle1Description;	// 0x344c2985
- (id)subtitle1Label;	// 0x344c2975
- (id)subtitle2Description;	// 0x344c29a5
- (id)subtitle2Label;	// 0x344c2995
// declared property getter: - (id)username;	// 0x344c2d61
// declared property getter: - (BOOL)usernameRequired;	// 0x344c2d51
@end

