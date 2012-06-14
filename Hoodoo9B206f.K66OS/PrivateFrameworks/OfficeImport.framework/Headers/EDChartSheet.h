/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSheet.h"
#import "OfficeImport-Structs.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet {
@private
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x34546699; S=0x34545fb9; converted property
@property(retain) id mainChart;	// G=0x34546839; S=0x345465ad; converted property
- (void)addDrawable:(id)drawable;	// 0x345482c1
- (bool)areBoundsSet;	// 0x345c0e0d
// converted property getter: - (CGRect)bounds;	// 0x34546699
// converted property getter: - (id)mainChart;	// 0x34546839
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x34545fb9
// converted property setter: - (void)setMainChart:(id)chart;	// 0x345465ad
- (void)teardown;	// 0x344ee831
@end
