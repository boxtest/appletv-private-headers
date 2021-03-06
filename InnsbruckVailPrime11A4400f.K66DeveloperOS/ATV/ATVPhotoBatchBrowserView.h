/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRGridView, BRPhotoBrowserHeaderControl, ATVCarouselView, ATVCursorTracker;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *_header;	// 84 = 0x54
	BRControl *_photoContainer;	// 88 = 0x58
	id _onContainerLayout;	// 92 = 0x5c
	ATVCursorTracker *_cursorTracker;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) ATVCarouselView *carousel;	// G=0xc47a1; 
@property(retain, nonatomic) ATVCursorTracker *cursorTracker;	// G=0xc470d; S=0xc471d; @synthesize=_cursorTracker
@property(readonly, assign, nonatomic) BRGridView *grid;	// G=0xc4a85; 
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0xc46a1; S=0xc46b1; @synthesize=_header
@property(copy, nonatomic) id onContainerLayout;	// G=0xc46e9; S=0xc46fd; @synthesize=_onContainerLayout
@property(retain, nonatomic) BRControl *photoContainer;	// G=0xc46d9; S=0xc4359; @synthesize=_photoContainer
- (id)init;	// 0xc41cd
- (void).cxx_destruct;	// 0xc4745
- (id)accessibilityLabel;	// 0xc4659
// declared property getter: - (id)carousel;	// 0xc47a1
- (void)configureCarouselAsPhotoContainer;	// 0xc4825
- (void)configureGridAsPhotoContainer;	// 0xc4b8d
// declared property getter: - (id)cursorTracker;	// 0xc470d
- (void)focusGridControlAtIndex:(int)index;	// 0xc4cc9
// declared property getter: - (id)grid;	// 0xc4a85
// declared property getter: - (id)header;	// 0xc46a1
- (void)layoutSubcontrols;	// 0xc441d
// declared property getter: - (id)onContainerLayout;	// 0xc46e9
// declared property getter: - (id)photoContainer;	// 0xc46d9
// declared property setter: - (void)setCursorTracker:(id)tracker;	// 0xc471d
// declared property setter: - (void)setHeader:(id)header;	// 0xc46b1
// declared property setter: - (void)setOnContainerLayout:(id)layout;	// 0xc46fd
// declared property setter: - (void)setPhotoContainer:(id)container;	// 0xc4359
@end

