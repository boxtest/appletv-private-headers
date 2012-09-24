/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


@interface CHDCategoryAxis : CHDAxis {
	bool mAutomatic;	// 128 = 0x80
	bool mNoMultipleLevelLabel;	// 129 = 0x81
	int mLabelAlignment;	// 132 = 0x84
	int mLabelFrequency;	// 136 = 0x88
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x3504bc0d; S=0x350014e5; converted property
@property(assign) int labelAlignment;	// G=0x3504bc45; S=0x35001581; converted property
@property(assign) int labelFrequency;	// G=0x3504bc55; S=0x34fcb109; converted property
- (id)initWithResources:(id)resources;	// 0x34fcae29
- (void)adjustAxisPositionForHorizontalChart;	// 0x3502d0f9
// converted property getter: - (bool)isAutomatic;	// 0x3504bc0d
- (bool)isNoMultipleLabellevel;	// 0x3504bc21
// converted property getter: - (int)labelAlignment;	// 0x3504bc45
// converted property getter: - (int)labelFrequency;	// 0x3504bc55
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x350014e5
// converted property setter: - (void)setLabelAlignment:(int)alignment;	// 0x35001581
// converted property setter: - (void)setLabelFrequency:(int)frequency;	// 0x34fcb109
- (void)setNoMultipleLevelLabel:(bool)label;	// 0x3504bc35
@end
