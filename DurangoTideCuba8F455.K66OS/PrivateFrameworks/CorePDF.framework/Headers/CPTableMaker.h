/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CPTable, CPZone;

@interface CPTableMaker : NSObject {
	CPZone *tableZone;	// 4 = 0x4
	CPTable *table;	// 8 = 0x8
	unsigned cellIndex;	// 12 = 0xc
	CGPoint *rowYIntervals;	// 16 = 0x10
	CGPoint *columnXIntervals;	// 20 = 0x14
}
+ (BOOL)isTable:(id)table;	// 0x30bd0c7d
+ (void)makeTableFrom:(id)from;	// 0x30bd0c2d
+ (void)makeTablesInPage:(id)page;	// 0x30bd0b09
+ (void)makeTablesInZone:(id)zone;	// 0x30bd0b59
- (id)initWithZone:(id)zone;	// 0x30bd0df1
- (void)dealloc;	// 0x30bd0d95
- (void)determineRowsAndColumns:(BOOL)columns;	// 0x30bd1745
- (void)makeTable;	// 0x30bd1429
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)rectangularZone;	// 0x30bd11d5
- (id)newTableCellFromZone:(id)zone;	// 0x30bd0e45
@end

