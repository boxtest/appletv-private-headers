/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling> {
}
- (id)autoAxisStroke;	// 0x349ebb89
- (id)autoFill;	// 0x3496b4e5
- (id)autoSeriesBorderStroke;	// 0x34976fb9
- (id)autoSeriesFill:(int)fill;	// 0x34976f7d
- (id)autoStroke;	// 0x3496b5d5
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;	// 0x349acc49
- (id)fillWithColorIndex:(unsigned)colorIndex;	// 0x3496b4f9
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x349721d1
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x3496b48d
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x34973309
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;	// 0x349d306d
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;	// 0x34976fdd
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;	// 0x34976ef5
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;	// 0x349ad3fd
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x34973fb1
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x349723f1
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;	// 0x349aca19
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x34972369
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x34970189
- (void)resolveWallGraphicProperties:(id)properties;	// 0x34972559
- (void)resolvedGraphicProperties:(id)properties autoFill:(id)fill autoStroke:(id)stroke autoShadow:(BOOL)shadow nullFill:(id)fill5 nullStroke:(id)stroke6 nullShadow:(BOOL)shadow7;	// 0x3496b66d
- (id)strokeWithColorIndex:(int)colorIndex;	// 0x3496b5e9
@end

