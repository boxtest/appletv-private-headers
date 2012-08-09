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
+ (BOOL)isAnchorRelative:(id)relative;	// 0x31d68fed
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x31d00139
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x31c3cb81
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x31d68f35
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x31c3d101
- (CGRect)getImageRect;	// 0x31c3ccb1
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x31c3cdf1
- (void)mapAt:(id)at withState:(id)state;	// 0x31c41f71
- (void)mapBounds;	// 0x31c42265
- (void)mapChartAt:(id)at withState:(id)state;	// 0x31d001f5
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x31d6906d
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x31c4a8dd
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x31c422f1
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x31c49f61
- (void)setBoundingBox;	// 0x31d68f89
- (id)workbookMapper;	// 0x31d68fdd
- (id)worksheetMapper;	// 0x31c3cc09
@end
