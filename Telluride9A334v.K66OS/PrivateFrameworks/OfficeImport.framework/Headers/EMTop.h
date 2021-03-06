/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIProgressiveReaderDelegate.h"
#import <NSObject.h> // Unknown library

@class EMState, EMWorkbookMapper, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface EMTop : NSObject <OIProgressiveReaderDelegate> {
@private
	CMArchiveManager *_archiver;	// 4 = 0x4
	EMState *_state;	// 8 = 0x8
	EMWorkbookMapper *_mapper;	// 12 = 0xc
	NSString *_inFileName;	// 16 = 0x10
	BOOL _xml;	// 20 = 0x14
}
+ (void)fillHTMLArchiveForExcelData:(id)excelData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x357d87fd
+ (void)fillHTMLArchiveForExcelFile:(id)excelFile xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x355b1af9
- (void)_streamWorkbook:(id)workbook;	// 0x355c85a1
- (void)dealloc;	// 0x355f3ba5
- (void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x357d84a5
- (void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x355b1c51
- (void)readerDidEndDocument:(id)reader;	// 0x357d8469
- (void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;	// 0x357d8421
- (void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;	// 0x357d82e1
@end

