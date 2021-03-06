/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl, BRScrollControl, BRListView;

__attribute__((visibility("hidden")))
@interface BRMenuView : BRControl {
	float _verticalSpacer;	// 84 = 0x54
	BRImageControl *_titleImage;	// 88 = 0x58
	float _titleImageVerticalOffset;	// 92 = 0x5c
	BRTextControl *_title;	// 96 = 0x60
	BRTextControl *_menuDescription;	// 100 = 0x64
	BRListView *_list;	// 104 = 0x68
	BRScrollControl *_scroller;	// 108 = 0x6c
	int _listAlignment;	// 112 = 0x70
	XXStruct_qlg9jA _listWidth;	// 116 = 0x74
	XXStruct_qlg9jA _listLeadingGap;	// 120 = 0x78
	XXStruct_qlg9jA _listTrailingGap;	// 124 = 0x7c
}
@property(readonly, retain) BRListView *list;	// G=0x331b05; converted property
@property(readonly, assign, nonatomic) int listAlignment;	// G=0x33234d; @synthesize=_listAlignment
@property(assign) CGRect listFrame;	// G=0x331b45; S=0x331b15; converted property
@property(assign, nonatomic) XXStruct_qlg9jA listLeadingGap;	// G=0x332389; S=0x3323a5; @synthesize=_listLeadingGap
@property(assign, nonatomic) XXStruct_qlg9jA listTrailingGap;	// G=0x3323b5; S=0x3323d1; @synthesize=_listTrailingGap
@property(assign, nonatomic) XXStruct_qlg9jA listWidth;	// G=0x33235d; S=0x332379; @synthesize=_listWidth
@property(retain) BRTextControl *menuDescription;	// G=0x331acd; S=0x331ab9; converted property
@property(readonly, retain) BRScrollControl *scroller;	// G=0x332339; converted property
@property(retain) BRTextControl *title;	// G=0x331935; S=0x331921; converted property
+ (id)menuViewWithListAlignment:(int)listAlignment;	// 0x331421
- (id)init;	// 0x33145d
- (id)initWithListAlignment:(int)listAlignment;	// 0x331471
- (id)accessibilityLabel;	// 0x332319
- (id)accessibilitySecondaryLabel;	// 0x332329
- (void)dealloc;	// 0x3316e1
- (BOOL)isRandomNavigationCandidate;	// 0x332349
- (void)layoutSubcontrols;	// 0x331b79
// converted property getter: - (id)list;	// 0x331b05
// declared property getter: - (int)listAlignment;	// 0x33234d
// converted property getter: - (CGRect)listFrame;	// 0x331b45
// declared property getter: - (XXStruct_qlg9jA)listLeadingGap;	// 0x332389
// declared property getter: - (XXStruct_qlg9jA)listTrailingGap;	// 0x3323b5
// declared property getter: - (XXStruct_qlg9jA)listWidth;	// 0x33235d
// converted property getter: - (id)menuDescription;	// 0x331acd
// converted property getter: - (id)scroller;	// 0x332339
// converted property setter: - (void)setListFrame:(CGRect)frame;	// 0x331b15
// declared property setter: - (void)setListLeadingGap:(XXStruct_qlg9jA)gap;	// 0x3323a5
// declared property setter: - (void)setListTrailingGap:(XXStruct_qlg9jA)gap;	// 0x3323d1
// declared property setter: - (void)setListWidth:(XXStruct_qlg9jA)width;	// 0x332379
// converted property setter: - (void)setMenuDescription:(id)description;	// 0x331ab9
- (void)setMenuDescription:(id)description withAttributes:(id)attributes;	// 0x33196d
// converted property setter: - (void)setTitle:(id)title;	// 0x331921
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x331845
- (void)setTitleImage:(id)image withVerticalOffset:(float)verticalOffset;	// 0x331791
- (void)setVerticalSpacer:(float)spacer;	// 0x331781
// converted property getter: - (id)title;	// 0x331935
@end

