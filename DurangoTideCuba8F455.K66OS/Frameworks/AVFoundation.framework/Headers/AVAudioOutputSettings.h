/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) NSDictionary *audioSettingsDictionary;	// G=0x325b8b1d; 
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x325b8b71
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x325b8bad
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x325bc201
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x325ba2a5
+ (id)defaultAudioOutputSettings;	// 0x325ba25d
+ (id)registeredOutputSettingsClasses;	// 0x325b8bc1
- (id)initWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x325b8b5d
// declared property getter: - (id)audioSettingsDictionary;	// 0x325b8b1d
- (id)compatibleMediaTypes;	// 0x325b8b31
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x325b8b01
@end

