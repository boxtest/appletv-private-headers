/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {
	NSNumber *_isSimplePasscodeAllowed;	// 40 = 0x28
	NSNumber *_isPasscodeRequired;	// 44 = 0x2c
	NSNumber *_isAlphanumericPasscodeRequired;	// 48 = 0x30
	NSNumber *_isManualFetchingWhenRoaming;	// 52 = 0x34
	NSNumber *_minLength;	// 56 = 0x38
	NSNumber *_maxFailedAttempts;	// 60 = 0x3c
	NSNumber *_maxGracePeriodMinutes;	// 64 = 0x40
	NSNumber *_maxInactivityMinutes;	// 68 = 0x44
	NSNumber *_maxPasscodeAgeDays;	// 72 = 0x48
	NSNumber *_passcodeHistoryCount;	// 76 = 0x4c
	NSNumber *_minComplexCharacters;	// 80 = 0x50
}
@property(readonly, assign) NSNumber *isAlphanumericPasscodeRequired;	// G=0x340ed6d5; @synthesize=_isAlphanumericPasscodeRequired
@property(readonly, assign) NSNumber *isManualFetchingWhenRoaming;	// G=0x340ed6c5; @synthesize=_isManualFetchingWhenRoaming
@property(readonly, assign) NSNumber *isPasscodeRequired;	// G=0x340ed6e5; @synthesize=_isPasscodeRequired
@property(readonly, assign) NSNumber *isSimplePasscodeAllowed;	// G=0x340ed6f5; @synthesize=_isSimplePasscodeAllowed
@property(readonly, assign) NSNumber *maxFailedAttempts;	// G=0x340ed6a5; @synthesize=_maxFailedAttempts
@property(readonly, assign) NSNumber *maxGracePeriodMinutes;	// G=0x340ed695; @synthesize=_maxGracePeriodMinutes
@property(readonly, assign) NSNumber *maxInactivityMinutes;	// G=0x340ed685; @synthesize=_maxInactivityMinutes
@property(readonly, assign) NSNumber *maxPasscodeAgeDays;	// G=0x340ed665; @synthesize=_maxPasscodeAgeDays
@property(readonly, assign) NSNumber *minComplexCharacters;	// G=0x340ed655; @synthesize=_minComplexCharacters
@property(readonly, assign) NSNumber *minLength;	// G=0x340ed6b5; @synthesize=_minLength
@property(readonly, assign) NSNumber *passcodeHistoryCount;	// G=0x340ed675; @synthesize=_passcodeHistoryCount
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x340ee415
+ (id)typeStrings;	// 0x340edc75
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x340edc9d
- (void)dealloc;	// 0x340edb29
- (id)description;	// 0x340ed705
// declared property getter: - (id)isAlphanumericPasscodeRequired;	// 0x340ed6d5
// declared property getter: - (id)isManualFetchingWhenRoaming;	// 0x340ed6c5
// declared property getter: - (id)isPasscodeRequired;	// 0x340ed6e5
// declared property getter: - (id)isSimplePasscodeAllowed;	// 0x340ed6f5
// declared property getter: - (id)maxFailedAttempts;	// 0x340ed6a5
// declared property getter: - (id)maxGracePeriodMinutes;	// 0x340ed695
// declared property getter: - (id)maxInactivityMinutes;	// 0x340ed685
// declared property getter: - (id)maxPasscodeAgeDays;	// 0x340ed665
// declared property getter: - (id)minComplexCharacters;	// 0x340ed655
// declared property getter: - (id)minLength;	// 0x340ed6b5
// declared property getter: - (id)passcodeHistoryCount;	// 0x340ed675
- (id)stubDictionary;	// 0x340ed9bd
- (id)subtitle1Description;	// 0x340ee18d
- (id)title;	// 0x340ee179
@end

