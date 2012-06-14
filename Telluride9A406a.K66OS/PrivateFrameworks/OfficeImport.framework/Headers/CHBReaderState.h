/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CHBState.h"

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState {
@private
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x329861c5; S=0x32985c05; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x329895a5; S=0x329891e1; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x32989915; S=0x329891d1; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x3297ed29
// converted property getter: - (int)axisGroup;	// 0x329861c5
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x3298a07d
- (id)ebReaderSheetState;	// 0x3297f51d
- (void)readAndCacheXlChartDataSeries;	// 0x3298168d
- (id)resources;	// 0x329841fd
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x32985c05
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x329891e1
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x329891d1
- (id)workbook;	// 0x3298896d
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x3298a03d
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x329895a5
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x32989915
- (int)xlPlotCount;	// 0x32988d45
- (XlChartBinaryReader *)xlReader;	// 0x3297f50d
@end
