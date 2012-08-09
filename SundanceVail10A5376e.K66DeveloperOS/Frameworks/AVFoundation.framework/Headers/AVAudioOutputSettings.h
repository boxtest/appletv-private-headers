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
@property(readonly, assign, nonatomic) NSDictionary *audioSettingsDictionary;	// G=0x3691b155; 
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x3691adad
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x3691acb5
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x3691ae3d
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x3691acc5
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)trustedAudioSettingsDictionary;	// 0x3691ad3d
+ (id)defaultAudioOutputSettings;	// 0x3691adf1
+ (id)registeredOutputSettingsClasses;	// 0x3691ac71
- (id)initWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x3691b119
// declared property getter: - (id)audioSettingsDictionary;	// 0x3691b155
- (id)compatibleMediaTypes;	// 0x3691b129
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x3691b165
@end
