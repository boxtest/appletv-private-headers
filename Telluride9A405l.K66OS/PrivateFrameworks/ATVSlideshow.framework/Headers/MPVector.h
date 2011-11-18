/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPVector : NSObject {
	float _vector[4];	// 4 = 0x4
	int _length;	// 20 = 0x14
}
@property(retain) id values;	// G=0x3346e15d; S=0x3346e1ed; converted property
@property(assign) XXStruct_Te64nB vector;	// G=0x3346e3ad; S=0x3346e351; converted property
+ (id)vectorFromCGColor:(CGColorRef)cgcolor;	// 0x3346dd89
+ (id)vectorFromMCVector:(XXStruct_Te64nB)mcvector;	// 0x3346e2ed
+ (id)vectorFromString:(id)string;	// 0x3346dcc9
+ (id)vectorWithValues:(id)values;	// 0x3346dd39
- (id)init;	// 0x3346ddf1
- (id)initWithCoder:(id)coder;	// 0x3346debd
- (CGColorRef)CGColor;	// 0x3346e109
- (id)CIColorString;	// 0x3346df91
- (id)copyWithZone:(NSZone *)zone;	// 0x3346de1d
- (int)count;	// 0x3346df35
- (void)encodeWithCoder:(id)coder;	// 0x3346de85
- (BOOL)isEqualTo:(id)to;	// 0x3346e26d
// converted property setter: - (void)setValues:(id)values;	// 0x3346e1ed
// converted property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x3346e351
- (id)string;	// 0x3346df45
- (float)valueAtIndex:(int)index;	// 0x3346df21
// converted property getter: - (id)values;	// 0x3346e15d
// converted property getter: - (XXStruct_Te64nB)vector;	// 0x3346e3ad
@end

