/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPTextObject.h"

@class NSArray, CPCharSequence;

@interface CPTextLine : CPTextObject <CPDisposable> {
	CPCharSequence *charSequence;	// 76 = 0x4c
	XXStruct_NaTu4D *wordArray;	// 80 = 0x50
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
	float minimumOffset;	// 120 = 0x78
	int levels;	// 124 = 0x7c
	float maximumLetterGap;	// 128 = 0x80
	float maximumWordGap;	// 132 = 0x84
	int tabsBefore;	// 136 = 0x88
	BOOL irregular;	// 140 = 0x8c
	unsigned leftSpacerIndex;	// 144 = 0x90
	unsigned rightSpacerIndex;	// 148 = 0x94
	BOOL isListItem;	// 152 = 0x98
	unsigned listSpacerIndex;	// 156 = 0x9c
	BOOL lineBreakAfter;	// 160 = 0xa0
	CPPDFStyle *uniformStyle;	// 164 = 0xa4
	unsigned short uniformStyleFlags;	// 168 = 0xa8
	float monospaceWidth;	// 172 = 0xac
	unsigned *spacesBefore;	// 176 = 0xb0
	BOOL disposed;	// 180 = 0xb4
}
@property(assign) float baseline;	// G=0x3262350d; S=0x32622b4d; converted property
@property(retain) CPCharSequence *charSequence;	// G=0x32622839; S=0x32624045; converted property
@property(retain) NSArray *columnBreaks;	// G=0x32622af5; S=0x326238d5; converted property
@property(assign) BOOL hasBeenProcessed;	// G=0x32622ae5; S=0x32622ad5; converted property
@property(assign) BOOL hasBeenSplit;	// G=0x32622ac5; S=0x32622ab5; converted property
@property(assign) BOOL hasTabs;	// G=0x32622b15; S=0x32622b05; converted property
@property(readonly, assign) CPInlineContainer *inlineList;	// G=0x326228dd; converted property
@property(assign) BOOL irregular;	// G=0x32622c21; S=0x32622c31; converted property
@property(assign, nonatomic) BOOL isListItem;	// G=0x32622c8d; S=0x32622c9d; @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// G=0x32622ccd; S=0x32622cdd; @synthesize
@property(assign) int levels;	// G=0x32622bad; S=0x32622bbd; converted property
@property(assign, nonatomic) BOOL lineBreakAfter;	// G=0x32622c4d; S=0x32622c5d; @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// G=0x32622c6d; S=0x32622c7d; @synthesize
@property(assign) float maximumLetterGap;	// G=0x32622be1; S=0x32622bf1; converted property
@property(assign) float maximumWordGap;	// G=0x32622c01; S=0x32622c11; converted property
@property(readonly, assign) float monospaceWidth;	// G=0x326230b1; converted property
@property(assign, nonatomic) unsigned rightSpacerIndex;	// G=0x32622cad; S=0x32622cbd; @synthesize
@property(assign) int tabsBefore;	// G=0x32622b35; S=0x32622b25; converted property
@property(readonly, assign) XXStruct_NaTu4D *wordArray;	// G=0x32622849; converted property
@property(readonly, assign) unsigned wordCount;	// G=0x32622859; converted property
- (id)init;	// 0x32622ced
- (void)accept:(id)accept;	// 0x326238bd
- (int)align;	// 0x32623d71
- (CGPoint)anchor;	// 0x326235c9
- (void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;	// 0x32623e05
- (id)attributes;	// 0x32622c41
- (int)baseLineAscending:(id)ascending;	// 0x32623775
- (int)baseLineDescending:(id)descending;	// 0x32623729
// converted property getter: - (float)baseline;	// 0x3262350d
- (CGRect)bounds;	// 0x326237c1
- (CGRect)boundsOfWordAtIndex:(unsigned)index;	// 0x32623f81
- (BOOL)changesFontAt:(id)at;	// 0x32623ca9
// converted property getter: - (id)charSequence;	// 0x32622839
// converted property getter: - (id)columnBreaks;	// 0x32622af5
- (id)copyWithZone:(NSZone *)zone;	// 0x3262408d
- (void)dealloc;	// 0x3262417d
- (void)dispose;	// 0x3262422d
- (void)finalize;	// 0x326241ed
- (XXStruct_NaTu4D *)firstWord;	// 0x32622869
- (void)fitBoundsToChildren;	// 0x32622b45
// converted property getter: - (BOOL)hasBeenProcessed;	// 0x32622ae5
// converted property getter: - (BOOL)hasBeenSplit;	// 0x32622ac5
- (BOOL)hasDropCap;	// 0x32622e59
- (BOOL)hasJustifiedAlignment;	// 0x32623d3d
// converted property getter: - (BOOL)hasTabs;	// 0x32622b15
- (BOOL)hyphenated;	// 0x32622b49
- (unsigned)inlineCount;	// 0x326228b9
// converted property getter: - (CPInlineContainer *)inlineList;	// 0x326228dd
// converted property getter: - (BOOL)irregular;	// 0x32622c21
- (BOOL)isIndivisible;	// 0x32622b71
// declared property getter: - (BOOL)isListItem;	// 0x32622c8d
- (BOOL)isMonospaced;	// 0x32623221
- (XXStruct_NaTu4D *)lastWord;	// 0x3262288d
// declared property getter: - (unsigned)leftSpacerIndex;	// 0x32622ccd
// converted property getter: - (int)levels;	// 0x32622bad
// declared property getter: - (BOOL)lineBreakAfter;	// 0x32622c4d
// declared property getter: - (unsigned)listSpacerIndex;	// 0x32622c6d
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x326229cd
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x32622a35
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x326228fd
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x32622965
// converted property getter: - (float)maximumLetterGap;	// 0x32622be1
// converted property getter: - (float)maximumWordGap;	// 0x32622c01
- (float)medianFontSize;	// 0x32622dc5
// converted property getter: - (float)monospaceWidth;	// 0x326230b1
- (id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;	// 0x32623af1
- (BOOL)overlapsHorizontally:(CGRect)horizontally;	// 0x32623639
- (BOOL)overlapsWith:(id)with;	// 0x326236d9
- (id)properties;	// 0x32622aa9
- (void)recomputeBaseline;	// 0x32623345
- (void)recomputeLevels;	// 0x32622f91
- (BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3262391d
// declared property getter: - (unsigned)rightSpacerIndex;	// 0x32622cad
// converted property setter: - (void)setBaseline:(float)baseline;	// 0x32622b4d
- (void)setBaselineToNull;	// 0x32622b5d
// converted property setter: - (void)setCharSequence:(id)sequence;	// 0x32624045
// converted property setter: - (void)setColumnBreaks:(id)breaks;	// 0x326238d5
// converted property setter: - (void)setHasBeenProcessed:(BOOL)processed;	// 0x32622ad5
// converted property setter: - (void)setHasBeenSplit:(BOOL)split;	// 0x32622ab5
// converted property setter: - (void)setHasTabs:(BOOL)tabs;	// 0x32622b05
// converted property setter: - (void)setIrregular:(BOOL)irregular;	// 0x32622c31
// declared property setter: - (void)setIsListItem:(BOOL)item;	// 0x32622c9d
// declared property setter: - (void)setLeftSpacerIndex:(unsigned)index;	// 0x32622cdd
// converted property setter: - (void)setLevels:(int)levels;	// 0x32622bbd
// declared property setter: - (void)setLineBreakAfter:(BOOL)after;	// 0x32622c5d
// declared property setter: - (void)setListSpacerIndex:(unsigned)index;	// 0x32622c7d
// converted property setter: - (void)setMaximumLetterGap:(float)gap;	// 0x32622bf1
// converted property setter: - (void)setMaximumWordGap:(float)gap;	// 0x32622c11
// declared property setter: - (void)setRightSpacerIndex:(unsigned)index;	// 0x32622cbd
- (void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;	// 0x32622ff1
// converted property setter: - (void)setTabsBefore:(int)before;	// 0x32622b25
- (unsigned)spacesBeforeWordAtIndex:(unsigned)index;	// 0x32622b75
- (BOOL)styleIsUniform:(CPPDFStyle **)uniform styleFlags:(unsigned short)flags;	// 0x32623249
// converted property getter: - (int)tabsBefore;	// 0x32622b35
- (int)topIsAbove:(id)above;	// 0x32622f05
- (void)translateObjectYBy:(float)by;	// 0x326234b9
// converted property getter: - (XXStruct_NaTu4D *)wordArray;	// 0x32622849
- (XXStruct_NaTu4D *)wordArrayOfSize:(unsigned)size;	// 0x32623fe1
- (XXStruct_NaTu4D *)wordAtIndex:(unsigned)index;	// 0x32623f31
// converted property getter: - (unsigned)wordCount;	// 0x32622859
- (long)zOrder;	// 0x32623db9
@end
