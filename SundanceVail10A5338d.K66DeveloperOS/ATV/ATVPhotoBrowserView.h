/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRScrollControl, NSArray, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl, BRGridView, BRPanelControl, BRCursorControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoBrowserView : BRControl {
	int _style;	// 80 = 0x50
	BRPhotoBrowserHeaderControl *headerView;	// 84 = 0x54
	BRPhotoBrowserBannerButton *slideshowButton;	// 88 = 0x58
	BRPhotoBrowserBannerButton *settingsButton;	// 92 = 0x5c
	NSArray *_customButtons;	// 96 = 0x60
	BRGridView *gridView;	// 100 = 0x64
	BRPanelControl *_bannerPanelControl;	// 104 = 0x68
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 108 = 0x6c
	BRScrollControl *_scrollControl;	// 112 = 0x70
	BRCursorControl *_cursorControl;	// 116 = 0x74
}
@property(retain, nonatomic) BRPanelControl *_bannerPanelControl;	// G=0x31070d; S=0x31071d; @synthesize
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x31072d; S=0x31073d; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x31076d; S=0x31077d; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x31074d; S=0x31075d; @synthesize
@property(retain, nonatomic) NSArray *customButtons;	// G=0x3106dd; S=0x3106ed; @synthesize=_customButtons
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x3106fd; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x3106ad; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *settingsButton;	// G=0x3106cd; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x3106bd; @synthesize
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x31012d
- (id)initWithPhotoBrowserViewStyle:(int)photoBrowserViewStyle;	// 0x310175
// declared property getter: - (id)_bannerPanelControl;	// 0x31070d
// declared property getter: - (id)_corkBoardControl;	// 0x31072d
// declared property getter: - (id)_cursorControl;	// 0x31076d
- (id)_iconWithName:(id)name;	// 0x310f15
// declared property getter: - (id)_scrollControl;	// 0x31074d
- (void)_setupControls;	// 0x31078d
// declared property getter: - (id)customButtons;	// 0x3106dd
- (void)dealloc;	// 0x310289
- (void)focusControlAtIndex:(long)index;	// 0x3105cd
// declared property getter: - (id)gridView;	// 0x3106fd
// declared property getter: - (id)headerView;	// 0x3106ad
- (void)layoutSubcontrols;	// 0x310379
// declared property setter: - (void)setCustomButtons:(id)buttons;	// 0x3106ed
// declared property setter: - (void)set_bannerPanelControl:(id)control;	// 0x31071d
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x31073d
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x31077d
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x31075d
// declared property getter: - (id)settingsButton;	// 0x3106cd
// declared property getter: - (id)slideshowButton;	// 0x3106bd
@end
