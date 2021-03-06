/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, CPZone, CPPage;

@interface CPParagraphMaker : NSObject {
	NSMutableArray *avail;	// 4 = 0x4
	NSMutableArray *paragraphs;	// 8 = 0x8
	NSMutableArray *compoundedShapesOnPage;	// 12 = 0xc
	BOOL spacingSet;	// 16 = 0x10
	float currentSpacing;	// 20 = 0x14
	CPZone *parent;	// 24 = 0x18
	CPPage *page;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *paragraphs;	// G=0x34cffa7d; converted property
+ (BOOL)line:(id)line alignsWith:(id)with;	// 0x34cffa8d
- (void)addCompoundedShapesOn:(id)on to:(id)to;	// 0x34d02315
- (void)addLinesTo:(id)to;	// 0x34d01bf5
- (unsigned)alignmentOf:(id)of and:(id)anAnd;	// 0x34d005c9
- (unsigned)alignmentOf:(id)of and:(id)anAnd and:(id)anAnd3;	// 0x34d0087d
- (void)dealloc;	// 0x34cffa19
- (BOOL)firstWordOf:(id)of fits:(id)fits indent:(float)indent;	// 0x34cffa91
- (BOOL)fitsBelow:(id)below alignment:(unsigned)alignment spacing:(float)spacing from:(int)from;	// 0x34d00ff9
- (int)indexOfUniqueLineBelow:(id)uniqueLineBelow from:(int)from;	// 0x34d00349
- (BOOL)isGraphicBetween:(id)between and:(id)anAnd;	// 0x34cffbf9
- (BOOL)line:(id)line isAlignedWith:(id)with;	// 0x34d00c69
- (BOOL)line:(id)line isBelow:(id)below;	// 0x34cfff29
- (BOOL)line:(id)line isDirectlyBelow:(id)below;	// 0x34cffe81
- (int)linesThatOverlapLineAt:(int)at between:(float)between and:(float)anAnd from:(int)from;	// 0x34d000d1
- (void)makeParagraphsIn:(id)anIn;	// 0x34d0241d
- (id)newInitialParagraph;	// 0x34d01281
- (int)paragraph:(id)paragraph splits:(id)splits;	// 0x34d01bf1
// converted property getter: - (id)paragraphs;	// 0x34cffa7d
- (BOOL)spacingOf:(id)of and:(id)anAnd and:(id)anAnd3 is:(float *)is;	// 0x34d00549
- (BOOL)styleOf:(id)of differsFromStyleOf:(id)of2;	// 0x34d00819
@end

