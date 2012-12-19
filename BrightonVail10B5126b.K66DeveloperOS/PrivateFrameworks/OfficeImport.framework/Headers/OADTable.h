/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray, OADTableProperties, OADTableGrid;

@interface OADTable : OADDrawable {
	OADTableProperties *mProperties;	// 24 = 0x18
	OADTableGrid *mGrid;	// 28 = 0x1c
	NSMutableArray *mRows;	// 32 = 0x20
}
- (id)init;	// 0x3498c5e5
- (id)addRow;	// 0x34990515
- (id)cellAtPos:(OADTMatrixPos)pos;	// 0x34a52579
- (void)dealloc;	// 0x3498d68d
- (id)grid;	// 0x3499034d
- (id)masterCellOfPos:(OADTMatrixPos)pos;	// 0x34a52635
- (OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;	// 0x34a525a5
- (id)rowAtIndex:(unsigned)index;	// 0x349910a1
- (unsigned)rowCount;	// 0x34991081
- (void)setParentTextListStyle:(id)style;	// 0x34990fc5
- (id)tableProperties;	// 0x3498c8c1
@end
