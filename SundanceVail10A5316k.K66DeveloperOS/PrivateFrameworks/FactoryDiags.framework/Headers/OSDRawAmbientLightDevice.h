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
@private
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _AmbientLightPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _AmbientLightPlugin;	// G=0x36b4c75d; S=0x36b4c771; @synthesize
- (id)init;	// 0x36b4bdf9
// declared property getter: - (IOHIDServiceClientRef)_AmbientLightPlugin;	// 0x36b4c75d
- (void)dealloc;	// 0x36b4be7d
- (void)enqueueCallback:(id)callback;	// 0x36b4c0dd
- (IOHIDServiceClientRef)getAmbientLightPlugin;	// 0x36b4c56d
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x36b4c4e5
- (int)registerAmbientLightCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval testMode:(BOOL)mode monitorMode:(BOOL)mode6;	// 0x36b4becd
- (int)registerAmbientLightCallbackIOKit:(float)kit testMode:(BOOL)mode monitorMode:(BOOL)mode3;	// 0x36b4c2d9
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval testMode:(BOOL)mode monitorMode:(BOOL)mode4;	// 0x36b4bffd
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x36b4c0bd
// declared property setter: - (void)set_AmbientLightPlugin:(IOHIDServiceClientRef)plugin;	// 0x36b4c771
- (void)unregisterAmbientLightCallback;	// 0x36b4bf89
- (void)unregisterAmbientLightCallbackIOKit;	// 0x36b4c485
@end

