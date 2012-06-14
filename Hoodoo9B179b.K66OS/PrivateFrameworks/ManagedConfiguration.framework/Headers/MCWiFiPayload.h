/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSArray, NSNumber, NSDictionary;

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
@property(readonly, assign, nonatomic) BOOL autoJoin;	// G=0x348c5bed; @synthesize=_autoJoin
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x348c5b8d; @synthesize=_certificateUUID
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x348c5b0d; S=0x348c79d9; @synthesize=_credentialUUID
@property(readonly, assign, nonatomic) NSDictionary *eapClientConfig;	// G=0x348c5bdd; @synthesize=_eapClientConfig
@property(readonly, assign, nonatomic) NSString *encryptionType;	// G=0x348c5c1d; @synthesize=_encryptionType
@property(readonly, assign, nonatomic) BOOL isHidden;	// G=0x348c5c2d; @synthesize=_hidden
@property(readonly, assign, nonatomic) BOOL isWEP;	// G=0x348c5c0d; @synthesize=_isWEP
@property(readonly, assign, nonatomic) BOOL isWPA;	// G=0x348c5bfd; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x348c5b9d; S=0x348c79b1; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL passwordRequired;	// G=0x348c5bad; @synthesize=_passwordRequired
@property(readonly, assign, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x348c5b7d; @synthesize=_payloadCertificateAnchorUUID
@property(readonly, assign, nonatomic) NSString *proxyPACURLString;	// G=0x348c5b1d; @synthesize=_proxyPACURLString
@property(readonly, assign, nonatomic) NSString *proxyPassword;	// G=0x348c5b2d; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyServer;	// G=0x348c5b5d; @synthesize=_proxyServer
@property(readonly, assign, nonatomic) NSNumber *proxyServerPort;	// G=0x348c5b4d; @synthesize=_proxyServerPort
@property(readonly, assign, nonatomic) int proxyType;	// G=0x348c5b6d; @synthesize=_proxyType
@property(readonly, assign, nonatomic) NSString *proxyUsername;	// G=0x348c5b3d; @synthesize=_proxyUsername
@property(readonly, assign, nonatomic) NSString *ssid;	// G=0x348c5c3d; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x348c5bbd; S=0x348c7989; @synthesize=_username
@property(readonly, assign, nonatomic) BOOL usernameRequired;	// G=0x348c5bcd; @synthesize=_usernameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x348c7909
+ (id)typeStrings;	// 0x348c5e49
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348c68e9
- (BOOL)_configIsValid:(id)valid error:(id *)error;	// 0x348c5e71
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x348c5d11
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x348c5c4d
- (BOOL)_isEAPSIMConfig:(id)config;	// 0x348c5dd5
// declared property getter: - (BOOL)autoJoin;	// 0x348c5bed
// declared property getter: - (id)certificateUUID;	// 0x348c5b8d
// declared property getter: - (id)credentialUUID;	// 0x348c5b0d
- (void)dealloc;	// 0x348c7e51
- (id)description;	// 0x348c7a01
// declared property getter: - (id)eapClientConfig;	// 0x348c5bdd
// declared property getter: - (id)encryptionType;	// 0x348c5c1d
// declared property getter: - (BOOL)isHidden;	// 0x348c5c2d
// declared property getter: - (BOOL)isWEP;	// 0x348c5c0d
// declared property getter: - (BOOL)isWPA;	// 0x348c5bfd
// declared property getter: - (id)password;	// 0x348c5b9d
// declared property getter: - (BOOL)passwordRequired;	// 0x348c5bad
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x348c5b7d
// declared property getter: - (id)proxyPACURLString;	// 0x348c5b1d
// declared property getter: - (id)proxyPassword;	// 0x348c5b2d
// declared property getter: - (id)proxyServer;	// 0x348c5b5d
// declared property getter: - (id)proxyServerPort;	// 0x348c5b4d
// declared property getter: - (int)proxyType;	// 0x348c5b6d
// declared property getter: - (id)proxyUsername;	// 0x348c5b3d
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x348c79d9
// declared property setter: - (void)setPassword:(id)password;	// 0x348c79b1
// declared property setter: - (void)setUsername:(id)username;	// 0x348c7989
// declared property getter: - (id)ssid;	// 0x348c5c3d
- (id)stubDictionary;	// 0x348c7cad
- (id)subtitle1Description;	// 0x348c5e39
- (id)subtitle1Label;	// 0x348c7c9d
- (id)subtitle2Description;	// 0x348c7c35
- (id)subtitle2Label;	// 0x348c7c8d
// declared property getter: - (id)username;	// 0x348c5bbd
// declared property getter: - (BOOL)usernameRequired;	// 0x348c5bcd
@end
