/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChart;

__attribute__((visibility("hidden")))
@interface GQDChartLegend : GQDGraphic {
@private
	GQDChart *mChart;	// 40 = 0x28
	BOOL mIsChartRetained;	// 44 = 0x2c
}
+ (const StateSpec *)stateForReading;	// 0x35971415
- (id)chart;	// 0x35971421
- (void)dealloc;	// 0x35971451
- (id)graphicStyle;	// 0x35971431
@end

