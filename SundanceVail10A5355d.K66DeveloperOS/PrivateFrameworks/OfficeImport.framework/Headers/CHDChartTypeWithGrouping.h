/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


@interface CHDChartTypeWithGrouping : CHDChartType {
	int mGrouping;	// 24 = 0x18
}
@property(assign) int grouping;	// G=0x31d00441; S=0x31cf7ac9; converted property
- (id)initWithChart:(id)chart;	// 0x31cf7855
- (id)chdGroupingString;	// 0x31d76505
// converted property getter: - (int)grouping;	// 0x31d00441
- (bool)isGroupingStacked;	// 0x31cfaad9
// converted property setter: - (void)setGrouping:(int)grouping;	// 0x31cf7ac9
@end

