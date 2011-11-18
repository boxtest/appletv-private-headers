/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSData, NSString, NSDate;

@interface MCCertificatePayload : MCPayload {
@private
	NSData *_certificatePersistentID;	// 40 = 0x28
	NSString *_installedOnDeviceID;	// 44 = 0x2c
}
@property(retain) NSData *certificatePersistentID;	// G=0x3656880d; S=0x365687e9; @synthesize=_certificatePersistentID
@property(readonly, assign) NSDate *expiry;	// G=0x36568865; 
@property(copy) NSString *installedOnDeviceID;	// G=0x3656884d; S=0x36568825; @synthesize=_installedOnDeviceID
@property(readonly, assign) BOOL isIdentity;	// G=0x36568d59; 
@property(readonly, assign) BOOL isRoot;	// G=0x36568d7d; 
@property(readonly, assign) BOOL isSigned;	// G=0x36568785; 
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36568e99
// declared property getter: - (id)certificatePersistentID;	// 0x3656880d
- (SecCertificate *)copyCertificate;	// 0x36568de1
- (SecIdentity *)copyIdentityFromKeychain;	// 0x36568da9
- (void)dealloc;	// 0x36568789
- (id)description;	// 0x365688b1
// declared property getter: - (id)expiry;	// 0x36568865
// declared property getter: - (id)installedOnDeviceID;	// 0x3656884d
// declared property getter: - (BOOL)isIdentity;	// 0x36568d59
// declared property getter: - (BOOL)isRoot;	// 0x36568d7d
// declared property getter: - (BOOL)isSigned;	// 0x36568785
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x365687e9
// declared property setter: - (void)setInstalledOnDeviceID:(id)anId;	// 0x36568825
- (id)stubDictionary;	// 0x36568e19
- (id)subtitle1Description;	// 0x36568bdd
- (id)subtitle1Label;	// 0x36568c55
- (id)subtitle2Description;	// 0x36568a6d
- (id)subtitle2Label;	// 0x36568b81
- (id)title;	// 0x36568cb1
@end

