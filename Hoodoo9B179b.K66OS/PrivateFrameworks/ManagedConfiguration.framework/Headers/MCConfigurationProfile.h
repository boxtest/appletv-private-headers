/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {
@private
	NSArray *_payloads;	// 92 = 0x5c
	MCProfileServiceProfile *_OTAProfile;	// 96 = 0x60
}
@property(assign) MCProfileServiceProfile *OTAProfile;	// G=0x348b4179; S=0x348b4189; @synthesize=_OTAProfile
@property(readonly, assign) NSArray *payloads;	// G=0x348b4199; @synthesize=_payloads
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x348b4d31
// declared property getter: - (id)OTAProfile;	// 0x348b4179
- (void)_addObjectsOfClass:(Class)aClass fromArray:(id)array toArray:(id)array3;	// 0x348b41a9
- (void)_sortPayloads;	// 0x348b437d
- (void)dealloc;	// 0x348b4861
- (id)description;	// 0x348b4a85
- (id)earliestCertificateExpiryDate;	// 0x348b4715
- (id)installationWarnings;	// 0x348b4c0d
- (BOOL)isManagedByProfileService;	// 0x348b4161
- (id)localizedPayloadSummaryByType;	// 0x348b424d
- (id)payloadWithUUID:(id)uuid;	// 0x348b4639
// declared property getter: - (id)payloads;	// 0x348b4199
// declared property setter: - (void)setOTAProfile:(id)profile;	// 0x348b4189
- (id)stubDictionary;	// 0x348b48c1
@end

