/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {
@private
	XXStruct_DOQIoC _transformStruct;	// 4 = 0x4
}
@property(assign) XXStruct_DOQIoC transformStruct;	// G=0x32451a29; S=0x32451a45; converted property
+ (id)transform;	// 0x32451ad1
- (id)init;	// 0x32451a79
- (id)initWithCoder:(id)coder;	// 0x32452445
- (id)initWithTransform:(id)transform;	// 0x32451e11
- (void)appendTransform:(id)transform;	// 0x324520ad
- (id)copyWithZone:(NSZone *)zone;	// 0x32451e6d
- (void)encodeWithCoder:(id)coder;	// 0x3245223d
- (unsigned)hash;	// 0x324517f9
- (void)invert;	// 0x32451b01
- (BOOL)isEqual:(id)equal;	// 0x32451d31
- (void)prependTransform:(id)transform;	// 0x32451c29
- (void)rotateByDegrees:(float)degrees;	// 0x32451f91
- (void)rotateByRadians:(float)radians;	// 0x32451e9d
- (void)scaleBy:(float)by;	// 0x324521b5
- (void)scaleXBy:(float)by yBy:(float)by2;	// 0x324518c9
// converted property setter: - (void)setTransformStruct:(XXStruct_DOQIoC)aStruct;	// 0x32451a45
- (CGPoint)transformPoint:(CGPoint)point;	// 0x32451955
- (CGSize)transformSize:(CGSize)size;	// 0x324519b5
// converted property getter: - (XXStruct_DOQIoC)transformStruct;	// 0x32451a29
- (void)translateXBy:(float)by yBy:(float)by2;	// 0x3245183d
@end

