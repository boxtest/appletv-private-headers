/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableArray;

@interface OSDRawGyroDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _GyroPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	BOOL _getTemperature;	// 20 = 0x14
	SEL _registeredCallback;	// 24 = 0x18
	id _registeredDelegate;	// 28 = 0x1c
	BOOL getTemperature;	// 32 = 0x20
}
@property(assign) IOHIDServiceClientRef _GyroPlugin;	// G=0x321d6fb1; S=0x321d6fc5; @synthesize
@property(readonly, assign, getter=_getTemperature) BOOL getTemperature;	// G=0x321d6705; @synthesize
- (id)init;	// 0x321d6621
// declared property getter: - (IOHIDServiceClientRef)_GyroPlugin;	// 0x321d6fb1
// declared property getter: - (BOOL)_getTemperature;	// 0x321d6705
- (void)dealloc;	// 0x321d66b5
- (void)enqueueCallback:(id)callback;	// 0x321d6925
- (IOHIDServiceClientRef)getGyroPlugin;	// 0x321d6dc1
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x321d6d39
- (int)registerGyroCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval withTemperature:(BOOL)temperature lowPassFilter:(int)filter;	// 0x321d6715
- (int)registerGyroCallbackIOKit:(float)kit withTemperature:(BOOL)temperature lowPassFilter:(int)filter;	// 0x321d6b9d
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval withTemperature:(BOOL)temperature lowPassFilter:(int)filter;	// 0x321d6845
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x321d6905
// declared property setter: - (void)set_GyroPlugin:(IOHIDServiceClientRef)plugin;	// 0x321d6fc5
- (void)unregisterGyroCallback;	// 0x321d67d1
- (void)unregisterGyroCallbackIOKit;	// 0x321d6cdd
@end
