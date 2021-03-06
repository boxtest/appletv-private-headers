/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"

@class NSMutableArray, CPZone, CPCluster;

@interface CPGuideFinder : NSObject <CPDisposable> {
	CPZone *contentZone;	// 4 = 0x4
	unsigned countOfWordsInZone;	// 8 = 0x8
	double *anchorArray;	// 12 = 0xc
	double *rightHandSideArray;	// 16 = 0x10
	XXStruct_pkaZhB *crossingWordArray;	// 20 = 0x14
	CPCluster *anchors;	// 24 = 0x18
	CPCluster *rightHandSides;	// 28 = 0x1c
	float medianFontSizeOfFirstCharacter;	// 32 = 0x20
	float medianFontSizeOfLastCharacter;	// 36 = 0x24
	NSMutableArray *gutters;	// 40 = 0x28
	NSMutableArray *leftGuides;	// 44 = 0x2c
	NSMutableArray *rightGuides;	// 48 = 0x30
}
@property(readonly, retain) NSMutableArray *gutters;	// G=0x322458ad; converted property
@property(readonly, retain) NSMutableArray *leftGuides;	// G=0x322458f1; converted property
@property(readonly, assign) float medianFontSizeOfFirstCharacter;	// G=0x3224379d; converted property
@property(readonly, assign) float medianFontSizeOfLastCharacter;	// G=0x322437ad; converted property
@property(readonly, retain) NSMutableArray *rightGuides;	// G=0x32245935; converted property
+ (BOOL)guideSeparates:(id)separates from:(id)from;	// 0x32244cc5
+ (BOOL)gutterSeparates:(id)separates from:(id)from;	// 0x32244d19
+ (void)reclusterBetweenGuides:(id)guides;	// 0x32244e8d
+ (void)reclusterPreservingAlignment:(id)alignment;	// 0x32244d6d
- (id)initWithContentZone:(id)contentZone;	// 0x32243561
- (BOOL)addStripTo:(id)to bottom:(float)bottom left:(float)left top:(float)top right:(float)right;	// 0x3224398d
- (void)dealloc;	// 0x322436ed
- (void)dispose;	// 0x32243621
- (void)finalize;	// 0x322436ad
- (void)findGuides;	// 0x32244be9
- (void)findGutters;	// 0x32244a11
- (void)findWordEdgeClusters;	// 0x322447d9
- (void)getWordEdges;	// 0x322437bd
// converted property getter: - (id)gutters;	// 0x322458ad
- (BOOL)hasGutters;	// 0x32245879
- (BOOL)hasLeftGuides;	// 0x322458bd
- (BOOL)hasRightGuides;	// 0x32245901
// converted property getter: - (id)leftGuides;	// 0x322458f1
- (void)markTextLines;	// 0x322455d1
// converted property getter: - (float)medianFontSizeOfFirstCharacter;	// 0x3224379d
// converted property getter: - (float)medianFontSizeOfLastCharacter;	// 0x322437ad
// converted property getter: - (id)rightGuides;	// 0x32245935
- (void)setAlignForWordWithExtent:(XXStruct_pkaZhB *)extent stripArray:(id)array stripMax:(double)max;	// 0x32243ad1
- (void)splitTextLines;	// 0x322455a1
- (void)splitTextLinesAtBorderWords;	// 0x32245041
- (void)splitTextLinesBetweenBorderWords;	// 0x322452ad
- (void)subdivideGutterFrom:(unsigned)from to:(unsigned)to;	// 0x32243f69
- (void)subdivideLeftGuideAt:(unsigned)at;	// 0x322442a1
- (void)subdivideRightGuideAt:(unsigned)at;	// 0x32244539
- (void)subdivideStripInto:(id)into from:(double)from to:(double)to borderedBy:(XXStruct_pkaZhB *)by ofCount:(unsigned)count crossedBy:(XXStruct_pkaZhB *)by6 ofCount:(unsigned)count7;	// 0x32243b21
@end

