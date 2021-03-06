/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCCertificatePayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSDictionary, NSString, NSData, NSArray;

@interface MCSCEPPayload : MCCertificatePayload {
	NSString *_URLString;	// 48 = 0x30
	NSString *_CAInstanceName;	// 52 = 0x34
	NSString *_challenge;	// 56 = 0x38
	NSArray *_subject;	// 60 = 0x3c
	unsigned _keySize;	// 64 = 0x40
	int _usageFlags;	// 68 = 0x44
	NSData *_CAFingerprint;	// 72 = 0x48
	NSArray *_CACaps;	// 76 = 0x4c
	NSDictionary *_subjectAltName;	// 80 = 0x50
	unsigned _retries;	// 84 = 0x54
	unsigned _retryDelay;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) NSArray *CACaps;	// G=0x344ca051; @synthesize=_CACaps
@property(readonly, assign, nonatomic) NSData *CAFingerprint;	// G=0x344ca041; @synthesize=_CAFingerprint
@property(readonly, assign, nonatomic) NSString *CAInstanceName;	// G=0x344c9ff1; @synthesize=_CAInstanceName
@property(readonly, assign, nonatomic) NSString *URLString;	// G=0x344c9fe1; @synthesize=_URLString
@property(readonly, assign, nonatomic) NSString *challenge;	// G=0x344ca001; @synthesize=_challenge
@property(readonly, assign, nonatomic) unsigned keySize;	// G=0x344ca021; @synthesize=_keySize
@property(readonly, assign, nonatomic) unsigned retries;	// G=0x344ca071; @synthesize=_retries
@property(readonly, assign, nonatomic) unsigned retryDelay;	// G=0x344ca081; @synthesize=_retryDelay
@property(readonly, assign, nonatomic) NSArray *subject;	// G=0x344ca011; @synthesize=_subject
@property(readonly, assign, nonatomic) NSDictionary *subjectAltName;	// G=0x344ca061; @synthesize=_subjectAltName
@property(readonly, assign, nonatomic) int usageFlags;	// G=0x344ca031; @synthesize=_usageFlags
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344c9031
+ (id)typeStrings;	// 0x344c9009
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344c90c1
- (void).cxx_destruct;	// 0x344ca091
// declared property getter: - (id)CACaps;	// 0x344ca051
// declared property getter: - (id)CAFingerprint;	// 0x344ca041
// declared property getter: - (id)CAInstanceName;	// 0x344c9ff1
// declared property getter: - (id)URLString;	// 0x344c9fe1
// declared property getter: - (id)challenge;	// 0x344ca001
- (SecCertificate *)copyCertificate;	// 0x344c9c2d
- (SecIdentity *)copyIdentityFromKeychain;	// 0x344c9c95
- (id)description;	// 0x344c9d91
- (BOOL)isIdentity;	// 0x344c90bd
- (BOOL)isRoot;	// 0x344c90b9
// declared property getter: - (unsigned)keySize;	// 0x344ca021
// declared property getter: - (unsigned)retries;	// 0x344ca071
// declared property getter: - (unsigned)retryDelay;	// 0x344ca081
- (id)stubDictionary;	// 0x344c9cfd
// declared property getter: - (id)subject;	// 0x344ca011
// declared property getter: - (id)subjectAltName;	// 0x344ca061
// declared property getter: - (int)usageFlags;	// 0x344ca031
@end

