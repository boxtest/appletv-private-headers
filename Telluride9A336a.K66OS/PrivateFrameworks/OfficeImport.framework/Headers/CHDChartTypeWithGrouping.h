/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


__attribute__((visibility("hidden")))
@interface CHDChartTypeWithGrouping : CHDChartType {
@private
	int mGrouping;	// 24 = 0x18
}
@property(assign) int grouping;	// G=0x34cf7fe1; S=0x34d60629; converted property
- (id)initWithChart:(id)chart;	// 0x34cef999
- (id)chdGroupingString;	// 0x34de2efd
// converted property getter: - (int)grouping;	// 0x34cf7fe1
- (bool)isGroupingStacked;	// 0x34cefbd1
// converted property setter: - (void)setGrouping:(int)grouping;	// 0x34d60629
@end

