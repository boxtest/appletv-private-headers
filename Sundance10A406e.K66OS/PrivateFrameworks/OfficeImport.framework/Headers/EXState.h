/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"
#import "OfficeImport-Structs.h"

@class EDWorkbook, EDSheet, EXOAVState, EXOfficeArtState, OCPPackagePart, ECColumnWidthConvertor, NSMutableArray, NSMutableDictionary, EDReference, CPImportTracing, EDResources;
@protocol OCCancelDelegate;

@interface EXState : OAVState {
	unsigned mCurrentSheetIndex;	// 28 = 0x1c
	EDSheet *mCurrentSheet;	// 32 = 0x20
	unsigned mCellStyleXfsOffset;	// 36 = 0x24
	double mDefaultColumnWidth;	// 40 = 0x28
	double mDefaultRowHeight;	// 48 = 0x30
	OCPPackagePart *mCurrentPart;	// 56 = 0x38
	OCPPackagePart *mWorkbookPart;	// 60 = 0x3c
	CFDictionaryRef mSharedFormulasMap;	// 64 = 0x40
	NSMutableArray *mArrayedFormulas;	// 68 = 0x44
	EDReference *mSheetDimension;	// 72 = 0x48
	EXOfficeArtState *mOfficeArtState;	// 76 = 0x4c
	EXOAVState *mOAVState;	// 80 = 0x50
	bool mMaxColumnsWarned;	// 84 = 0x54
	bool mMaxRowsWarned;	// 85 = 0x55
	bool mIsPredefinedTableStylesRead;	// 86 = 0x56
	NSMutableDictionary *mReferenceForCommentTextBox;	// 88 = 0x58
	bool mIsPredefinedDxfsBeingRead;	// 92 = 0x5c
	xmlNs *mRelationshipNS;	// 96 = 0x60
	unsigned mTotalCellsWithContentCount;	// 100 = 0x64
	unsigned mTotalCellsWithFormulaCount;	// 104 = 0x68
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 108 = 0x6c
	NSMutableArray *mLegacyDrawables;	// 112 = 0x70
	EDWorkbook *mWorkbook;	// 116 = 0x74
	EDResources *mResources;	// 120 = 0x78
	id<OCCancelDelegate> mCancelDelegate;	// 124 = 0x7c
	CPImportTracing *mTracing;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x3508b21d; @synthesize=mCancelDelegate
@property(assign) unsigned cellStyleXfsOffset;	// G=0x34f63a9d; S=0x34f6360d; converted property
@property(retain) id currentPart;	// G=0x34f645a9; S=0x34f64485; converted property
@property(retain) id currentSheet;	// G=0x34f66111; S=0x34f65dfd; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x3508b1d5; S=0x34f654cd; converted property
@property(assign) double defaultColumnWidth;	// G=0x3508b1e5; S=0x34f67d35; converted property
@property(assign) double defaultRowHeight;	// G=0x34f6875d; S=0x34f67d49; converted property
@property(retain) id officeArtState;	// G=0x34f613ad; S=0x34ff3709; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x34ff2ba5; S=0x34ff2195; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x34ff1c7d; S=0x34ff2c69; converted property
@property(retain) id resources;	// G=0x34f61941; S=0x34f6139d; converted property
@property(retain) id sheetDimension;	// G=0x34f682f9; S=0x34f678b9; converted property
@property(retain) id workbook;	// G=0x34f61961; S=0x34f61351; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x34f60889
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x35000b71
- (id)arrayedFormulas;	// 0x34f692f5
// declared property getter: - (id)cancelDelegate;	// 0x3508b21d
// converted property getter: - (unsigned)cellStyleXfsOffset;	// 0x34f63a9d
- (unsigned)cellsWithContentCount;	// 0x3508b20d
- (id)columnWidthConvertor;	// 0x34f67c91
// converted property getter: - (id)currentPart;	// 0x34f645a9
// converted property getter: - (id)currentSheet;	// 0x34f66111
// converted property getter: - (unsigned)currentSheetIndex;	// 0x3508b1d5
- (void)dealloc;	// 0x34f6a1dd
// converted property getter: - (double)defaultColumnWidth;	// 0x3508b1e5
// converted property getter: - (double)defaultRowHeight;	// 0x34f6875d
- (void)incrementCellsWithContentCount;	// 0x34f68b39
- (void)incrementCellsWithFormulaCount;	// 0x34fe151d
- (BOOL)isCancelled;	// 0x34f654a9
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x34ff2ba5
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x34ff1c7d
- (id)legacyDrawables;	// 0x34f69029
- (id)oavState;	// 0x35016991
// converted property getter: - (id)officeArtState;	// 0x34f613ad
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x3508b1fd
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x34f65211
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x35012311
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x35011e95
- (void)resetForNewSheet;	// 0x34f65871
// converted property getter: - (id)resources;	// 0x34f61941
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned)offset;	// 0x34f6360d
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x34f64485
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x34f65dfd
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x34f654cd
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x34f67d35
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x34f67d49
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x34ff3709
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x34ff2195
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x34ff2c69
// converted property setter: - (void)setResources:(id)resources;	// 0x34f6139d
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x34f678b9
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x350164b5
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x34f61351
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x35000b85
// converted property getter: - (id)sheetDimension;	// 0x34f682f9
- (id)textBoxForReference:(id)reference;	// 0x35017535
// converted property getter: - (id)workbook;	// 0x34f61961
- (id)workbookPart;	// 0x34f612c9
@end
