/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class EDCollection, CHDErrorBar, CHDFormula, EDKeyedCollection, CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDSeries : NSObject <EDKeyedObject> {
@private
	CHDChart *mChart;	// 4 = 0x4
	CHDChartType *mChartType;	// 8 = 0x8
	int mOrder;	// 12 = 0xc
	int mStyleIndex;	// 16 = 0x10
	CHDFormula *mName;	// 20 = 0x14
	CHDDataValue *mLastCachedName;	// 24 = 0x18
	CHDData *mValueData;	// 28 = 0x1c
	CHDData *mCategoryData;	// 32 = 0x20
	EDKeyedCollection *mDataValuePropertiesCollection;	// 36 = 0x24
	EDCollection *mTrendlinesCollection;	// 40 = 0x28
	CHDErrorBar *mErrorBarX;	// 44 = 0x2c
	CHDErrorBar *mErrorBarY;	// 48 = 0x30
	CHDDataLabel *mDefaultDataLabel;	// 52 = 0x34
	OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
	bool mDateTimeFormattingFlag;	// 60 = 0x3c
	bool mHiddenFlag;	// 61 = 0x3d
}
@property(retain) id categoryData;	// G=0x3298eb65; S=0x3298b281; converted property
@property(retain) id chartType;	// G=0x32a08a65; S=0x3298bce5; converted property
@property(retain) id dataValuePropertiesCollection;	// G=0x3298b3b9; S=0x32a1bcb1; converted property
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// G=0x32992761; S=0x32992751; converted property
@property(retain) id defaultDataLabel;	// G=0x3298b6b9; S=0x32a08321; converted property
@property(retain) id errorBarXAxis;	// G=0x32a08c59; S=0x32a08c69; converted property
@property(retain) id errorBarYAxis;	// G=0x3298c309; S=0x3298c751; converted property
@property(retain) id graphicProperties;	// G=0x3298b8fd; S=0x3298b671; converted property
@property(retain) id lastCachedName;	// G=0x3298be85; S=0x3298ef75; converted property
@property(retain) id name;	// G=0x3298be75; S=0x3298aa6d; converted property
@property(assign) int order;	// G=0x32a83305; S=0x3298a499; converted property
@property(assign) int styleIndex;	// G=0x3298b8ed; S=0x3298b501; converted property
@property(retain) id trendlinesCollection;	// G=0x32a08c01; S=0x32a08c11; converted property
@property(retain) id valueData;	// G=0x3298bf99; S=0x3298b10d; converted property
+ (id)seriesWithChart:(id)chart;	// 0x32a0017d
- (id)initWithChart:(id)chart;	// 0x32989f59
// converted property getter: - (id)categoryData;	// 0x3298eb65
- (id)chart;	// 0x3298c319
// converted property getter: - (id)chartType;	// 0x32a08a65
- (void)clearBackPointers;	// 0x32a09dc9
// converted property getter: - (id)dataValuePropertiesCollection;	// 0x3298b3b9
- (void)dealloc;	// 0x32997a81
// converted property getter: - (id)defaultDataLabel;	// 0x3298b6b9
- (id)defaultSeriesNameForIndex:(int)index;	// 0x3298fff1
// converted property getter: - (id)errorBarXAxis;	// 0x32a08c59
// converted property getter: - (id)errorBarYAxis;	// 0x3298c309
// converted property getter: - (id)graphicProperties;	// 0x3298b8fd
// converted property getter: - (bool)isDateTimeFormattingFlag;	// 0x32992761
- (bool)isEmpty;	// 0x3298d099
- (bool)isHidden;	// 0x3298bcd5
- (unsigned)key;	// 0x3298be65
// converted property getter: - (id)lastCachedName;	// 0x3298be85
// converted property getter: - (id)name;	// 0x3298be75
// converted property getter: - (int)order;	// 0x32a83305
// converted property setter: - (void)setCategoryData:(id)data;	// 0x3298b281
// converted property setter: - (void)setChartType:(id)type;	// 0x3298bce5
// converted property setter: - (void)setDataValuePropertiesCollection:(id)collection;	// 0x32a1bcb1
// converted property setter: - (void)setDateTimeFormattingFlag:(bool)flag;	// 0x32992751
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x32a08321
- (void)setErrorBar:(id)bar;	// 0x3298c609
// converted property setter: - (void)setErrorBarXAxis:(id)axis;	// 0x32a08c69
// converted property setter: - (void)setErrorBarYAxis:(id)axis;	// 0x3298c751
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x3298b671
- (void)setHiddenFlag:(bool)flag;	// 0x32a18b4d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x3298ef75
// converted property setter: - (void)setName:(id)name;	// 0x3298aa6d
// converted property setter: - (void)setOrder:(int)order;	// 0x3298a499
// converted property setter: - (void)setStyleIndex:(int)index;	// 0x3298b501
// converted property setter: - (void)setTrendlinesCollection:(id)collection;	// 0x32a08c11
// converted property setter: - (void)setValueData:(id)data;	// 0x3298b10d
- (id)shallowCopy;	// 0x32a08b21
// converted property getter: - (int)styleIndex;	// 0x3298b8ed
// converted property getter: - (id)trendlinesCollection;	// 0x32a08c01
// converted property getter: - (id)valueData;	// 0x3298bf99
@end
