/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRListView, BRScrollControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRMenuView : BRControl {
	float _verticalSpacer;	// 80 = 0x50
	BRImageControl *_titleImage;	// 84 = 0x54
	float _titleImageVerticalOffset;	// 88 = 0x58
	BRTextControl *_title;	// 92 = 0x5c
	BRTextControl *_description;	// 96 = 0x60
	BRListView *_list;	// 100 = 0x64
	BRScrollControl *_scroller;	// 104 = 0x68
	int _listAlignment;	// 108 = 0x6c
	XXStruct_qlg9jA _listWidth;	// 112 = 0x70
	XXStruct_qlg9jA _listLeadingGap;	// 116 = 0x74
	XXStruct_qlg9jA _listTrailingGap;	// 120 = 0x78
}
@property(retain) BRTextControl *description;	// G=0x2fb1b1; S=0x2fb19d; converted property
@property(readonly, retain) BRListView *list;	// G=0x2fb1e9; converted property
@property(readonly, assign, nonatomic) int listAlignment;	// G=0x2fba1d; @synthesize=_listAlignment
@property(assign) CGRect listFrame;	// G=0x2fb229; S=0x2fb1f9; converted property
@property(assign, nonatomic) XXStruct_qlg9jA listLeadingGap;	// G=0x2fba59; S=0x2fba75; @synthesize=_listLeadingGap
@property(assign, nonatomic) XXStruct_qlg9jA listTrailingGap;	// G=0x2fba85; S=0x2fbaa1; @synthesize=_listTrailingGap
@property(assign, nonatomic) XXStruct_qlg9jA listWidth;	// G=0x2fba2d; S=0x2fba49; @synthesize=_listWidth
@property(retain) BRTextControl *title;	// G=0x2fb019; S=0x2fb005; converted property
+ (id)menuViewWithListAlignment:(int)listAlignment;	// 0x2fab05
- (id)init;	// 0x2fab41
- (id)initWithListAlignment:(int)listAlignment;	// 0x2fab55
- (id)accessibilityLabel;	// 0x2fb9fd
- (id)accessibilitySecondaryLabel;	// 0x2fba0d
- (void)dealloc;	// 0x2fadc5
// converted property getter: - (id)description;	// 0x2fb1b1
- (void)layoutSubcontrols;	// 0x2fb25d
// converted property getter: - (id)list;	// 0x2fb1e9
// declared property getter: - (int)listAlignment;	// 0x2fba1d
// converted property getter: - (CGRect)listFrame;	// 0x2fb229
// declared property getter: - (XXStruct_qlg9jA)listLeadingGap;	// 0x2fba59
// declared property getter: - (XXStruct_qlg9jA)listTrailingGap;	// 0x2fba85
// declared property getter: - (XXStruct_qlg9jA)listWidth;	// 0x2fba2d
// converted property setter: - (void)setDescription:(id)description;	// 0x2fb19d
- (void)setDescription:(id)description withAttributes:(id)attributes;	// 0x2fb051
// converted property setter: - (void)setListFrame:(CGRect)frame;	// 0x2fb1f9
// declared property setter: - (void)setListLeadingGap:(XXStruct_qlg9jA)gap;	// 0x2fba75
// declared property setter: - (void)setListTrailingGap:(XXStruct_qlg9jA)gap;	// 0x2fbaa1
// declared property setter: - (void)setListWidth:(XXStruct_qlg9jA)width;	// 0x2fba49
// converted property setter: - (void)setTitle:(id)title;	// 0x2fb005
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x2faf29
- (void)setTitleImage:(id)image withVerticalOffset:(float)verticalOffset;	// 0x2fae75
- (void)setVerticalSpacer:(float)spacer;	// 0x2fae65
// converted property getter: - (id)title;	// 0x2fb019
@end
