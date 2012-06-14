/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDFormula, TSUPointerKeyDictionary, EDString;

__attribute__((visibility("hidden")))
@interface EDName : NSObject {
@private
	unsigned mSheetIndex;	// 4 = 0x4
	EDString *mNameString;	// 8 = 0x8
	EDFormula *mFormula;	// 12 = 0xc
	TSUPointerKeyDictionary *mMaxWorksheetReferences;	// 16 = 0x10
}
@property(retain) id nameString;	// G=0x31334649; S=0x312dbffd; converted property
@property(assign) unsigned sheetIndex;	// G=0x31334669; S=0x312dc0a1; converted property
- (id)init;	// 0x312dbfbd
- (void)dealloc;	// 0x312dfac9
- (id)formula;	// 0x31334659
- (unsigned)hash;	// 0x313346c5
- (BOOL)isEqual:(id)equal;	// 0x313346f1
- (BOOL)isEqualToEDName:(id)edname;	// 0x313347b5
- (BOOL)isEqualToString:(id)string;	// 0x3133478d
- (id)maxWorksheetReferences;	// 0x31334679
// converted property getter: - (id)nameString;	// 0x31334649
- (void)setCleanedFormula:(id)formula;	// 0x312dc295
- (void)setFormula:(id)formula workbook:(id)workbook;	// 0x312dc231
// converted property setter: - (void)setNameString:(id)string;	// 0x312dbffd
// converted property setter: - (void)setSheetIndex:(unsigned)index;	// 0x312dc0a1
// converted property getter: - (unsigned)sheetIndex;	// 0x31334669
@end
