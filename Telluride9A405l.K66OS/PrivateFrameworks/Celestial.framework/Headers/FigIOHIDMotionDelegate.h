/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface FigIOHIDMotionDelegate : NSObject {
@private
	opaque_pthread_mutex_t ringMutex;	// 4 = 0x4
	BOOL manageAccel;	// 48 = 0x30
	int accelRingIndex;	// 52 = 0x34
	float accelRingX[64];	// 56 = 0x38
	float accelRingY[64];	// 312 = 0x138
	float accelRingZ[64];	// 568 = 0x238
	double accelRingTime[64];	// 824 = 0x338
}
- (id)init;	// 0x3399ff21
- (id)initWithOptions:(BOOL)options enableRotation:(BOOL)rotation enableAttitude:(BOOL)attitude;	// 0x339a020d
- (void)dealloc;	// 0x339a01cd
- (void)deferOnRunloop_initManagerUsingIOHID;	// 0x3399fe85
- (void)deferOnRunloop_stopEvents;	// 0x3399fed5
- (void)didUpdateAccelerationWithEventInfo:(XXStruct_N5B6hD *)eventInfo;	// 0x339a0119
- (void)getVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x3399ffb5
- (BOOL)managingAccel;	// 0x3399f8d9
@end

