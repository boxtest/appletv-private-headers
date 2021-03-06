/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OABReaderState, ESDContainer, OADTable, OABTableSortedIntArray;

@interface OABRTable : NSObject {
	ESDContainer *mSrcTable;	// 4 = 0x4
	OADTable *mTgtTable;	// 8 = 0x8
	OABReaderState *mState;	// 12 = 0xc
	CGPoint mScale;	// 16 = 0x10
	int mRowCount;	// 24 = 0x18
	int mColumnCount;	// 28 = 0x1c
	OABTableSortedIntArray *mXCoords;	// 32 = 0x20
	OABTableSortedIntArray *mYCoords;	// 36 = 0x24
	OABTable2DArray<EshShape *> *mHorzLines;	// 40 = 0x28
	OABTable2DArray<EshShape *> *mVertLines;	// 44 = 0x2c
	OABTable2DArray<OABTableCell> *mCells;	// 48 = 0x30
}
- (id)initWithSourceTable:(id)sourceTable targetTable:(id)table state:(id)state;	// 0x3498f779
- (id).cxx_construct;	// 0x3498f775
- (void)createTargetTableContents;	// 0x34a400fd
- (void)dealloc;	// 0x34990541
- (void)map;	// 0x3498f80d
- (void)mapScale;	// 0x3498f9c1
- (void)readAnchor;	// 0x3498f915
- (void)readCellsAndLines;	// 0x349901e1
- (void)readCoordinates;	// 0x3498fbc1
- (id)readStrokeFromShape:(EshShape *)shape;	// 0x34a4000d
- (void)validateTable;	// 0x34a3fce1
@end

