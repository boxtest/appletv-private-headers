/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


@interface CIColor : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
	void *_pad[3];	// 8 = 0x8
}
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x36ee75d1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x36ee765d
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36ee760d
+ (id)colorWithString:(id)string;	// 0x36ee768d
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x36ee77a9
- (id)initWithCoder:(id)coder;	// 0x36ee7d15
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36ee7815
- (id)initWithString:(id)string;	// 0x36ee76c9
- (CGColorRef)CGColor;	// 0x36ee7b6d
- (float)alpha;	// 0x36ee797d
- (float)blue;	// 0x36ee7a61
- (CGColorRef)cgColor;	// 0x36ee7b5d
- (CGColorSpaceRef)colorSpace;	// 0x36ee7b49
- (const float *)components;	// 0x36ee7969
- (id)copyWithZone:(NSZone *)zone;	// 0x36ee7c5d
- (void)dealloc;	// 0x36ee78ad
- (id)description;	// 0x36ee7da1
- (void)encodeWithCoder:(id)coder;	// 0x36ee7ca1
- (void)finalize;	// 0x36ee7901
- (float)green;	// 0x36ee7a3d
- (unsigned)hash;	// 0x36ee7bed
- (BOOL)isEqual:(id)equal;	// 0x36ee7b7d
- (unsigned long)numberOfComponents;	// 0x36ee7955
- (float)red;	// 0x36ee7991
- (id)stringRepresentation;	// 0x36ee7a85
@end

