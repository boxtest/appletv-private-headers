/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSheet.h"

@class EDWarnings, EDMergedCellCollection, EDPane, EDRowBlocks, EDCollection, SFUPointerKeyDictionary, EDReference, EDColumnInfoCollection;

__attribute__((visibility("hidden")))
@interface EDWorksheet : EDSheet {
@private
	EDRowBlocks *mRowBlocks;	// 60 = 0x3c
	EDColumnInfoCollection *mColumnInfos;	// 64 = 0x40
	EDCollection *mConditionalFormattings;	// 68 = 0x44
	EDCollection *mHyperlinks;	// 72 = 0x48
	EDCollection *mTables;	// 76 = 0x4c
	EDCollection *mPivotTables;	// 80 = 0x50
	EDMergedCellCollection *mMergedCells;	// 84 = 0x54
	EDPane *mPane;	// 88 = 0x58
	EDWarnings *mWorksheetWarnings;	// 92 = 0x5c
	double mDefaultColumnWidth;	// 96 = 0x60
	unsigned short mDefaultRowHeight;	// 104 = 0x68
	unsigned mMaxRowOutlineLevel;	// 108 = 0x6c
	unsigned mMaxColumnOutlineLevel;	// 112 = 0x70
	bool mFitToPage;	// 116 = 0x74
	EDReference *mMaxCellReferencedInFormulas;	// 120 = 0x78
	SFUPointerKeyDictionary *mMergedRows;	// 124 = 0x7c
	SFUPointerKeyDictionary *mMergedCols;	// 128 = 0x80
	EDReference *mImplicitCellArea;	// 132 = 0x84
}
@property(assign) double defaultColumnWidth;	// G=0x343c067d; S=0x343a26f1; converted property
@property(assign) unsigned short defaultRowHeight;	// G=0x343c8005; S=0x343a2705; converted property
@property(assign) bool fitToPage;	// G=0x345ad185; S=0x343a2715; converted property
@property(retain) id implicitCellArea;	// G=0x345ad1d9; S=0x345ad1e9; converted property
@property(assign) unsigned maxColumnOutlineLevel;	// G=0x345ad1c9; S=0x343a2735; converted property
@property(assign) unsigned maxRowOutlineLevel;	// G=0x345ad1a5; S=0x343a2725; converted property
@property(retain) id pane;	// G=0x345ad195; S=0x343b2555; converted property
- (id)columnInfos;	// 0x343a3ded
- (id)conditionalFormattings;	// 0x343b4299
// converted property getter: - (double)defaultColumnWidth;	// 0x343c067d
// converted property getter: - (unsigned short)defaultRowHeight;	// 0x343c8005
// converted property getter: - (bool)fitToPage;	// 0x345ad185
- (BOOL)hasMergedCol;	// 0x345ad26d
- (BOOL)hasMergedRow;	// 0x345ad2dd
- (id)hyperlinks;	// 0x3452f13d
// converted property getter: - (id)implicitCellArea;	// 0x345ad1d9
- (BOOL)isColMerged:(unsigned)merged;	// 0x345ad245
- (BOOL)isRowMerged:(unsigned)merged;	// 0x345ad2b5
- (id)maxCellReferencedInFormulas;	// 0x343be141
// converted property getter: - (unsigned)maxColumnOutlineLevel;	// 0x345ad1c9
// converted property getter: - (unsigned)maxRowOutlineLevel;	// 0x345ad1a5
- (id)mergedCells;	// 0x343b30f5
- (id)mergedColRef:(unsigned)ref;	// 0x345ad225
- (id)mergedRowRef:(unsigned)ref;	// 0x345ad295
// converted property getter: - (id)pane;	// 0x345ad195
- (id)pivotTables;	// 0x34523e75
- (void)reduceMemoryIfPossible;	// 0x345ad38d
- (id)rowBlocks;	// 0x343a48ed
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x343a26f1
// converted property setter: - (void)setDefaultRowHeight:(unsigned short)height;	// 0x343a2705
// converted property setter: - (void)setFitToPage:(bool)page;	// 0x343a2715
// converted property setter: - (void)setImplicitCellArea:(id)area;	// 0x345ad1e9
// converted property setter: - (void)setMaxColumnOutlineLevel:(unsigned)level;	// 0x343a2735
// converted property setter: - (void)setMaxRowOutlineLevel:(unsigned)level;	// 0x343a2725
- (void)setMergedColsRef:(id)ref from:(unsigned)from to:(unsigned)to;	// 0x345ad305
- (void)setMergedRowsRef:(id)ref from:(unsigned)from to:(unsigned)to;	// 0x345ad349
// converted property setter: - (void)setPane:(id)pane;	// 0x343b2555
- (void)setup;	// 0x344bb14d
- (id)tables;	// 0x345230e9
- (void)teardown;	// 0x343c8cfd
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned)needed;	// 0x3453c0f9
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned)needed;	// 0x345ad1b5
- (id)worksheetWarnings;	// 0x343b11f9
@end

