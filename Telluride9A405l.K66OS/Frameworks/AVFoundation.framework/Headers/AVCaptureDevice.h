/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureDeviceInternal, NSString;

@interface AVCaptureDevice : NSObject {
	AVCaptureDeviceInternal *_internal;	// 4 = 0x4
}
@property(assign) float autoExposureBias;	// G=0x346d252d; S=0x346d2d01; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x346d255d; S=0x346d2b05; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x346d2449; 
@property(assign) float contrast;	// G=0x346d256d; S=0x346d2a2d; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x346d24f9; S=0x346d2e45; converted property
@property(assign) float exposureGain;	// G=0x346d251d; S=0x346d2d91; converted property
@property(assign) int exposureMode;	// G=0x346d24f1; S=0x346d2ef9; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x346d2531; S=0x346d2c51; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x346d2405; S=0x346d2425; converted property
@property(assign) int flashMode;	// G=0x346d24b9; S=0x346d31dd; converted property
@property(assign) int focusMode;	// G=0x346d24d5; S=0x346d3065; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x346d24e1; S=0x346d2fb5; converted property
@property(assign) int imageControlMode;	// G=0x346d2561; S=0x346d2abd; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x346d38dd; 
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x346d2529; S=0x346d2d49; converted property
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x346d2369; 
@property(assign) float saturation;	// G=0x346d2569; S=0x346d2a75; converted property
@property(retain) id session;	// G=0x346d237d; S=0x346d239d; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x346d23c5; S=0x346d23e5; converted property
@property(assign) int torchMode;	// G=0x346d24cd; S=0x346d3121; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x346d235d; 
@property(assign) int whiteBalanceMode;	// G=0x346d2545; S=0x346d2b95; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x346d254d; S=0x346d2b4d; converted property
+ (id)_devices;	// 0x346d25c9
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x346d26e5
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x346d25e5
+ (id)devices;	// 0x346d2785
+ (id)devicesWithMediaType:(id)mediaType;	// 0x346d28e5
- (id)init;	// 0x346d3905
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x346d2579
- (void)_forceClosed;	// 0x346d33d1
- (void)_sessionDidStart;	// 0x346d23c1
- (void)_sessionWillStart;	// 0x346d23bd
- (BOOL)_startUsingDevice:(id *)device;	// 0x346d32d1
- (void)_stopUsingDevice;	// 0x346d3299
// converted property getter: - (float)autoExposureBias;	// 0x346d252d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x346d255d
- (void)close;	// 0x346d34f9
// converted property getter: - (float)contrast;	// 0x346d256d
- (void)dealloc;	// 0x346d257d
- (id)description;	// 0x346d38f5
- (void)deviceConnectionDidChange;	// 0x346d3449
- (void)deviceConnectionWillChange;	// 0x346d34c1
- (BOOL)doesHandleNotification:(id)notification;	// 0x346d2571
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x346d24f9
// converted property getter: - (float)exposureGain;	// 0x346d251d
// converted property getter: - (int)exposureMode;	// 0x346d24f1
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x346d2531
// converted property getter: - (int)flashMode;	// 0x346d24b9
// converted property getter: - (int)focusMode;	// 0x346d24d5
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x346d24e1
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x346d2575
- (BOOL)hasFlash;	// 0x346d24a9
- (BOOL)hasMediaType:(id)type;	// 0x346d2375
- (BOOL)hasTorch;	// 0x346d24bd
// converted property getter: - (int)imageControlMode;	// 0x346d2561
- (BOOL)isAdjustingExposure;	// 0x346d253d
- (BOOL)isAdjustingWhiteBalance;	// 0x346d2551
- (BOOL)isAudioLevelMeteringSupported;	// 0x346d2555
// declared property getter: - (BOOL)isConnected;	// 0x346d2449
- (BOOL)isExposureModeSupported:(int)supported;	// 0x346d24ed
- (BOOL)isExposurePointOfInterestSupported;	// 0x346d2525
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x346d2405
- (BOOL)isFlashActive;	// 0x346d24b1
- (BOOL)isFlashAvailable;	// 0x346d24ad
- (BOOL)isFlashModeSupported:(int)supported;	// 0x346d24b5
- (BOOL)isFocusModeSupported:(int)supported;	// 0x346d24d1
- (BOOL)isFocusPointOfInterestSupported;	// 0x346d24dd
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x346d2559
- (BOOL)isInUseByAnotherApplication;	// 0x346d2445
- (BOOL)isLockedForConfiguration;	// 0x346d244d
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x346d2529
- (BOOL)isOpen;	// 0x346d2475
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x346d23c5
- (BOOL)isTorchAvailable;	// 0x346d24c9
- (BOOL)isTorchModeSupported:(int)supported;	// 0x346d24c5
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x346d2541
// declared property getter: - (id)localizedName;	// 0x346d38dd
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x346d3741
// declared property getter: - (id)modelID;	// 0x346d2369
- (BOOL)open:(id *)open;	// 0x346d3585
- (int)position;	// 0x346d24a5
// converted property getter: - (float)saturation;	// 0x346d2569
// converted property getter: - (id)session;	// 0x346d237d
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x346d2d01
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x346d2b05
// converted property setter: - (void)setContrast:(float)contrast;	// 0x346d2a2d
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x346d2e45
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x346d2d91
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x346d2ef9
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x346d2c51
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x346d2425
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x346d31dd
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x346d3065
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x346d2fb5
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x346d2abd
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x346d2d49
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x346d2a75
// converted property setter: - (void)setSession:(id)session;	// 0x346d239d
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x346d23e5
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x346d3121
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x346d2b95
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x346d2b4d
- (BOOL)startUsingDevice:(id *)device;	// 0x346d249d
- (void)stopUsingDevice;	// 0x346d24a1
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x346d2379
- (float)torchLevel;	// 0x346d24c1
// converted property getter: - (int)torchMode;	// 0x346d24cd
// declared property getter: - (id)uniqueID;	// 0x346d235d
- (void)unlockForConfiguration;	// 0x346d3641
// converted property getter: - (int)whiteBalanceMode;	// 0x346d2545
// converted property getter: - (float)whiteBalanceTemperature;	// 0x346d254d
@end
