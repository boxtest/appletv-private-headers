/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import </libobjc.A.h>

@class CPCharSequence;

@interface CPZoneMaker : NSObject {
	CPCharSequence *charactersOnPage;	// 4 = 0x4
}
- (void)addObjectsToStraddler:(id)straddler from:(id)from;	// 0x30618e15
- (unsigned)categorizeGraphicsIn:(id)anIn;	// 0x306162d1
- (void)cutHorizontalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x306188c9
- (void)cutVerticalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x30618b69
- (void)dealloc;	// 0x30615c99
- (void)makeZonesIn:(id)anIn;	// 0x30615d69
- (void)makeZonesWithBoundaryIn:(id)anIn;	// 0x30616891
- (void)mergeQualifyingRectanglesIn:(id)anIn;	// 0x30616471
- (id)newZoneForStraddlersFrom:(id)from;	// 0x30618ef5
- (BOOL)overlap:(id)overlap with:(id)with;	// 0x30615ce5
@end

