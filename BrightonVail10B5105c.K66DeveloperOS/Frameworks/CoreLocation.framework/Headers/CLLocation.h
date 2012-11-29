/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double altitude;	// G=0x308ca5fd; 
@property(readonly, assign, nonatomic) XXStruct_hPLVOD clientLocation;	// G=0x308ca6b5; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x308ca59d; 
@property(readonly, assign, nonatomic) double course;	// G=0x308ca705; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x308ca625; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x308caa55; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D rawCoordinate;	// G=0x308ca5cd; 
@property(readonly, assign, nonatomic) double rawCourse;	// G=0x308ca72d; 
@property(readonly, assign, nonatomic) double speed;	// G=0x308ca6dd; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x308ca675; 
@property(readonly, assign, nonatomic) int type;	// G=0x308ca755; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x308ca64d; 
- (id)init;	// 0x308c9af9
- (id)initWithClientLocation:(XXStruct_hPLVOD)clientLocation;	// 0x308c9d09
- (id)initWithCoder:(id)coder;	// 0x308c9e35
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x308c9cb1
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x308c9c49
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x308c9b31
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x308c9b99
// declared property getter: - (double)altitude;	// 0x308ca5fd
// declared property getter: - (XXStruct_hPLVOD)clientLocation;	// 0x308ca6b5
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x308ca59d
- (id)copyWithZone:(NSZone *)zone;	// 0x308ca35d
// declared property getter: - (double)course;	// 0x308ca705
- (void)dealloc;	// 0x308ca311
- (id)description;	// 0x308ca3b1
- (double)distanceFromLocation:(id)location;	// 0x308ca785
- (void)encodeWithCoder:(id)coder;	// 0x308ca0ed
- (double)getDistanceFrom:(id)from;	// 0x308ca775
// declared property getter: - (double)horizontalAccuracy;	// 0x308ca625
// declared property getter: - (id)iso6709Notation;	// 0x308caa55
- (id)propagateLocationToTime:(double)time;	// 0x308ca905
// declared property getter: - (XXStruct_zYrK5D)rawCoordinate;	// 0x308ca5cd
// declared property getter: - (double)rawCourse;	// 0x308ca72d
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x308caa8d
- (id)shortDescription;	// 0x308ca481
- (id)snapToResolution:(double)resolution;	// 0x308ca7b5
// declared property getter: - (double)speed;	// 0x308ca6dd
// declared property getter: - (id)timestamp;	// 0x308ca675
// declared property getter: - (int)type;	// 0x308ca755
// declared property getter: - (double)verticalAccuracy;	// 0x308ca64d
@end
