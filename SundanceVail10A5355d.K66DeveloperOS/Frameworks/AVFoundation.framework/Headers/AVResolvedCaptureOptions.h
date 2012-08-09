/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableDictionary, AVCaptureDeviceFormat, NSString;

@interface AVResolvedCaptureOptions : NSObject {
	NSMutableDictionary *baseCaptureOptions;	// 4 = 0x4
	NSMutableDictionary *optionsOverrides;	// 8 = 0x8
	CFDictionaryRef outputSettingsOverrides;	// 12 = 0xc
	float minFrameRateOverride;	// 16 = 0x10
	float maxFrameRateOverride;	// 20 = 0x14
	BOOL usePreviewSizedCaptureBuffers;	// 24 = 0x18
	BOOL useStabilizationIfAvailable;	// 25 = 0x19
	NSString *faceDetectionMode;	// 28 = 0x1c
	BOOL faceDetectionNotificationsEnabled;	// 32 = 0x20
	AVCaptureDeviceFormat *resolvedVideoDeviceFormat;	// 36 = 0x24
}
@property(readonly, retain) NSMutableDictionary *baseCaptureOptions;	// G=0x326fb84d; converted property
@property(readonly, retain) AVCaptureDeviceFormat *resolvedVideoDeviceFormat;	// G=0x326fbf01; converted property
+ (void)initialize;	// 0x326fb5e9
+ (id)resolvedCaptureOptionsWithCaptureOptionsDictionary:(id)captureOptionsDictionary;	// 0x326fb761
- (id)initWithCaptureOptionsDictionary:(id)captureOptionsDictionary;	// 0x326fb60d
- (void)addFaceDetectionMode:(id)mode forConnection:(id)connection;	// 0x326fb9cd
- (void)addMaxFrameRate:(float)rate forConnection:(id)connection;	// 0x326fb8ad
- (void)addMinFrameRate:(float)rate forConnection:(id)connection;	// 0x326fb871
- (void)addOutputSettings:(id)settings forConnection:(id)connection;	// 0x326fb85d
// converted property getter: - (id)baseCaptureOptions;	// 0x326fb84d
- (id)cameraForCaptureOptions:(id)captureOptions;	// 0x326fbf35
- (void)dealloc;	// 0x326fb7ad
- (id)deviceFormatForCamera:(id)camera captureOptions:(id)options;	// 0x326fca61
- (void)enableFaceDetectionNotificationsForConnection:(id)connection;	// 0x326fba39
- (BOOL)hasHeightOverrideInResolvedOptions:(id)resolvedOptions;	// 0x326fc14d
- (BOOL)hasMaxFrameRateOverrideInResolvedOptions:(id)resolvedOptions;	// 0x326fc2bd
- (BOOL)hasMinFrameRateOverrideInResolvedOptions:(id)resolvedOptions;	// 0x326fc1f9
- (BOOL)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)resolvedOptions withScalingMode:(id)scalingMode;	// 0x326fc401
- (BOOL)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)resolvedOptions withScalingMode:(id)scalingMode;	// 0x326fc47d
- (BOOL)hasOverridesAffectingSensorFormatInResolvedOptions:(id)resolvedOptions;	// 0x326fc381
- (BOOL)hasWidthOverrideInResolvedOptions:(id)resolvedOptions;	// 0x326fc0a1
- (int)rankForFaceDetectionMode:(id)faceDetectionMode;	// 0x326fb911
- (void)resolveFrameRatesToCaptureOptions:(id)captureOptions;	// 0x326fc4f9
- (void)resolveOutputSettingsToCaptureOptions:(id)captureOptions resolvedScalingMode:(id *)mode;	// 0x326fc6b5
- (id)resolvedCaptureOptionsDictionary;	// 0x326fbb61
// converted property getter: - (id)resolvedVideoDeviceFormat;	// 0x326fbf01
- (void)setBestCaptureResolutionForAVScalingMode:(id)avscalingMode captureOptions:(id)options;	// 0x326fd305
- (void)setBestPreviewResolutionForCaptureOptions:(id)captureOptions;	// 0x326fd149
- (void)setBestSensorResolutionForCamera:(id)camera captureOptions:(id)options chosenSensorFormat:(id *)format;	// 0x326fcf95
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x326fba4d
- (void)usePreviewSizedCaptureBuffersForConnection:(id)connection;	// 0x326fb8e9
- (void)useStabilizationIfAvailableForConnection:(id)connection;	// 0x326fb8fd
- (void)validateResolvedOptions:(id)options againstSensorFormat:(id)format;	// 0x326fd539
@end
