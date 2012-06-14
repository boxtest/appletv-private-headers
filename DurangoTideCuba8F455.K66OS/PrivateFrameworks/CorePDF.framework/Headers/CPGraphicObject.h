/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"

@class CPTextLine, NSMutableArray;

@interface CPGraphicObject : CPChunk {
	NSMutableArray *clips;	// 52 = 0x34
	CGRect renderedBounds;	// 56 = 0x38
	int wrapType;	// 72 = 0x48
	float margin;	// 76 = 0x4c
	float baselineOffset;	// 80 = 0x50
	BOOL canContainText;	// 84 = 0x54
	BOOL isInZoneBorder;	// 85 = 0x55
	int zoneGraphicType;	// 88 = 0x58
	CPTextLine *anchoringTextLine;	// 92 = 0x5c
	CPChunk *user;	// 96 = 0x60
}
@property(retain) CPTextLine *anchoringTextLine;	// G=0x30b9ccc5; S=0x30b9ccb5; converted property
@property(assign) float baselineOffset;	// G=0x30b9cc29; S=0x30b9cc19; converted property
@property(assign) BOOL canContainText;	// G=0x30b9cc55; S=0x30b9cc65; converted property
@property(assign) BOOL isInZoneBorder;	// G=0x30b9cc75; S=0x30b9cc85; converted property
@property(assign) float margin;	// G=0x30b9cc09; S=0x30b9cbf9; converted property
@property(readonly, assign) CGRect renderedBounds;	// G=0x30b9cf59; converted property
@property(retain) CPChunk *user;	// G=0x30b9ccd5; S=0x30b9cd61; converted property
@property(assign) int wrapType;	// G=0x30b9cbe9; S=0x30b9cbd5; converted property
@property(assign) int zoneGraphicType;	// G=0x30b9cc95; S=0x30b9cca5; converted property
- (id)init;	// 0x30b9cce5
- (void)addClipPath:(CGPathRef)path winding:(int)winding;	// 0x30b9cdcd
// converted property getter: - (id)anchoringTextLine;	// 0x30b9ccc5
// converted property getter: - (float)baselineOffset;	// 0x30b9cc29
- (BOOL)canBeContainer;	// 0x30b9cfcd
// converted property getter: - (BOOL)canContainText;	// 0x30b9cc55
- (CGPathRef)clipPathAtIndex:(unsigned)index winding:(int *)winding;	// 0x30b9d0a9
- (unsigned)clipPathCount;	// 0x30b9ce6d
- (BOOL)clipped;	// 0x30b9cc3d
- (id)copyWithZone:(NSZone *)zone;	// 0x30b9ce91
- (void)dealloc;	// 0x30b9cf11
// converted property getter: - (BOOL)isInZoneBorder;	// 0x30b9cc75
- (BOOL)isIndivisible;	// 0x30b9cc51
- (BOOL)isNarrow;	// 0x30b9d015
- (BOOL)isVisible;	// 0x30b9cc39
// converted property getter: - (float)margin;	// 0x30b9cc09
// converted property getter: - (CGRect)renderedBounds;	// 0x30b9cf59
// converted property setter: - (void)setAnchoringTextLine:(id)line;	// 0x30b9ccb5
// converted property setter: - (void)setBaselineOffset:(float)offset;	// 0x30b9cc19
// converted property setter: - (void)setCanContainText:(BOOL)text;	// 0x30b9cc65
// converted property setter: - (void)setIsInZoneBorder:(BOOL)zoneBorder;	// 0x30b9cc85
// converted property setter: - (void)setMargin:(float)margin;	// 0x30b9cbf9
// converted property setter: - (void)setUser:(id)user;	// 0x30b9cd61
// converted property setter: - (void)setWrapType:(int)type;	// 0x30b9cbd5
// converted property setter: - (void)setZoneGraphicType:(int)type;	// 0x30b9cca5
- (unsigned short)unicode;	// 0x30b9cbe5
// converted property getter: - (id)user;	// 0x30b9ccd5
// converted property getter: - (int)wrapType;	// 0x30b9cbe9
// converted property getter: - (int)zoneGraphicType;	// 0x30b9cc95
@end
