/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import "CPCopying.h"

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
	CGRect bounds;	// 4 = 0x4
	CPPage *page;	// 20 = 0x14
	NSMutableArray *ownerArray;	// 24 = 0x18
	NSMutableArray *graphicObjects;	// 28 = 0x1c
	NSMutableArray *neighbors;	// 32 = 0x20
	NSMutableArray *intersections;	// 36 = 0x24
	BOOL isHorizontal;	// 40 = 0x28
	BOOL hasForwardVector;	// 41 = 0x29
	BOOL hasBackwardVector;	// 42 = 0x2a
	float overhangMin;	// 44 = 0x2c
	float overhangMax;	// 48 = 0x30
}
@property(assign) CGRect bounds;	// G=0x302586c9; S=0x302586ed; converted property
@property(readonly, retain) NSMutableArray *graphicObjects;	// G=0x30258e41; converted property
@property(assign) BOOL hasBackwardVector;	// G=0x302590d5; S=0x302590c5; converted property
@property(assign) BOOL hasForwardVector;	// G=0x302590b5; S=0x302590a5; converted property
@property(readonly, assign) BOOL isHorizontal;	// G=0x30259219; converted property
@property(readonly, retain) NSMutableArray *ownerArray;	// G=0x302586b9; converted property
@property(readonly, retain) CPPage *page;	// G=0x302585e5; converted property
+ (void)addIntersectionBetweenBorder:(id)border andBorder:(id)border2 atRect:(CGRect)rect;	// 0x30258771
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)borders;	// 0x30258bb9
+ (CGRect)extendRect:(CGRect)rect;	// 0x30258c59
+ (void)outerVertices:(CGPoint *)vertices fromBorders:(id)borders swollenBy:(float)by;	// 0x302589e9
+ (void)removeIntersectionBetweenBorder:(id)border andBorder:(id)border2;	// 0x30258911
- (id)init;	// 0x30258279
- (id)initSuper;	// 0x302583a1
- (id)initWithGraphicObject:(id)graphicObject;	// 0x30258329
- (void)addGraphicObject:(id)object;	// 0x30258d21
- (void)addNeighbor:(id)neighbor;	// 0x30258e79
- (void)addToArray:(id)array;	// 0x302585f5
- (void)addToArray:(id)array atIndex:(unsigned)index;	// 0x30258621
// converted property getter: - (CGRect)bounds;	// 0x302586c9
- (void)combine:(id)combine;	// 0x30259e69
- (int)compareXBounds:(id)bounds;	// 0x3025a28d
- (int)compareYBounds:(id)bounds;	// 0x3025a2f5
- (BOOL)continues:(id)continues;	// 0x30259dc1
- (id)copyWithZone:(NSZone *)zone;	// 0x30258445
- (id)copyWithoutIntersections;	// 0x30258529
- (BOOL)crosses:(id)crosses;	// 0x30259c09
- (void)dealloc;	// 0x302583cd
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward startingAtIndex:(unsigned)index;	// 0x302596e9
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward throughIntersectionIndex:(unsigned)index returningTo:(id)to4 atRect:(CGRect *)rect;	// 0x3025979d
- (id)graphicObjectAtIndex:(unsigned)index;	// 0x30258e21
- (unsigned)graphicObjectCount;	// 0x30258cf9
// converted property getter: - (id)graphicObjects;	// 0x30258e41
// converted property getter: - (BOOL)hasBackwardVector;	// 0x302590d5
- (BOOL)hasClockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x30259411
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x302594b5
// converted property getter: - (BOOL)hasForwardVector;	// 0x302590b5
- (BOOL)hasNeighborShape:(id)shape;	// 0x30258f7d
- (BOOL)hasNeighborShape:(id)shape atSide:(int)side;	// 0x30259001
- (BOOL)hasVectorGoingForward:(BOOL)forward startingAtIndex:(unsigned *)index;	// 0x3025961d
- (unsigned)indexOfIntersectionWith:(id)with;	// 0x30259325
- (void)instantiateVectors;	// 0x30259559
- (unsigned)intersectionCount;	// 0x30259241
- (BOOL)intersectsWith:(id)with atRect:(CGRect *)rect;	// 0x30259269
// converted property getter: - (BOOL)isHorizontal;	// 0x30259219
- (BOOL)isVertical;	// 0x30259229
- (id)neighborAtIndex:(unsigned)index;	// 0x30258f51
- (unsigned)neighborCount;	// 0x30258e51
// converted property getter: - (id)ownerArray;	// 0x302586b9
// converted property getter: - (id)page;	// 0x302585e5
- (void)removeFromArray;	// 0x3025864d
- (void)removeFromArrayAtIndex:(unsigned)index;	// 0x30258675
- (void)removeGraphicObjectAtIndex:(unsigned)index;	// 0x30258e01
- (void)removeLooseThreadsStartingFrom:(id)from;	// 0x3025a15d
- (void)removeNeighborAtIndex:(unsigned)index;	// 0x30258f2d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x302586ed
// converted property setter: - (void)setHasBackwardVector:(BOOL)vector;	// 0x302590c5
// converted property setter: - (void)setHasForwardVector:(BOOL)vector;	// 0x302590a5
- (void)setSide:(int)side ofPage:(id)page;	// 0x302590e5
- (void)trimToLastIntersections;	// 0x30259fbd
- (BOOL)windsClockwiseOnto:(id)onto;	// 0x3025939d
- (long)zOrder;	// 0x30258709
@end
