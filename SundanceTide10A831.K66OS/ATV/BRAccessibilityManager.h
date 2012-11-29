/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class BRContextMenuControl;

__attribute__((visibility("hidden")))
@interface BRAccessibilityManager : BRSingleton {
	BRContextMenuControl *_utilityMenu;	// 4 = 0x4
	BOOL _optionMenuEnabled;	// 8 = 0x8
	BOOL _ignoreNextEvent;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL ignoreNextEvent;	// G=0x3dbb9d; S=0x3dbbad; @synthesize=_ignoreNextEvent
@property(assign, nonatomic) BOOL optionMenuEnabled;	// G=0x3dbb8d; S=0x3db2b5; @synthesize=_optionMenuEnabled
+ (void)setSingleton:(id)singleton;	// 0x3db1e9
+ (id)singleton;	// 0x3db1d9
- (id)init;	// 0x3db20d
- (void).cxx_destruct;	// 0x3dbbbd
- (void)_captionsSelected:(id)selected;	// 0x3db381
- (void)_dismissContextMenu:(id)menu;	// 0x3db345
- (void)_returnHome:(id)home;	// 0x3db491
- (void)_showAccessibilityMenu;	// 0x3db5d1
- (void)_voiceOverSelected:(id)selected;	// 0x3db3f5
- (BOOL)contextMenuIsVisible;	// 0x3db319
- (BOOL)handleEventAction:(id)action;	// 0x3dba81
// declared property getter: - (BOOL)ignoreNextEvent;	// 0x3dbb9d
// declared property getter: - (BOOL)optionMenuEnabled;	// 0x3dbb8d
// declared property setter: - (void)setIgnoreNextEvent:(BOOL)event;	// 0x3dbbad
// declared property setter: - (void)setOptionMenuEnabled:(BOOL)enabled;	// 0x3db2b5
@end
