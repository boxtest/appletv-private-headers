/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "ATVCatalogApplianceController.h"

@class BRTabControl, BRControl, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabbedPageController : ATVCatalogApplianceController <BRTabControlDelegate> {
	BRControl *_contentControl;	// 140 = 0x8c
	BRTabControl *_tabControl;	// 144 = 0x90
	NSTimer *_activeTabSelectionChangedTimer;	// 148 = 0x94
	BOOL _showingWaitContent;	// 152 = 0x98
	BOOL _initialTabContentLoaded;	// 153 = 0x99
	BOOL _transitionInhibited;	// 154 = 0x9a
}
- (id)initWithContentControl:(id)contentControl tabControl:(id)control;	// 0x1f1c41
- (void)_delayedTabSelectionTimerFired:(id)fired;	// 0x1f1ed9
- (id)_preferredTabSegmentInTab;	// 0x1f22b5
- (id)_scrollPlane;	// 0x1f21e5
- (id)_tabDictionary;	// 0x1f221d
- (id)_tabName;	// 0x1f227d
- (void)dealloc;	// 0x1f1e75
- (id)errorContent;	// 0x1f218d
- (BOOL)shouldAllowTransitionOnSwap;	// 0x1f21cd
- (BOOL)shouldShowWaitContent;	// 0x1f2175
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x1f2079
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x1f2129
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x1f212d
- (id)waitContent;	// 0x1f2131
- (float)waitContentDelay;	// 0x1f2171
- (void)willEnterCompleteState;	// 0x1f21b9
@end

