/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSDictionary, NSData, NSString, NSDate;

@interface MCProfile : NSObject {
@private
	NSString *_displayName;	// 4 = 0x4
	NSString *_profileDescription;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSString *_UUID;	// 16 = 0x10
	NSString *_organization;	// 20 = 0x14
	int _version;	// 24 = 0x18
	NSDate *_installDate;	// 28 = 0x1c
	NSDate *_expiryDate;	// 32 = 0x20
	BOOL _encrypted;	// 36 = 0x24
	BOOL _isLocked;	// 37 = 0x25
	NSString *_removalPasscode;	// 40 = 0x28
	BOOL _needsReboot;	// 44 = 0x2c
	BOOL _isStub;	// 45 = 0x2d
	NSString *_productBuildVersion;	// 48 = 0x30
	NSString *_productVersion;	// 52 = 0x34
	NSData *_profileData;	// 56 = 0x38
	int _trustLevel;	// 60 = 0x3c
	BOOL _trustHasBeenEvaluated;	// 64 = 0x40
	dispatch_queue_s *_trustEvaluationQueue;	// 68 = 0x44
	NSString *_signerSummary;	// 72 = 0x48
	NSMutableArray *_signerCertificates;	// 76 = 0x4c
	BOOL _signerHasBeenEvaluated;	// 80 = 0x50
	dispatch_queue_s *_signerEvaluationQueue;	// 84 = 0x54
@protected
	NSDictionary *_context;	// 88 = 0x58
}
@property(readonly, assign) NSString *UUID;	// G=0x3655e2a9; @synthesize=_UUID
@property(readonly, assign) NSString *UUIDHashFileName;	// G=0x3655f64d; 
@property(retain) NSDictionary *context;	// G=0x3655eb71; S=0x3655eb4d; @synthesize=_context
@property(retain) NSString *displayName;	// G=0x3655eabd; S=0x3655ea99; @synthesize=_displayName
@property(readonly, assign) NSDate *earliestCertificateExpiryDate;	// G=0x3655e1f1; 
@property(assign, getter=isEncrypted) BOOL encrypted;	// G=0x3655e289; S=0x3655e299; @synthesize=_encrypted
@property(readonly, assign) NSDate *expiryDate;	// G=0x3655ec05; @synthesize=_expiryDate
@property(readonly, assign) NSString *friendlyName;	// G=0x3655f0e1; 
@property(readonly, assign) NSString *identifier;	// G=0x3655e2b9; @synthesize=_identifier
@property(retain) NSDate *installDate;	// G=0x3655eaf9; S=0x3655ead5; @synthesize=_installDate
@property(readonly, assign) NSArray *installationWarnings;	// G=0x3655f349; 
@property(readonly, assign) BOOL isManagedByProfileService;	// G=0x3655e1f5; 
@property(readonly, assign) BOOL isSigned;	// G=0x3655f329; 
@property(readonly, assign) BOOL isStub;	// G=0x3655e219; @synthesize=_isStub
@property(readonly, assign) NSArray *localizedPayloadSummaryByType;	// G=0x3655e1ed; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x3655e249; S=0x3655e259; @synthesize=_isLocked
@property(readonly, assign) BOOL needsReboot;	// G=0x3655e229; @synthesize=_needsReboot
@property(readonly, assign) NSString *organization;	// G=0x3655e279; @synthesize=_organization
@property(readonly, assign) NSArray *payloads;	// G=0x3655e1e5; 
@property(readonly, assign) NSString *productBuildVersion;	// G=0x3655e1f9; @synthesize=_productBuildVersion
@property(readonly, assign) NSString *productVersion;	// G=0x3655e209; @synthesize=_productVersion
@property(retain) NSData *profileData;	// G=0x3655eb35; S=0x3655eb11; @synthesize=_profileData
@property(readonly, assign) NSString *profileDescription;	// G=0x3655e2c9; @synthesize=_profileDescription
@property(readonly, assign) NSString *profileIDHashFileName;	// G=0x3655f619; 
@property(readonly, assign) NSString *removalPasscode;	// G=0x3655e239; @synthesize=_removalPasscode
@property(retain) NSString *removalPasscode;	// G=0x3655e2d9; S=0x3655f681; 
@property(readonly, assign) SecCertificate *signerCertificate;	// G=0x3655f50d; 
@property(retain) NSArray *signerCertificates;	// G=0x3655e3bd; S=0x3655e609; 
@property(retain) NSString *signerSummary;	// G=0x3655e469; S=0x3655e515; 
@property(readonly, assign) NSString *stubFileName;	// G=0x3655f5e5; 
@property(readonly, assign) int trustLevel;	// G=0x3655e2e9; 
@property(readonly, assign) int version;	// G=0x3655e269; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x3655e779
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x3655e8f5
+ (id)_malformedProfileError;	// 0x3655fae9
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x3655fb49
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x365602c5
+ (int)evaluateTrustOfData:(id)data;	// 0x365619d1
+ (id)missingFieldErrorWithField:(id)field;	// 0x3655fba9
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x365616b1
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x3655f869
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name outError:(id *)error;	// 0x3655e9ed
+ (id)profileWithData:(id)data context:(id)context outError:(id *)error;	// 0x3655ea1d
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x3655ea45
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x3655ea6d
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x3655fc09
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x365601b9
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3655ff85
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x3656005d
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x3655fe71
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x36561a79
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x36560349
// declared property getter: - (id)UUID;	// 0x3655e2a9
// declared property getter: - (id)UUIDHashFileName;	// 0x3655f64d
- (void)__evaluateSignerCertificates;	// 0x3655f539
// declared property getter: - (id)context;	// 0x3655eb71
- (void)dealloc;	// 0x3655f1ad
- (id)description;	// 0x3655ec9d
// declared property getter: - (id)displayName;	// 0x3655eabd
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x3655e1f1
- (void)evaluateSignerTrust;	// 0x3655ebd9
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x3655eb89
// declared property getter: - (id)expiryDate;	// 0x3655ec05
// declared property getter: - (id)friendlyName;	// 0x3655f0e1
// declared property getter: - (id)identifier;	// 0x3655e2b9
// declared property getter: - (id)installDate;	// 0x3655eaf9
// declared property getter: - (id)installationWarnings;	// 0x3655f349
// declared property getter: - (BOOL)isEncrypted;	// 0x3655e289
// declared property getter: - (BOOL)isLocked;	// 0x3655e249
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x3655e1f5
// declared property getter: - (BOOL)isSigned;	// 0x3655f329
// declared property getter: - (BOOL)isStub;	// 0x3655e219
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x3655e1ed
- (id)malformedProfileErrorWithError:(id)error;	// 0x3655fa51
// declared property getter: - (BOOL)needsReboot;	// 0x3655e229
// declared property getter: - (id)organization;	// 0x3655e279
- (id)payloadWithUUID:(id)uuid;	// 0x3655e1e9
// declared property getter: - (id)payloads;	// 0x3655e1e5
// declared property getter: - (id)productBuildVersion;	// 0x3655e1f9
// declared property getter: - (id)productVersion;	// 0x3655e209
// declared property getter: - (id)profileData;	// 0x3655eb35
// declared property getter: - (id)profileDescription;	// 0x3655e2c9
// declared property getter: - (id)profileIDHashFileName;	// 0x3655f619
// declared property getter: - (id)removalPasscode;	// 0x3655e239
// declared property getter: - (id)removalPasscode;	// 0x3655e2d9
// declared property setter: - (void)setContext:(id)context;	// 0x3655eb4d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3655ea99
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x3655e299
// declared property setter: - (void)setInstallDate:(id)date;	// 0x3655ead5
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x3655e259
// declared property setter: - (void)setProfileData:(id)data;	// 0x3655eb11
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x3655f681
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x3655e609
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x3655e515
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x3655f50d
// declared property getter: - (id)signerCertificates;	// 0x3655e3bd
// declared property getter: - (id)signerSummary;	// 0x3655e469
- (id)stubDictionary;	// 0x365610d9
// declared property getter: - (id)stubFileName;	// 0x3655f5e5
// declared property getter: - (int)trustLevel;	// 0x3655e2e9
// declared property getter: - (int)version;	// 0x3655e269
- (BOOL)writeStubToDirectory:(id)directory;	// 0x3655f759
- (BOOL)writeStubToPath:(id)path;	// 0x3655f7a9
@end

