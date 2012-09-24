/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"


@interface EMDrawableMapper : CMDrawableMapper {
	double *mRowGrid;	// 80 = 0x50
	double *mColumnGrid;	// 84 = 0x54
}
+ (BOOL)isAnchorRelative:(id)relative;	// 0x3503f09d
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x34fd6181
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x34f12bc9
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x3503efe5
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x34f13149
- (CGRect)getImageRect;	// 0x34f12cf9
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x34f12e39
- (void)mapAt:(id)at withState:(id)state;	// 0x34f17fb9
- (void)mapBounds;	// 0x34f182ad
- (void)mapChartAt:(id)at withState:(id)state;	// 0x34fd623d
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x3503f11d
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x34f20925
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x34f18339
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x34f1ffa9
- (void)setBoundingBox;	// 0x3503f039
- (id)workbookMapper;	// 0x3503f08d
- (id)worksheetMapper;	// 0x34f12c51
@end
