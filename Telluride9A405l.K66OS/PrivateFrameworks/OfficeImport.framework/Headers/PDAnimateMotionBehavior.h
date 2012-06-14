/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimateScaleBehavior.h"
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
@private
	NSString *mPath;	// 36 = 0x24
	BOOL mHasAngle;	// 40 = 0x28
	double mAngle;	// 44 = 0x2c
	BOOL mHasPointType;	// 52 = 0x34
	int mPointType;	// 56 = 0x38
	BOOL mHasOriginType;	// 60 = 0x3c
	int mOriginType;	// 64 = 0x40
	BOOL mHasRotationCenter;	// 68 = 0x44
	CGPoint mRotationCenter;	// 72 = 0x48
}
@property(assign) double angle;	// G=0x30df8ded; S=0x30df8e05; converted property
@property(assign) int originType;	// G=0x30df8e7d; S=0x30df8e8d; converted property
@property(retain) id path;	// G=0x30df8dcd; S=0x30dfaf31; converted property
@property(assign) int pointType;	// G=0x30df8e3d; S=0x30df8e4d; converted property
@property(assign) CGPoint rotationCenter;	// G=0x30df8ebd; S=0x30df8ed5; converted property
// converted property getter: - (double)angle;	// 0x30df8ded
- (void)dealloc;	// 0x30dfaee5
- (BOOL)hasAngle;	// 0x30df8ddd
- (BOOL)hasOriginType;	// 0x30df8e6d
- (BOOL)hasPath;	// 0x30df8db5
- (BOOL)hasPointType;	// 0x30df8e2d
- (BOOL)hasRotationCenter;	// 0x30df8ead
// converted property getter: - (int)originType;	// 0x30df8e7d
// converted property getter: - (id)path;	// 0x30df8dcd
// converted property getter: - (int)pointType;	// 0x30df8e3d
// converted property getter: - (CGPoint)rotationCenter;	// 0x30df8ebd
// converted property setter: - (void)setAngle:(double)angle;	// 0x30df8e05
// converted property setter: - (void)setOriginType:(int)type;	// 0x30df8e8d
// converted property setter: - (void)setPath:(id)path;	// 0x30dfaf31
// converted property setter: - (void)setPointType:(int)type;	// 0x30df8e4d
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x30df8ed5
@end
