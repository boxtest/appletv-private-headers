/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "NSCopying.h"

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPDisposable> {
	unsigned length;	// 4 = 0x4
	CPPDFChar **charArray;	// 8 = 0x8
	unsigned previousSize;	// 12 = 0xc
	unsigned size;	// 16 = 0x10
	CPMemoryOwner *sharedMemory;	// 20 = 0x14
	BOOL wasMerged;	// 24 = 0x18
}
@property(readonly, assign) CPPDFChar **charArray;	// G=0x34a07eb9; converted property
@property(readonly, assign) unsigned length;	// G=0x34a07ea9; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x34a07ec9; converted property
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x34a082b9
- (id)initWithSizeFor:(unsigned)aFor;	// 0x34a0937d
- (void)addChar:(CPPDFChar *)aChar;	// 0x34a09039
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x34a08fcd
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34a08f41
- (void)addCharsFromSequence:(id)sequence;	// 0x34a08edd
- (CGRect)bounds;	// 0x34a08459
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x34a0834d
// converted property getter: - (CPPDFChar **)charArray;	// 0x34a07eb9
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x34a09095
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x34a086c9
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34a08621
- (id)copyWithZone:(NSZone *)zone;	// 0x34a09229
- (void)dealloc;	// 0x34a0931d
- (void)dispose;	// 0x34a08281
- (void)finalize;	// 0x34a0830d
// converted property getter: - (unsigned)length;	// 0x34a07ea9
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x34a07ed9
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x34a08045
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x34a07f81
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34a07fe1
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x34a08489
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34a07f29
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x34a08af5
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x34a08bdd
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x34a08bf9
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x34a089a5
- (void)removeAllChars;	// 0x34a08e21
- (void)removeChar;	// 0x34a08e9d
- (void)removeCharAtIndex:(unsigned)index;	// 0x34a08d01
- (void)removeFrom:(unsigned)from;	// 0x34a08cad
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34a08769
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34a0850d
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x34a08da9
- (void)resize:(unsigned)resize;	// 0x34a090e5
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x34a08c15
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x34a08c75
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x34a08c91
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34a088ad
// converted property getter: - (BOOL)wasMerged;	// 0x34a07ec9
@end
