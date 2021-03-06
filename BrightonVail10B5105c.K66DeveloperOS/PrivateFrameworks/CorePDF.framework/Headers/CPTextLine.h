/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPTextObject.h"
#import "CPDisposable.h"

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
	CPCharSequence *charSequence;	// 76 = 0x4c
	XXStruct_iDweLB *wordArray;	// 80 = 0x50
	unsigned wordCount;	// 84 = 0x54
	CPInlineContainer *inlineList;	// 88 = 0x58
	int lineNumber;	// 92 = 0x5c
	int columnNumber;	// 96 = 0x60
	float baseline;	// 100 = 0x64
	BOOL baseLineIsNull;	// 104 = 0x68
	BOOL hasBeenSplit;	// 105 = 0x69
	BOOL hasBeenProcessed;	// 106 = 0x6a
	BOOL maySplit;	// 107 = 0x6b
	BOOL hasTabs;	// 108 = 0x6c
	NSArray *columnBreaks;	// 112 = 0x70
	NSArray *xsegments;	// 116 = 0x74
	int levels;	// 120 = 0x78
	float maximumLetterGap;	// 124 = 0x7c
	float maximumWordGap;	// 128 = 0x80
	int tabsBefore;	// 132 = 0x84
	BOOL irregular;	// 136 = 0x88
	unsigned leftSpacerIndex;	// 140 = 0x8c
	unsigned rightSpacerIndex;	// 144 = 0x90
	BOOL isListItem;	// 148 = 0x94
	unsigned listSpacerIndex;	// 152 = 0x98
	BOOL lineBreakAfter;	// 156 = 0x9c
	CPPDFStyle *uniformStyle;	// 160 = 0xa0
	unsigned short uniformStyleFlags;	// 164 = 0xa4
	float monospaceWidth;	// 168 = 0xa8
	unsigned *spacesBefore;	// 172 = 0xac
	BOOL disposed;	// 176 = 0xb0
}
@property(assign) float baseline;	// G=0x30230c3d; S=0x30230d09; converted property
@property(retain) CPCharSequence *charSequence;	// G=0x3022ff55; S=0x3022ff11; converted property
@property(retain) NSArray *columnBreaks;	// G=0x302308f1; S=0x30230901; converted property
@property(assign) BOOL hasBeenProcessed;	// G=0x302308e1; S=0x302308d1; converted property
@property(assign) BOOL hasBeenSplit;	// G=0x302308c1; S=0x302308b1; converted property
@property(assign) BOOL hasTabs;	// G=0x3023096d; S=0x3023095d; converted property
@property(readonly, assign) CPInlineContainer *inlineList;	// G=0x30230101; converted property
@property(assign) BOOL irregular;	// G=0x302313bd; S=0x302313cd; converted property
@property(assign, nonatomic) BOOL isListItem;	// G=0x302315f9; S=0x30231609; @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// G=0x302315b9; S=0x302315c9; @synthesize
@property(assign) int levels;	// G=0x302312e9; S=0x302312f9; converted property
@property(assign, nonatomic) BOOL lineBreakAfter;	// G=0x30231639; S=0x30231649; @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// G=0x30231619; S=0x30231629; @synthesize
@property(assign) float maximumLetterGap;	// G=0x3023137d; S=0x3023138d; converted property
@property(assign) float maximumWordGap;	// G=0x3023139d; S=0x302313ad; converted property
@property(readonly, assign) float monospaceWidth;	// G=0x3023100d; converted property
@property(assign, nonatomic) unsigned rightSpacerIndex;	// G=0x302315d9; S=0x302315e9; @synthesize
@property(assign) int tabsBefore;	// G=0x3023098d; S=0x3023097d; converted property
@property(readonly, assign) XXStruct_iDweLB *wordArray;	// G=0x3022ff65; converted property
@property(readonly, assign) unsigned wordCount;	// G=0x3022ffc5; converted property
- (id)init;	// 0x3022fc21
- (void)accept:(id)accept;	// 0x30230945
- (int)align;	// 0x302302b9
- (CGPoint)anchor;	// 0x30230bd5
- (void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;	// 0x30230111
- (id)attributes;	// 0x302313dd
- (int)baseLineAscending:(id)ascending;	// 0x30230a61
- (int)baseLineDescending:(id)descending;	// 0x30230aa5
// converted property getter: - (float)baseline;	// 0x30230c3d
- (CGRect)bounds;	// 0x302309a1
- (CGRect)boundsOfWordAtIndex:(unsigned)index;	// 0x3022ffd5
- (BOOL)changesFontAt:(id)at;	// 0x30230331
// converted property getter: - (id)charSequence;	// 0x3022ff55
// converted property getter: - (id)columnBreaks;	// 0x302308f1
- (id)copyWithZone:(NSZone *)zone;	// 0x3022fe35
- (void)dealloc;	// 0x3022fdc1
- (void)dispose;	// 0x3022fcf5
- (void)finalize;	// 0x3022fd81
- (XXStruct_iDweLB *)firstWord;	// 0x30230089
- (void)fitBoundsToChildren;	// 0x3023099d
// converted property getter: - (BOOL)hasBeenProcessed;	// 0x302308e1
// converted property getter: - (BOOL)hasBeenSplit;	// 0x302308c1
- (BOOL)hasDropCap;	// 0x3023147d
- (BOOL)hasJustifiedAlignment;	// 0x30230305
// converted property getter: - (BOOL)hasTabs;	// 0x3023096d
- (BOOL)hyphenated;	// 0x30230c39
- (unsigned)inlineCount;	// 0x302300d9
// converted property getter: - (CPInlineContainer *)inlineList;	// 0x30230101
// converted property getter: - (BOOL)irregular;	// 0x302313bd
- (BOOL)isIndivisible;	// 0x30230d2d
// declared property getter: - (BOOL)isListItem;	// 0x302315f9
- (BOOL)isMonospaced;	// 0x30230fe1
- (XXStruct_iDweLB *)lastWord;	// 0x302300ad
// declared property getter: - (unsigned)leftSpacerIndex;	// 0x302315b9
// converted property getter: - (int)levels;	// 0x302312e9
// declared property getter: - (BOOL)lineBreakAfter;	// 0x30231639
// declared property getter: - (unsigned)listSpacerIndex;	// 0x30231619
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x302307d1
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x30230835
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x30230705
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x30230765
// converted property getter: - (float)maximumLetterGap;	// 0x3023137d
// converted property getter: - (float)maximumWordGap;	// 0x3023139d
- (float)medianFontSize;	// 0x30231531
// converted property getter: - (float)monospaceWidth;	// 0x3023100d
- (id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;	// 0x302303c1
- (BOOL)overlapsHorizontally:(CGRect)horizontally;	// 0x30230b39
- (BOOL)overlapsWith:(id)with;	// 0x30230ae9
- (id)properties;	// 0x302308a5
- (void)recomputeBaseline;	// 0x30230d85
- (void)recomputeLevels;	// 0x30231309
- (BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3023056d
// declared property getter: - (unsigned)rightSpacerIndex;	// 0x302315d9
// converted property setter: - (void)setBaseline:(float)baseline;	// 0x30230d09
- (void)setBaselineToNull;	// 0x30230d19
// converted property setter: - (void)setCharSequence:(id)sequence;	// 0x3022ff11
// converted property setter: - (void)setColumnBreaks:(id)breaks;	// 0x30230901
// converted property setter: - (void)setHasBeenProcessed:(BOOL)processed;	// 0x302308d1
// converted property setter: - (void)setHasBeenSplit:(BOOL)split;	// 0x302308b1
// converted property setter: - (void)setHasTabs:(BOOL)tabs;	// 0x3023095d
// converted property setter: - (void)setIrregular:(BOOL)irregular;	// 0x302313cd
// declared property setter: - (void)setIsListItem:(BOOL)item;	// 0x30231609
// declared property setter: - (void)setLeftSpacerIndex:(unsigned)index;	// 0x302315c9
// converted property setter: - (void)setLevels:(int)levels;	// 0x302312f9
// declared property setter: - (void)setLineBreakAfter:(BOOL)after;	// 0x30231649
// declared property setter: - (void)setListSpacerIndex:(unsigned)index;	// 0x30231629
// converted property setter: - (void)setMaximumLetterGap:(float)gap;	// 0x3023138d
// converted property setter: - (void)setMaximumWordGap:(float)gap;	// 0x302313ad
// declared property setter: - (void)setRightSpacerIndex:(unsigned)index;	// 0x302315e9
- (void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;	// 0x30231241
// converted property setter: - (void)setTabsBefore:(int)before;	// 0x3023097d
- (unsigned)spacesBeforeWordAtIndex:(unsigned)index;	// 0x30231209
- (BOOL)styleIsUniform:(CPPDFStyle **)uniform styleFlags:(unsigned short)flags;	// 0x30230ee9
// converted property getter: - (int)tabsBefore;	// 0x3023098d
- (int)topIsAbove:(id)above;	// 0x302313e9
- (void)translateObjectYBy:(float)by;	// 0x30230d31
// converted property getter: - (XXStruct_iDweLB *)wordArray;	// 0x3022ff65
- (XXStruct_iDweLB *)wordArrayOfSize:(unsigned)size;	// 0x3022ff75
- (XXStruct_iDweLB *)wordAtIndex:(unsigned)index;	// 0x30230039
// converted property getter: - (unsigned)wordCount;	// 0x3022ffc5
- (long)zOrder;	// 0x30230261
@end

