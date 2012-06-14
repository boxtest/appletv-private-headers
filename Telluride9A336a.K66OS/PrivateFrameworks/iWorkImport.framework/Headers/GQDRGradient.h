/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"


__attribute__((visibility("hidden")))
@interface GQDRGradient : NSObject <GQDNameMappable> {
@private
	CFArrayRef mStops;	// 4 = 0x4
	int mType;	// 8 = 0x8
	float mOpacity;	// 12 = 0xc
	float mAngle;	// 16 = 0x10
	CGPoint mStart;	// 20 = 0x14
	CGPoint mEnd;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0x304878e1
- (float)angle;	// 0x3048791d
- (void)dealloc;	// 0x304879c5
- (CGPoint)end;	// 0x30487945
- (float)opacity;	// 0x3048790d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x30487af5
- (CGPoint)start;	// 0x3048792d
- (CFArrayRef)stops;	// 0x304878ed
- (int)type;	// 0x304878fd
@end
