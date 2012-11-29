/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableArray;

@interface OSDRawAmbientLightDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _AmbientLightPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _AmbientLightPlugin;	// G=0x321d4cd5; S=0x321d4ce9; @synthesize
- (id)init;	// 0x321d4371
// declared property getter: - (IOHIDServiceClientRef)_AmbientLightPlugin;	// 0x321d4cd5
- (void)dealloc;	// 0x321d43f5
- (void)enqueueCallback:(id)callback;	// 0x321d4655
- (IOHIDServiceClientRef)getAmbientLightPlugin;	// 0x321d4ae5
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x321d4a5d
- (int)registerAmbientLightCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval testMode:(BOOL)mode monitorMode:(BOOL)mode6;	// 0x321d4445
- (int)registerAmbientLightCallbackIOKit:(float)kit testMode:(BOOL)mode monitorMode:(BOOL)mode3;	// 0x321d4851
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval testMode:(BOOL)mode monitorMode:(BOOL)mode4;	// 0x321d4575
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x321d4635
// declared property setter: - (void)set_AmbientLightPlugin:(IOHIDServiceClientRef)plugin;	// 0x321d4ce9
- (void)unregisterAmbientLightCallback;	// 0x321d4501
- (void)unregisterAmbientLightCallbackIOKit;	// 0x321d49fd
@end
