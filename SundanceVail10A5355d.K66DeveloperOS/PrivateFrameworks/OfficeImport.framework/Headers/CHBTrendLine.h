/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHBTrendLine : NSObject {
}
+ (int)edTrendLineTypeFrom:(int)from order:(int)order;	// 0x31d2ff11
+ (void)readFrom:(XlChartTrendLine *)from toSeries:(id)series state:(id)state;	// 0x31d2fc71
+ (id)readTrendlineGraphicProperties:(const XlChartSeriesFormat *)properties forStyleIndex:(int)styleIndex state:(id)state;	// 0x31d30389
+ (int)xlTrendLineRegressionTypeFrom:(int)from;	// 0x31d6fa7d
@end
