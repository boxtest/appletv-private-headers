/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	BOOL _levelMeteringEnabled;	// 12 = 0xc
	BOOL _isConnected;	// 13 = 0xd
	NSString *_localizedName;	// 16 = 0x10
}
@property(readonly, assign) BOOL isConnected;	// G=0x3178e311; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x3178e269; converted property
+ (id)_devices;	// 0x3178ddb9
- (id)init;	// 0x3178df55
- (id)initWithProperties:(id)properties;	// 0x3178dfa9
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)audioInputDeviceLocalizedName;	// 0x3178e42d
- (void)audioInputDevicesDidChangeHandler:(id)audioInputDevices;	// 0x3178e38d
- (void)dealloc;	// 0x3178e189
- (id)devicePropertiesDictionary;	// 0x3178e329
- (id)formats;	// 0x3178e2a9
- (BOOL)hasMediaType:(id)type;	// 0x3178e279
// converted property getter: - (BOOL)isConnected;	// 0x3178e311
- (BOOL)isInUseByAnotherApplication;	// 0x3178e30d
// converted property getter: - (id)localizedName;	// 0x3178e269
- (id)modelID;	// 0x3178e241
- (BOOL)startUsingDevice:(id *)device;	// 0x3178e321
- (void)stopUsingDevice;	// 0x3178e325
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x3178e361
- (id)uniqueID;	// 0x3178e219
@end
