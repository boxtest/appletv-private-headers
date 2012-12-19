/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableArray;

@interface OSDRawAccelerometerDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _AccelerometerPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _AccelerometerPlugin;	// G=0x340d8155; S=0x340d8169; @synthesize
- (id)init;	// 0x340d78c5
// declared property getter: - (IOHIDServiceClientRef)_AccelerometerPlugin;	// 0x340d8155
- (void)dealloc;	// 0x340d7949
- (void)enqueueCallback:(id)callback;	// 0x340d7b99
- (IOHIDServiceClientRef)getAccelerometerPlugin;	// 0x340d7f65
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x340d7edd
- (int)registerAccelerometerCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval;	// 0x340d7999
- (int)registerAccelerometerCallbackIOKit:(float)kit;	// 0x340d7d51
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval;	// 0x340d7abd
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x340d7b79
// declared property setter: - (void)set_AccelerometerPlugin:(IOHIDServiceClientRef)plugin;	// 0x340d8169
- (void)unregisterAccelerometerCallback;	// 0x340d7a49
- (void)unregisterAccelerometerCallbackIOKit;	// 0x340d7e7d
@end
