/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISegmentedControl, UIKeyboardCandidateBarSegmentControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortControl : UIView {
	UIKeyboardCandidateBarSegmentControl *_segmentedControl;	// 84 = 0x54
	int _visualStyle;	// 88 = 0x58
}
@property(readonly, assign) UISegmentedControl *segmentedControl;	// G=0x32eb4d7d; @synthesize=_segmentedControl
- (id)initWithFrame:(CGRect)frame visualStyle:(int)style;	// 0x32eb4765
- (void)addSegmentedControlWithFrame:(CGRect)frame;	// 0x32eb4111
- (void)dealloc;	// 0x32eb4849
- (void)layoutSubviews;	// 0x32eb4895
// declared property getter: - (id)segmentedControl;	// 0x32eb4d7d
- (void)selectNextSegment;	// 0x32eb4b99
- (void)selectPreviousSegment;	// 0x32eb4b39
- (void)setSortControlTitles:(id)titles;	// 0x32eb4c15
- (void)updateTitleTextAttributes;	// 0x32eb44ed
@end
