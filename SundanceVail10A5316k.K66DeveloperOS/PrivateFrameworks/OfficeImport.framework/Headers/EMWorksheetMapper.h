/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMSheetMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorksheet, ECColumnWidthConvertor, CMStyle;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper {
@private
	EDWorksheet *edWorksheet;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mMaxPopulatedColumn;	// 16 = 0x10
	int mMaxPopulatedRow;	// 20 = 0x14
	double *mColumnGrid;	// 24 = 0x18
	double *mRowGrid;	// 28 = 0x1c
	int mWidth;	// 32 = 0x20
	int mHeight;	// 36 = 0x24
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 40 = 0x28
}
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0x310bbfd9
- (void)_initWithState:(id)state;	// 0x310bc561
- (int)columnCount;	// 0x310bda5d
- (double *)columnGrid;	// 0x310bd37d
- (id)columnWidthConvertor;	// 0x310bcc79
- (void)countRowsAndColumnsWithState:(id)state;	// 0x310bc601
- (void)dealloc;	// 0x310c45d1
- (double)defaultColumnWidth;	// 0x310d20b1
- (double)defaultRowHeight;	// 0x311acc31
- (int)height;	// 0x310c43c1
- (BOOL)isVisible;	// 0x310bdf49
- (void)mapAt:(id)at withState:(id)state;	// 0x310bdb89
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0x310bdfd1
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x310c24c5
- (void)mapGridAt:(id)at;	// 0x310be561
- (void)mapTableAt:(id)at withState:(id)state;	// 0x310bdc3d
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0x310c2305
- (int)maxRowNumber;	// 0x310bda71
- (CGSize)preprocessDrawableSizeWithState:(id)state;	// 0x310bd0b5
- (int)preprocessHeightWithState:(id)state;	// 0x310bcf61
- (CGSize)preprocessSizeWithState:(id)state;	// 0x310bc0ad
- (int)preprocessWidthWithState:(id)state;	// 0x310bc231
- (double *)rowGrid;	// 0x310bd369
- (void)setRowGrid;	// 0x310bca29
- (int)width;	// 0x310c43b1
- (double)xlColumnWidthToPoints:(double)points;	// 0x310d20f1
@end
