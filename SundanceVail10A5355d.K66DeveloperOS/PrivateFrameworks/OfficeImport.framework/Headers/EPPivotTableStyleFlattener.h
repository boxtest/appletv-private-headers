/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener {
	EDPivotTable *mPivotTable;	// 72 = 0x48
	int mFirstHeaderRow;	// 76 = 0x4c
	int mFirstDataRow;	// 80 = 0x50
	int mFirstDataColumn;	// 84 = 0x54
	unsigned mRowFieldsCount;	// 88 = 0x58
	unsigned mColumnFieldsCount;	// 92 = 0x5c
	unsigned mPageFieldsCount;	// 96 = 0x60
}
- (void)addColumnSubheadingLevel:(unsigned)level to:(id)to;	// 0x31d40085
- (void)addRowSubheadingLevel:(unsigned)level to:(id)to;	// 0x31d40129
- (void)addSubtotalColumnLevel:(unsigned)level to:(id)to;	// 0x31db396d
- (void)addSubtotalRowLevel:(unsigned)level to:(id)to;	// 0x31db38d9
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x31d3fa25
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x31d3f091
- (void)clearCache;	// 0x31d3ffe1
- (id)collectionFromWorksheet:(id)worksheet;	// 0x31c936b5
- (unsigned)constrainLevel:(unsigned)level;	// 0x31d40119
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x31d3f485
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x31d3f309
- (bool)isObjectSupported:(id)supported;	// 0x31c913c1
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x31c934b9
- (int)stripeOffset:(int)offset row:(bool)row;	// 0x31db386d
- (id)styleFromObject:(id)object;	// 0x31d3f01d
@end

