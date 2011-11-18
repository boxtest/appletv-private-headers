/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPColumn : CPRegion {
	BOOL hasCentredParagraph;	// 68 = 0x44
	BOOL hasColumnBreak;	// 69 = 0x45
	float maxLeftPad;	// 72 = 0x48
	float maxRightPad;	// 76 = 0x4c
	float maxRight;	// 80 = 0x50
	float minLeft;	// 84 = 0x54
	BOOL complete;	// 88 = 0x58
}
@property(assign) BOOL complete;	// G=0x31f39485; S=0x31f39495; @synthesize
@property(assign) BOOL hasCentredParagraph;	// G=0x31f39445; S=0x31f39455; converted property
@property(assign) BOOL isImageRegion;	// G=0x31f3943d; S=0x31f39835; converted property
@property(assign) float maxLeftPad;	// G=0x31f39465; S=0x31f396dd; converted property
@property(assign) float maxRightPad;	// G=0x31f39475; S=0x31f3966d; converted property
- (id)init;	// 0x31f394a5
- (void)accept:(id)accept;	// 0x31f398bd
- (float)bottomBaseline;	// 0x31f397c5
- (CGRect)columnBounds;	// 0x31f3981d
// declared property getter: - (BOOL)complete;	// 0x31f39485
- (id)copyWithZone:(NSZone *)zone;	// 0x31f398d5
- (void)dealloc;	// 0x31f39901
- (id)description;	// 0x31f3953d
// converted property getter: - (BOOL)hasCentredParagraph;	// 0x31f39445
- (int)inOrder;	// 0x31f5b0ad
- (BOOL)isBoxRegion;	// 0x31f39431
- (BOOL)isGraphicalRegion;	// 0x31f39435
// converted property getter: - (BOOL)isImageRegion;	// 0x31f3943d
- (BOOL)isRowRegion;	// 0x31f39439
- (BOOL)isShapeRegion;	// 0x31f39441
- (float)leftPad;	// 0x31f397a1
// converted property getter: - (float)maxLeftPad;	// 0x31f39465
// converted property getter: - (float)maxRightPad;	// 0x31f39475
- (int)outOrder;	// 0x31f5b075
- (CGRect)paddedBounds;	// 0x31f395e1
- (float)rightPad;	// 0x31f39745
- (float)selectionBottom;	// 0x31f39591
// declared property setter: - (void)setComplete:(BOOL)complete;	// 0x31f39495
// converted property setter: - (void)setHasCentredParagraph:(BOOL)paragraph;	// 0x31f39455
- (void)setHasColumnBreak:(BOOL)aBreak;	// 0x31f39421
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x31f39835
// converted property setter: - (void)setMaxLeftPad:(float)pad;	// 0x31f396dd
// converted property setter: - (void)setMaxRightPad:(float)pad;	// 0x31f3966d
@end

