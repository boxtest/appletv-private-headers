/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, CHDChartTypesCollection, CHDAxesCollection;

@interface CHDPlotArea : NSObject {
	CHDChartTypesCollection *mChartTypes;	// 4 = 0x4
	CHDAxesCollection *mAxes;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
	bool mCategoryAxesReversed;	// 16 = 0x10
	bool mCategoryAxesReversedOverridden;	// 17 = 0x11
	bool mContainsVolumeStockType;	// 18 = 0x12
}
@property(assign) bool containsVolumeStockType;	// G=0x3504dbad; S=0x3504dbc1; converted property
@property(retain) id graphicProperties;	// G=0x34fd6ac9; S=0x34fc9281; converted property
- (id)initWithChart:(id)chart;	// 0x34fc066d
- (id)axes;	// 0x34fc9681
- (id)chartTypes;	// 0x34fcc561
// converted property getter: - (bool)containsVolumeStockType;	// 0x3504dbad
- (void)dealloc;	// 0x34fdd3f5
// converted property getter: - (id)graphicProperties;	// 0x34fd6ac9
- (bool)hasSecondaryAxis;	// 0x3504d985
- (bool)hasSecondaryYAxisDeleted;	// 0x3504d9fd
- (bool)isCategoryAxesReversed:(bool)reversed;	// 0x34fd27cd
- (void)markSecondaryAxes;	// 0x3504daa5
// converted property setter: - (void)setContainsVolumeStockType:(bool)type;	// 0x3504dbc1
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x34fc9281
@end

