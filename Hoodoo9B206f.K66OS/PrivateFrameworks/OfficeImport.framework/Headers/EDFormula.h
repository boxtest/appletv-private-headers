/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormulaBuilding.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDFormula : NSObject <EDFormulaBuilding> {
@private
	CFDataRef mPackedData;	// 4 = 0x4
}
@property(assign, getter=isCleaned) bool cleaned;	// G=0x34482825; S=0x34484141; converted property
@property(retain) id originalFormulaString;	// G=0x345c2971; S=0x3456c0b1; converted property
@property(retain) id warningParameter;	// G=0x345c291d; S=0x345c287d; converted property
+ (id)formula;	// 0x34480621
+ (id)messageForWarning:(int)warning;	// 0x3455cd31
- (id)init;	// 0x34480669
- (id)initWithFormula:(id)formula;	// 0x345c3099
- (BOOL)addArrayToken:(long)token;	// 0x345c25bd
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x345c2f05
- (bool)addToken:(int)token extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x344822b9
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;	// 0x345c2f71
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x345c3155
- (BOOL)convertLastRefsToArea;	// 0x345c220d
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;	// 0x345c2115
- (BOOL)convertToIntersect:(unsigned)intersect;	// 0x345c1fe9
- (BOOL)convertToList:(unsigned)list;	// 0x345c25a5
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;	// 0x345c2305
- (bool)copyTokenAtIndex:(unsigned)index fromFormula:(id)formula;	// 0x345c2de5
- (bool)copyTokenFromXlPtg:(XlPtg *)xlPtg;	// 0x344821c9
- (unsigned)countExtendedDataForTokenAtIndex:(unsigned)index;	// 0x345c2f81
- (void)dealloc;	// 0x34485935
- (char *)extendedDataForTokenAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned *)length;	// 0x345c2fdd
- (unsigned)firstTokenIndexForArgAtIndex:(unsigned)index;	// 0x345c2799
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;	// 0x345c2619
- (bool)isBaseFormula;	// 0x345c1fe5
// converted property getter: - (bool)isCleaned;	// 0x34482825
- (bool)isCleanedWithEvaluationStack;	// 0x345c2825
- (bool)isContainsRelativeReferences;	// 0x345c2851
- (bool)isSharedFormula;	// 0x345c1fe1
- (bool)isSupportedFormula;	// 0x344827f9
- (char *)lastExtendedDataForTokenAtIndex:(unsigned)index length:(unsigned *)length;	// 0x34483d39
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;	// 0x345c203d
- (void)markLastTokenAsDuration;	// 0x345c1fed
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;	// 0x345c1ff1
// converted property getter: - (id)originalFormulaString;	// 0x345c2971
- (void)populateXlPtg:(XlPtg *)ptg index:(unsigned)index;	// 0x345c2b7d
- (void)removeAllTokens;	// 0x344e6d69
- (bool)removeTokenAtIndex:(unsigned)index;	// 0x345c2d21
- (bool)replaceTokenAtIndex:(unsigned)index withFormula:(id)formula formulaTokenIndex:(unsigned)index3;	// 0x345c2c0d
- (void)replaceTokenTypeAtIndex:(unsigned)index withType:(int)type;	// 0x345c3079
- (id)saveArgs:(unsigned)args andDelete:(BOOL)aDelete;	// 0x345c26ad
// converted property setter: - (void)setCleaned:(bool)cleaned;	// 0x34484141
- (char *)setExtendedDataAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned)length;	// 0x344824dd
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;	// 0x345c25e1
// converted property setter: - (void)setOriginalFormulaString:(id)string;	// 0x3456c0b1
- (void)setWarning:(int)warning;	// 0x34527bd9
// converted property setter: - (void)setWarningParameter:(id)parameter;	// 0x345c287d
- (void)setupExtendedDataForTokenAtIndex:(unsigned)index extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x34482401
- (bool)setupTokensWithTokensCount:(unsigned)tokensCount tokensWithDataCount:(unsigned)dataCount extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x344806b9
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;	// 0x345c1ff5
- (EDToken *)tokenAtIndex:(unsigned)index;	// 0x34482675
- (unsigned)tokenCount;	// 0x34483a49
- (int)tokenTypeAtIndex:(unsigned)index;	// 0x34483c81
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x345c30f5
- (void)updateCleanedWithEvaluationStack:(bool)evaluationStack;	// 0x345c27f5
- (void)updateContainsRelativeReferences:(bool)references;	// 0x34483fcd
- (id)warning;	// 0x3455ccd1
// converted property getter: - (id)warningParameter;	// 0x345c291d
- (int)warningType;	// 0x3455cd09
- (ChVector<XlPtg*> *)xlPtgs;	// 0x345c29bd
@end

