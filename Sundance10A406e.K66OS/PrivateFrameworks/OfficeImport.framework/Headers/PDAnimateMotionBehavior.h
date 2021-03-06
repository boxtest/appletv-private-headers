/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimateScaleBehavior.h"
#import "OfficeImport-Structs.h"

@class NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
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
@property(assign) double angle;	// G=0x350dc12d; S=0x350dc145; converted property
@property(assign) int originType;	// G=0x350dc1bd; S=0x350dc1cd; converted property
@property(retain) id path;	// G=0x350dc10d; S=0x34f9b435; converted property
@property(assign) int pointType;	// G=0x350dc17d; S=0x350dc18d; converted property
@property(assign) CGPoint rotationCenter;	// G=0x350dc1fd; S=0x34f9b71d; converted property
- (id).cxx_construct;	// 0x34f9ac35
// converted property getter: - (double)angle;	// 0x350dc12d
- (void)dealloc;	// 0x34f9c125
- (BOOL)hasAngle;	// 0x350dc11d
- (BOOL)hasOriginType;	// 0x350dc1ad
- (BOOL)hasPath;	// 0x350dc0f5
- (BOOL)hasPointType;	// 0x350dc16d
- (BOOL)hasRotationCenter;	// 0x350dc1ed
// converted property getter: - (int)originType;	// 0x350dc1bd
// converted property getter: - (id)path;	// 0x350dc10d
// converted property getter: - (int)pointType;	// 0x350dc17d
// converted property getter: - (CGPoint)rotationCenter;	// 0x350dc1fd
// converted property setter: - (void)setAngle:(double)angle;	// 0x350dc145
// converted property setter: - (void)setOriginType:(int)type;	// 0x350dc1cd
// converted property setter: - (void)setPath:(id)path;	// 0x34f9b435
// converted property setter: - (void)setPointType:(int)type;	// 0x350dc18d
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x34f9b71d
@end

