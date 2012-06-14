/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) BOOL dimensionsAreBoundingBox;	// G=0x35492f85; 
@property(readonly, assign, nonatomic) int height;	// G=0x354930fd; 
@property(readonly, assign, nonatomic) NSDictionary *pixelTransferProperties;	// G=0x35492fe1; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettingsDictionary;	// G=0x35493165; 
@property(readonly, assign, nonatomic) int width;	// G=0x35493131; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x35492e75
+ (id)_validValuesForScalingMode;	// 0x35492ef1
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x35492dc9
+ (id)defaultVideoOutputSettings;	// 0x35492da9
+ (id)registeredOutputSettingsClasses;	// 0x35492e85
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary;	// 0x35492e0d
- (id)initWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x354931a1
- (id)compatibleMediaTypes;	// 0x35493175
// declared property getter: - (BOOL)dimensionsAreBoundingBox;	// 0x35492f85
// declared property getter: - (int)height;	// 0x354930fd
// declared property getter: - (id)pixelTransferProperties;	// 0x35492fe1
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x35492f69
// declared property getter: - (id)videoSettingsDictionary;	// 0x35493165
// declared property getter: - (int)width;	// 0x35493131
@end
