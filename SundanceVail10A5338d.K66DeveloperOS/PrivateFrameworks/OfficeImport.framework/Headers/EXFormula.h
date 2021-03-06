/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXFormula : NSObject {
}
+ (void)applyArrayedFormula:(id)formula edReference:(id)reference edWorksheet:(id)worksheet state:(id)state;	// 0x33b1b159
+ (void)applyArrayedFormulasToSheet:(id)sheet state:(id)state;	// 0x33a64875
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement formulaClass:(Class)aClass state:(id)state;	// 0x33af29ad
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x33b85f25
+ (id)edTokensForFormulaString:(id)formulaString formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 sheet:(id)sheet workbook:(id)workbook;	// 0x33ad95fd
+ (id)edTokensForFormulaString:(id)formulaString sheet:(id)sheet workbook:(id)workbook;	// 0x33b85f61
+ (Class)formulaClassFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x33ad9189
+ (id)readFrom:(xmlNode *)from formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x33ad92cd
+ (void)readFrom:(xmlNode *)from rowNumber:(int)number columnNumber:(int)number3 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x33ad9129
@end

