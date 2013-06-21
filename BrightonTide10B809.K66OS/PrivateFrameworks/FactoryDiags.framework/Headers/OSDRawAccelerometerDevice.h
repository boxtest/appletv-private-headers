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
@property(assign) IOHIDServiceClientRef _AccelerometerPlugin;	// G=0x33ef7155; S=0x33ef7169; @synthesize
- (id)init;	// 0x33ef68c5
// declared property getter: - (IOHIDServiceClientRef)_AccelerometerPlugin;	// 0x33ef7155
- (void)dealloc;	// 0x33ef6949
- (void)enqueueCallback:(id)callback;	// 0x33ef6b99
- (IOHIDServiceClientRef)getAccelerometerPlugin;	// 0x33ef6f65
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x33ef6edd
- (int)registerAccelerometerCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval;	// 0x33ef6999
- (int)registerAccelerometerCallbackIOKit:(float)kit;	// 0x33ef6d51
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval;	// 0x33ef6abd
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x33ef6b79
// declared property setter: - (void)set_AccelerometerPlugin:(IOHIDServiceClientRef)plugin;	// 0x33ef7169
- (void)unregisterAccelerometerCallback;	// 0x33ef6a49
- (void)unregisterAccelerometerCallbackIOKit;	// 0x33ef6e7d
@end
