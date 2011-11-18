/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIProgressiveReaderDelegate.h"
#import <NSObject.h> // Unknown library

@class PMPresentationMapper, PMState, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface PMTop : NSObject <OIProgressiveReaderDelegate> {
@private
	CMArchiveManager *_archiver;	// 4 = 0x4
	PMState *_state;	// 8 = 0x8
	PMPresentationMapper *_mapper;	// 12 = 0xc
	BOOL _xml;	// 16 = 0x10
}
+ (void)fillHTMLArchiveForPowerPointData:(id)powerPointData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30eda321
+ (void)fillHTMLArchiveForPowerPointFile:(id)powerPointFile xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30c88239
+ (void)fillHTMLArchiveForPowerPointFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30c8826d
- (void)dealloc;	// 0x30c72a99
- (BOOL)isCancelled;	// 0x30eda2f5
- (void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30eda2f9
- (void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30c883dd
- (void)readFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30c88405
- (void)readerDidEndDocument:(id)reader;	// 0x30c6dcd5
- (void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;	// 0x30c6bde9
- (void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;	// 0x30ca7235
@end

