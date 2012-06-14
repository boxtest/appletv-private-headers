/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBState.h"

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState {
@private
	XlBinaryReader *mXlReader;	// 36 = 0x24
	XlSheetInfoTable *mXlSheetInfoTable;	// 40 = 0x28
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 44 = 0x2c
	unsigned mTotalCellsWithContentCount;	// 48 = 0x30
	unsigned mTotalCellsWithFormulaCount;	// 52 = 0x34
	XlEshObjectFactory *mXlEshObjectFactory;	// 56 = 0x38
	BOOL m_shouldRestoreHostEshFactory;	// 60 = 0x3c
	OABReaderState *mOAState;	// 64 = 0x40
	BOOL mImportCSV;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL importCSV;	// G=0x311bbb11; S=0x311bb3a5; @synthesize=mImportCSV
- (id)initWithXlReader:(XlBinaryReader *)xlReader cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x311bb04d
- (unsigned)cellsWithContentCount;	// 0x3133d7b1
- (id)columnWidthConvertor;	// 0x311cf7f9
- (void)dealloc;	// 0x311f41f9
// declared property getter: - (BOOL)importCSV;	// 0x311bbb11
- (void)incrementCellsWithContentCount;	// 0x311d5cd9
- (void)incrementCellsWithFormulaCount;	// 0x3133d7c1
- (id)oaState;	// 0x311c5721
- (void)pauseReading;	// 0x311cb3b9
- (void)readGlobalXlObjects;	// 0x311c57b5
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x311c81d5
- (void)resumeReading;	// 0x311cc3a1
// declared property setter: - (void)setImportCSV:(BOOL)csv;	// 0x311bb3a5
- (XlBinaryReader *)xlReader;	// 0x311bd149
- (XlSheetInfoTable *)xlSheetInfoTable;	// 0x311cac3d
@end
