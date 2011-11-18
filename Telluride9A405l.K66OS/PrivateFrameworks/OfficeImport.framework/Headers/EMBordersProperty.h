/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMProperty.h"
#import "NSCopying.h"

@class EDBorders, NSColorStub;

__attribute__((visibility("hidden")))
@interface EMBordersProperty : CMProperty <NSCopying> {
@private
	EDBorders *edValue;	// 8 = 0x8
	NSColorStub *mBorderColor;	// 12 = 0xc
	NSColorStub *mBorderTopColor;	// 16 = 0x10
	NSColorStub *mBorderLeftColor;	// 20 = 0x14
	NSColorStub *mBorderBottomColor;	// 24 = 0x18
	NSColorStub *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x30ce088d
- (id)initWithOADStroke:(id)oadstroke;	// 0x30ed8655
- (id)borderColor;	// 0x30ed8541
- (int *)borderStyles;	// 0x30ed8551
- (int *)borderWidths;	// 0x30ed8561
- (id)colorString;	// 0x30ce1591
- (id)copyWithZone:(NSZone *)zone;	// 0x30ed8929
- (id)cssString;	// 0x30ce0f1d
- (id)cssStringForName:(id)name;	// 0x30ce0ee9
- (BOOL)hasSameColorsAs:(id)as;	// 0x30ed8b05
- (BOOL)hasSameStylesAs:(id)as;	// 0x30ed89fd
- (BOOL)hasSameWidthsAs:(id)as;	// 0x30ed8a81
- (BOOL)isEqual:(id)equal;	// 0x30ed858d
- (BOOL)isNoneAtLocation:(int)location;	// 0x30ed8571
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x30ce0c89
- (void)setNoneAtLocation:(int)location;	// 0x30ce0ebd
- (id)stringFromColor:(id)color;	// 0x30ce1705
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x30ce1251
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x30ce1549
- (id)styleHashNumber;	// 0x30ce118d
- (id)styleString;	// 0x30ce0fad
- (id)widthHashNumber;	// 0x30ce1485
- (id)widthString;	// 0x30ce12a5
@end

