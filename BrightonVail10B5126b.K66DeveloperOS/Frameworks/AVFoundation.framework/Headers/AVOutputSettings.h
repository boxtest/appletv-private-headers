/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSSet, NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying> {
	NSDictionary *_outputSettingsDictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isCodecAvailableOnCurrentSystem) BOOL codecAvailableOnCurrentSystem;	// G=0x302cc97d; 
@property(readonly, assign, nonatomic) NSSet *compatibleMediaTypes;	// G=0x302cc915; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettingsDictionary;	// G=0x302cca19; @synthesize=_outputSettingsDictionary
@property(readonly, assign, nonatomic) BOOL willYieldCompressedSamples;	// G=0x302cc949; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x302cc53d
+ (unsigned)_validateOutputSettingsDictionary:(id)dictionary compatibilityDescription:(id *)description;	// 0x302cc36d
+ (id)defaultOutputSettingsForMediaType:(id)mediaType;	// 0x302cc729
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x302cc259
+ (id)outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary;	// 0x302cc4c5
+ (id)registeredOutputSettingsClasses;	// 0x302cc1f5
+ (unsigned)validateOutputSettingsDictionary:(id)dictionary;	// 0x302cc359
- (id)init;	// 0x302cc7ad
- (id)initWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x302cc7c1
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x302cc9b1
// declared property getter: - (id)compatibleMediaTypes;	// 0x302cc915
- (id)copyWithZone:(NSZone *)zone;	// 0x302cc89d
- (void)dealloc;	// 0x302cc851
- (id)description;	// 0x302cc8ad
// declared property getter: - (BOOL)isCodecAvailableOnCurrentSystem;	// 0x302cc97d
// declared property getter: - (id)outputSettingsDictionary;	// 0x302cca19
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x302cc9e5
// declared property getter: - (BOOL)willYieldCompressedSamples;	// 0x302cc949
@end

