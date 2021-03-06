/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMTop.h"
#import "OIProgressiveReaderDelegate.h"

@class CMArchiveManager, EMState, EMWorkbookMapper, NSString;

@interface EMTop : CMTop <OIProgressiveReaderDelegate> {
	CMArchiveManager *_archiver;	// 4 = 0x4
	EMState *_state;	// 8 = 0x8
	EMWorkbookMapper *_mapper;	// 12 = 0xc
	NSString *_inFileName;	// 16 = 0x10
	BOOL _xml;	// 20 = 0x14
}
+ (void)fillHTMLArchiveForExcelData:(id)excelData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x349e677d
+ (void)fillHTMLArchiveForExcelFile:(id)excelFile xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x3488ba5d
- (void)_streamWorkbook:(id)workbook;	// 0x348a3b3d
- (void)dealloc;	// 0x348c2dd9
- (void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x349e68cd
- (void)readFile:(id)file orData:(id)data withDataFileName:(id)dataFileName xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x3488bbd9
- (void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x3488bba9
- (void)readerDidEndDocument:(id)reader;	// 0x349e6a59
- (void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;	// 0x349e6a15
- (void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;	// 0x349e68f9
@end

