/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDRowBlock, EDReference, EDWorkbook, EDWorksheet, EDRowBlocks, EDCollection;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mCurrentSheet;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mReference;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mRowBlock;	// 24 = 0x18
	unsigned mRowBlockIndex;	// 28 = 0x1c
	EDRowInfo *mRowInfo;	// 32 = 0x20
	unsigned mRowInfoIndex;	// 36 = 0x24
	unsigned mCellIndex;	// 40 = 0x28
	unsigned mNextArrayIndex;	// 44 = 0x2c
	int mCurrentCellIndex;	// 48 = 0x30
	unsigned mPreviousColumnNumber;	// 52 = 0x34
}
+ (id)referenceIteratorWithReference:(id)reference workbook:(id)workbook;	// 0x345d00b5
+ (id)referenceIteratorWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x344e9ed5
- (id)initWithReference:(id)reference workbook:(id)workbook;	// 0x345d014d
- (id)initWithReferenceArray:(id)referenceArray reference:(id)reference workbook:(id)workbook;	// 0x344e9f79
- (id)initWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x344e9f25
- (unsigned)currentCellIndex;	// 0x3454c5e9
- (void)dealloc;	// 0x344eaa65
- (EDCellHeader *)nextCell;	// 0x344ea42d
- (bool)nextReference;	// 0x34560f3d
- (bool)nextRow;	// 0x344ea715
- (void)setCurrentSheet:(id)sheet;	// 0x345d0105
- (void)setReference:(id)reference;	// 0x344ea079
@end
