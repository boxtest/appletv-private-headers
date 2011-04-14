/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDChartTypesCollection, OADGraphicProperties, CHDAxesCollection;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : NSObject {
@private
	CHDChartTypesCollection *mChartTypes;	// 4 = 0x4
	CHDAxesCollection *mAxes;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
	bool mCategoryAxesReversed;	// 16 = 0x10
	bool mCategoryAxesReversedOverridden;	// 17 = 0x11
	bool mContainsVolumeStockType;	// 18 = 0x12
}
@property(assign) bool containsVolumeStockType;	// G=0x31aebe39; S=0x31aebe49; converted property
@property(retain) id graphicProperties;	// G=0x31a1b2b5; S=0x31a0f491; converted property
- (id)initWithChart:(id)chart;	// 0x31a07441
- (id)axes;	// 0x31a0f829
- (id)chartTypes;	// 0x31a123ed
// converted property getter: - (bool)containsVolumeStockType;	// 0x31aebe39
- (void)dealloc;	// 0x31a26c49
// converted property getter: - (id)graphicProperties;	// 0x31a1b2b5
- (bool)hasSecondaryAxis;	// 0x31aebfe1
- (bool)hasSecondaryYAxisDeleted;	// 0x31aebf3d
- (bool)isCategoryAxesReversed;	// 0x31a1736d
- (void)markSecondaryAxes;	// 0x31aebe59
// converted property setter: - (void)setContainsVolumeStockType:(bool)type;	// 0x31aebe49
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31a0f491
@end
