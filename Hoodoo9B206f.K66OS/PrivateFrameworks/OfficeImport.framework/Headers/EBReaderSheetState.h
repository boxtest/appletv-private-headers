/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDSheet, EBReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject {
@private
	EBReaderState *mReaderState;	// 4 = 0x4
	EDSheet *mEDSheet;	// 8 = 0x8
	CFDictionaryRef mSharedFormulas;	// 12 = 0xc
	unsigned mChartIndex;	// 16 = 0x10
}
- (id)initWithReaderState:(id)readerState;	// 0x3445b22d
- (void)dealloc;	// 0x3446b2a1
- (id)edSheet;	// 0x3445f085
- (unsigned)nextChartIndex;	// 0x344d350d
- (id)readerState;	// 0x3445c371
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x3447995d
- (id)resources;	// 0x34461255
- (void)setEDSheet:(id)sheet;	// 0x3445c391
- (void)setSharedFormulaIndex:(unsigned)index forRowCol:(int)rowCol;	// 0x345df419
- (unsigned)sharedFormulaIndexForRowCol:(int)rowCol;	// 0x345df42d
- (id)workbook;	// 0x344df98d
- (XlBinaryReader *)xlReader;	// 0x3445c5d9
@end
