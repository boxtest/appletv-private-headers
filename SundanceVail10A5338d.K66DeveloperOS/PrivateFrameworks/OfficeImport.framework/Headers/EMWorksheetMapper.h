/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMSheetMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorksheet, ECColumnWidthConvertor, CMStyle;

@interface EMWorksheetMapper : EMSheetMapper {
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
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0x33a0cfd9
- (void)_initWithState:(id)state;	// 0x33a0d561
- (int)columnCount;	// 0x33a0ea5d
- (double *)columnGrid;	// 0x33a0e37d
- (id)columnWidthConvertor;	// 0x33a0dc79
- (void)countRowsAndColumnsWithState:(id)state;	// 0x33a0d601
- (void)dealloc;	// 0x33a155d1
- (double)defaultColumnWidth;	// 0x33a230b1
- (double)defaultRowHeight;	// 0x33afdc31
- (int)height;	// 0x33a153c1
- (BOOL)isVisible;	// 0x33a0ef49
- (void)mapAt:(id)at withState:(id)state;	// 0x33a0eb89
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0x33a0efd1
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x33a134c5
- (void)mapGridAt:(id)at;	// 0x33a0f561
- (void)mapTableAt:(id)at withState:(id)state;	// 0x33a0ec3d
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0x33a13305
- (int)maxRowNumber;	// 0x33a0ea71
- (CGSize)preprocessDrawableSizeWithState:(id)state;	// 0x33a0e0b5
- (int)preprocessHeightWithState:(id)state;	// 0x33a0df61
- (CGSize)preprocessSizeWithState:(id)state;	// 0x33a0d0ad
- (int)preprocessWidthWithState:(id)state;	// 0x33a0d231
- (double *)rowGrid;	// 0x33a0e369
- (void)setRowGrid;	// 0x33a0da29
- (int)width;	// 0x33a153b1
- (double)xlColumnWidthToPoints:(double)points;	// 0x33a230f1
@end

