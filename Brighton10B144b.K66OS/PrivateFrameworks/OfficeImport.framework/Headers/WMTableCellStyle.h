/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


@interface WMTableCellStyle : WMStyle {
	double mLeftPadding;	// 12 = 0xc
	double mRightPadding;	// 20 = 0x14
}
+ (id)dominantColorOf:(id)of;	// 0x34950305
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x34950a81
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x349508f1
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x34950879
- (id)initWithTableCellProperties:(id)tableCellProperties;	// 0x349d7325
- (void)addTableCellProperties:(id)properties;	// 0x34902f21
- (double)leftPadding;	// 0x34903ac5
- (double)rightPadding;	// 0x34903add
@end
