/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADAdjustedColor : OADColor {
	OADColor *mBaseColor;	// 8 = 0x8
	int mAdjustmentType;	// 12 = 0xc
	unsigned char mAdjustmentParam;	// 16 = 0x10
	BOOL mInvert;	// 17 = 0x11
	BOOL mInvert128;	// 18 = 0x12
	BOOL mGray;	// 19 = 0x13
}
- (id)initWithBaseColor:(id)baseColor adjustmentType:(int)type adjustmentParam:(unsigned char)param invert:(BOOL)invert invert128:(BOOL)a128 gray:(BOOL)gray;	// 0x34885bd9
- (unsigned char)adjustmentParam;	// 0x34887599
- (int)adjustmentType;	// 0x348875a9
- (id)baseColor;	// 0x348874c9
- (id)copyWithZone:(NSZone *)zone;	// 0x34a4b9f9
- (void)dealloc;	// 0x3488b0a5
- (BOOL)gray;	// 0x34887589
- (unsigned)hash;	// 0x34a4bb11
- (BOOL)invert;	// 0x348875b9
- (BOOL)invert128;	// 0x348875c9
- (BOOL)isEqual:(id)equal;	// 0x34a4bbad
@end
