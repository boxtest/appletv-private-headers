/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
	BOOL _preventMove;	// 40 = 0x28
	BOOL _preventAppSheet;	// 41 = 0x29
	BOOL _SMIMEEnabled;	// 42 = 0x2a
	BOOL _SMIMEEncryptionEnabled;	// 43 = 0x2b
	NSString *_SMIMESigningIdentityUUID;	// 44 = 0x2c
	NSString *_SMIMEEncryptionIdentityUUID;	// 48 = 0x30
	NSData *_SMIMESigningIdentityPersistentID;	// 52 = 0x34
	NSData *_SMIMEEncryptionIdentityPersistentID;	// 56 = 0x38
	BOOL _isRecentsSyncingDisabled;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) BOOL SMIMEEnabled;	// G=0x346b542d; @synthesize=_SMIMEEnabled
@property(readonly, assign, nonatomic) BOOL SMIMEEncryptionEnabled;	// G=0x346b543d; @synthesize=_SMIMEEncryptionEnabled
@property(retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;	// G=0x346b54b5; S=0x346b54c5; @synthesize=_SMIMEEncryptionIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMEEncryptionIdentityUUID;	// G=0x346b546d; @synthesize=_SMIMEEncryptionIdentityUUID
@property(retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;	// G=0x346b547d; S=0x346b548d; @synthesize=_SMIMESigningIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMESigningIdentityUUID;	// G=0x346b545d; @synthesize=_SMIMESigningIdentityUUID
@property(readonly, assign, nonatomic) BOOL isRecentsSyncingDisabled;	// G=0x346b544d; @synthesize=_isRecentsSyncingDisabled
@property(readonly, assign, nonatomic) BOOL preventAppSheet;	// G=0x346b541d; @synthesize=_preventAppSheet
@property(readonly, assign, nonatomic) BOOL preventMove;	// G=0x346b540d; @synthesize=_preventMove
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x346b4a89
- (void).cxx_destruct;	// 0x346b54ed
// declared property getter: - (BOOL)SMIMEEnabled;	// 0x346b542d
// declared property getter: - (BOOL)SMIMEEncryptionEnabled;	// 0x346b543d
// declared property getter: - (id)SMIMEEncryptionIdentityPersistentID;	// 0x346b54b5
// declared property getter: - (id)SMIMEEncryptionIdentityUUID;	// 0x346b546d
// declared property getter: - (id)SMIMESigningIdentityPersistentID;	// 0x346b547d
// declared property getter: - (id)SMIMESigningIdentityUUID;	// 0x346b545d
- (id)description;	// 0x346b51d5
// declared property getter: - (BOOL)isRecentsSyncingDisabled;	// 0x346b544d
// declared property getter: - (BOOL)preventAppSheet;	// 0x346b541d
// declared property getter: - (BOOL)preventMove;	// 0x346b540d
// declared property setter: - (void)setSMIMEEncryptionIdentityPersistentID:(id)anId;	// 0x346b54c5
// declared property setter: - (void)setSMIMESigningIdentityPersistentID:(id)anId;	// 0x346b548d
- (id)stubDictionary;	// 0x346b5035
@end
