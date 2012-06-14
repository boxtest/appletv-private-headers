/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDividerControl, BRCyclerControl, NSString, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreview : BRControl {
@private
	BRDividerControl *_topDivider;	// 48 = 0x30
	BRDividerControl *_bottomDivider;	// 52 = 0x34
	BRCyclerControl *_cycler;	// 56 = 0x38
	NSString *_text;	// 60 = 0x3c
	NSString *_rightJustifiedText;	// 64 = 0x40
	NSString *_topTableLabel;	// 68 = 0x44
	NSString *_bottomTableLabel;	// 72 = 0x48
	BRCyclerControl *_inningsCycler;	// 76 = 0x4c
	BRTableView *_summaryTable;	// 80 = 0x50
}
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x3660792d; S=0x3660793d; @synthesize=_bottomTableLabel
@property(readonly, assign, nonatomic) BRCyclerControl *cycler;	// G=0x36607881; @synthesize=_cycler
@property(readonly, assign, nonatomic) BRCyclerControl *inningsCycler;	// G=0x36607961; @synthesize=_inningsCycler
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x366078c5; S=0x366078d5; @synthesize=_rightJustifiedText
@property(readonly, assign, nonatomic) BRTableView *summaryTable;	// G=0x36607971; @synthesize=_summaryTable
@property(copy, nonatomic) NSString *text;	// G=0x36607891; S=0x366078a1; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x366078f9; S=0x36607909; @synthesize=_topTableLabel
- (id)init;	// 0x36606e51
- (id)accessibilityLabel;	// 0x366077ad
// declared property getter: - (id)bottomTableLabel;	// 0x3660792d
- (void)controlWasActivated;	// 0x36607165
// declared property getter: - (id)cycler;	// 0x36607881
- (void)dealloc;	// 0x36607079
- (void)drawInContext:(CGContextRef)context;	// 0x366071c5
// declared property getter: - (id)inningsCycler;	// 0x36607961
- (void)layoutSubcontrols;	// 0x366076a5
// declared property getter: - (id)rightJustifiedText;	// 0x366078c5
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x3660793d
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x366078d5
// declared property setter: - (void)setText:(id)text;	// 0x366078a1
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x36607909
// declared property getter: - (id)summaryTable;	// 0x36607971
// declared property getter: - (id)text;	// 0x36607891
// declared property getter: - (id)topTableLabel;	// 0x366078f9
@end
