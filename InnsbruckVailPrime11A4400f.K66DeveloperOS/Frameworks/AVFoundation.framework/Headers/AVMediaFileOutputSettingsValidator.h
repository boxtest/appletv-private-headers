/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettingsValidation.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
	AVMediaFileType *_fileType;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVMediaFileType *fileType;	// G=0x2c307591; 
+ (void)initialize;	// 0x2c30723d
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)fileType;	// 0x2c3073ad
- (id)init;	// 0x2c307439
- (id)initWithFileType:(id)fileType;	// 0x2c30744d
- (void)dealloc;	// 0x2c307545
// declared property getter: - (id)fileType;	// 0x2c307591
- (BOOL)validateAudioOutputSettings:(id)settings reason:(id *)reason;	// 0x2c3075a1
- (BOOL)validateVideoOutputSettings:(id)settings reason:(id *)reason;	// 0x2c30772d
@end

