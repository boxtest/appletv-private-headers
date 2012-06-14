/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


__attribute__((visibility("hidden")))
@interface WMTableCellStyle : WMStyle {
@private
	double mLeftPadding;	// 12 = 0xc
	double mRightPadding;	// 20 = 0x14
}
+ (id)dominantColorOf:(id)of;	// 0x34d40301
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x34d40a11
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x34d40891
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x34d40835
- (id)initWithTableCellProperties:(id)tableCellProperties;	// 0x34e6ede9
- (void)addTableCellProperties:(id)properties;	// 0x34cc53c5
- (double)leftPadding;	// 0x34cc5efd
- (double)rightPadding;	// 0x34cc5f15
@end
