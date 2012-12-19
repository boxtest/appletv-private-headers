/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVCaptureDeviceInternal;

@interface AVCaptureDevice : NSObject {
	AVCaptureDeviceInternal *_internal;	// 4 = 0x4
}
@property(retain) id activeFormat;	// G=0x302938c5; S=0x302938e5; converted property
@property(retain) id activeInput;	// G=0x30293849; S=0x3029387d; converted property
@property(assign) float autoExposureBias;	// G=0x3029429d; S=0x302942a1; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x302943ed; S=0x302943f1; converted property
@property(assign) BOOL automaticallyEnablesLowLightBoostWhenAvailable;	// G=0x3029452d; S=0x30294531; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x30293a15; 
@property(assign) float contrast;	// G=0x302944d5; S=0x302944d9; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x30294181; S=0x302941b9; converted property
@property(assign) float exposureGain;	// G=0x30294201; S=0x30294209; converted property
@property(assign) int exposureMode;	// G=0x30294131; S=0x30294139; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x302942ed; S=0x302942f9; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x302939c5; S=0x302939c9; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x30293951; S=0x30293955; converted property
@property(assign) int flashMode;	// G=0x30293f89; S=0x30293f8d; converted property
@property(assign) int focusMode;	// G=0x30294081; S=0x30294089; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x302940d5; S=0x302940e5; converted property
@property(assign) int imageControlMode;	// G=0x30294439; S=0x30294441; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x3029365d; 
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x30294251; S=0x30294255; converted property
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x30293651; 
@property(assign) float saturation;	// G=0x30294489; S=0x3029448d; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x30293941; S=0x30293945; converted property
@property(assign) int torchMode;	// G=0x30293fe9; S=0x30293fed; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x30293645; 
@property(assign) int whiteBalanceMode;	// G=0x30294349; S=0x30294351; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x30294399; S=0x3029439d; converted property
+ (id)_devices;	// 0x30293449
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x3029329d
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x30293341
+ (id)devices;	// 0x30292fd5
+ (id)devicesWithMediaType:(id)mediaType;	// 0x30292e69
- (id)init;	// 0x30293465
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30294581
- (void)_sessionDidStart;	// 0x302938c1
- (void)_sessionWillStart;	// 0x302938bd
- (BOOL)_startUsingDevice:(id *)device;	// 0x30293e3d
- (void)_stopUsingDevice;	// 0x30293f35
// converted property getter: - (id)activeFormat;	// 0x302938c5
// converted property getter: - (id)activeInput;	// 0x30293849
- (BOOL)addInput:(id)input;	// 0x302936a5
// converted property getter: - (float)autoExposureBias;	// 0x3029429d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x302943ed
// converted property getter: - (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;	// 0x3029452d
- (void)close;	// 0x30293db1
// converted property getter: - (float)contrast;	// 0x302944d5
- (void)dealloc;	// 0x3029354d
- (id)description;	// 0x302935c1
- (BOOL)doesHandleNotification:(id)notification;	// 0x30294579
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x30294181
// converted property getter: - (float)exposureGain;	// 0x30294201
// converted property getter: - (int)exposureMode;	// 0x30294131
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x302942ed
- (CGRect)faceRectangle;	// 0x3029399d
- (int)faceRectangleAngle;	// 0x302939c1
// converted property getter: - (int)flashMode;	// 0x30293f89
// converted property getter: - (int)focusMode;	// 0x30294081
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x302940d5
- (id)formats;	// 0x30293a19
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x3029457d
- (BOOL)hasFlash;	// 0x30293f79
- (BOOL)hasMediaType:(id)type;	// 0x30293675
- (BOOL)hasTorch;	// 0x30293fd5
// converted property getter: - (int)imageControlMode;	// 0x30294439
- (BOOL)isAdjustingExposure;	// 0x30294341
- (BOOL)isAdjustingFocus;	// 0x302940e1
- (BOOL)isAdjustingWhiteBalance;	// 0x302943e5
// declared property getter: - (BOOL)isConnected;	// 0x30293a15
- (BOOL)isExposureModeSupported:(int)supported;	// 0x3029412d
- (BOOL)isExposurePointOfInterestSupported;	// 0x302942e9
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x302939c5
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x30293951
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;	// 0x3029394d
- (BOOL)isFaceDetectionSupported;	// 0x30293949
- (BOOL)isFlashActive;	// 0x30293f81
- (BOOL)isFlashAvailable;	// 0x30293f7d
- (BOOL)isFlashModeSupported:(int)supported;	// 0x30293f85
- (BOOL)isFocusModeSupported:(int)supported;	// 0x3029407d
- (BOOL)isFocusPointOfInterestSupported;	// 0x302940d1
- (BOOL)isHDRSupported;	// 0x30294521
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x302943e9
- (BOOL)isInUseByAnotherApplication;	// 0x30293a11
- (BOOL)isLockedForConfiguration;	// 0x30293a1d
- (BOOL)isLowLightBoostEnabled;	// 0x30294529
- (BOOL)isLowLightBoostSupported;	// 0x30294525
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x30294251
- (BOOL)isOpen;	// 0x30293ccd
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x30293941
- (BOOL)isTorchActive;	// 0x30293fe5
- (BOOL)isTorchAvailable;	// 0x30293fe1
- (BOOL)isTorchModeSupported:(int)supported;	// 0x30293fdd
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x30294345
// declared property getter: - (id)localizedName;	// 0x3029365d
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x30293a45
// declared property getter: - (id)modelID;	// 0x30293651
- (BOOL)open:(id *)open;	// 0x30293cf5
- (int)position;	// 0x30293f75
- (void)removeInput:(id)input;	// 0x30293771
// converted property getter: - (float)saturation;	// 0x30294489
- (id)session;	// 0x3029367d
// converted property setter: - (void)setActiveFormat:(id)format;	// 0x302938e5
// converted property setter: - (void)setActiveInput:(id)input;	// 0x3029387d
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x302942a1
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x302943f1
// converted property setter: - (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)available;	// 0x30294531
// converted property setter: - (void)setContrast:(float)contrast;	// 0x302944d9
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x302941b9
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x30294209
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x30294139
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x302942f9
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x302939c9
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x30293955
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x30293f8d
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x30294089
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x302940e5
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x30294441
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x30294255
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x3029448d
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x30293945
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x30293fed
- (BOOL)setTorchModeOnWithLevel:(float)level error:(id *)error;	// 0x30294035
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x30294351
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x3029439d
- (BOOL)startUsingDevice:(id *)device;	// 0x30293f6d
- (void)stopUsingDevice;	// 0x30293f71
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x30293679
- (float)torchLevel;	// 0x30293fd9
// converted property getter: - (int)torchMode;	// 0x30293fe9
// declared property getter: - (id)uniqueID;	// 0x30293645
- (void)unlockForConfiguration;	// 0x30293bdd
// converted property getter: - (int)whiteBalanceMode;	// 0x30294349
// converted property getter: - (float)whiteBalanceTemperature;	// 0x30294399
@end
