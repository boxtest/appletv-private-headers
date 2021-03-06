/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCyclerControl, NSString, BRTableView, BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreview : BRControl {
	BRHorizontalDividerControl *_topDivider;	// 84 = 0x54
	BRHorizontalDividerControl *_bottomDivider;	// 88 = 0x58
	BRCyclerControl *_cycler;	// 92 = 0x5c
	NSString *_text;	// 96 = 0x60
	NSString *_rightJustifiedText;	// 100 = 0x64
	NSString *_topTableLabel;	// 104 = 0x68
	NSString *_bottomTableLabel;	// 108 = 0x6c
	BRCyclerControl *_inningsCycler;	// 112 = 0x70
	BRTableView *_summaryTable;	// 116 = 0x74
}
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x19f1a1; S=0x19f1b5; @synthesize=_bottomTableLabel
@property(readonly, assign, nonatomic) BRCyclerControl *cycler;	// G=0x19f125; @synthesize=_cycler
@property(readonly, assign, nonatomic) BRCyclerControl *inningsCycler;	// G=0x19f1c5; @synthesize=_inningsCycler
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x19f159; S=0x19f16d; @synthesize=_rightJustifiedText
@property(readonly, assign, nonatomic) BRTableView *summaryTable;	// G=0x19f1d5; @synthesize=_summaryTable
@property(copy, nonatomic) NSString *text;	// G=0x19f135; S=0x19f149; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x19f17d; S=0x19f191; @synthesize=_topTableLabel
- (id)init;	// 0x19e72d
- (id)accessibilityLabel;	// 0x19f04d
// declared property getter: - (id)bottomTableLabel;	// 0x19f1a1
- (void)controlWasActivated;	// 0x19e9fd
// declared property getter: - (id)cycler;	// 0x19f125
- (void)dealloc;	// 0x19e90d
- (void)drawRect:(CGRect)rect;	// 0x19ea61
// declared property getter: - (id)inningsCycler;	// 0x19f1c5
- (void)layoutSubcontrols;	// 0x19ef45
// declared property getter: - (id)rightJustifiedText;	// 0x19f159
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x19f1b5
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x19f16d
// declared property setter: - (void)setText:(id)text;	// 0x19f149
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x19f191
// declared property getter: - (id)summaryTable;	// 0x19f1d5
// declared property getter: - (id)text;	// 0x19f135
// declared property getter: - (id)topTableLabel;	// 0x19f17d
@end

