/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMenuItem;

__attribute__((visibility("hidden")))
@interface BRModalMenuItem : BRControl {
	BRMenuItem *_menuItem;	// 84 = 0x54
	BRControl *_modeSwitch;	// 88 = 0x58
	id _onModeSwitch;	// 92 = 0x5c
	XXStruct_40SSZC _modeSwitchPreferredSize;	// 96 = 0x60
	int _mode;	// 104 = 0x68
}
@property(retain, nonatomic) BRMenuItem *menuItem;	// G=0x40a101; S=0x409d01; @synthesize=_menuItem
@property(assign, nonatomic) int mode;	// G=0x40a171; S=0x40a181; @synthesize=_mode
@property(retain, nonatomic) BRControl *modeSwitch;	// G=0x40a111; S=0x409d61; @synthesize=_modeSwitch
@property(assign, nonatomic) XXStruct_40SSZC modeSwitchPreferredSize;	// G=0x40a145; S=0x40a15d; @synthesize=_modeSwitchPreferredSize
@property(copy, nonatomic) id onModeSwitch;	// G=0x40a121; S=0x40a135; @synthesize=_onModeSwitch
- (id)init;	// 0x409cb1
- (void).cxx_destruct;	// 0x40a191
- (BOOL)brEventAction:(id)action;	// 0x409f95
- (CGRect)focusCursorFrame;	// 0x40a025
- (void)layoutSubcontrols;	// 0x409dd5
// declared property getter: - (id)menuItem;	// 0x40a101
// declared property getter: - (int)mode;	// 0x40a171
// declared property getter: - (id)modeSwitch;	// 0x40a111
// declared property getter: - (XXStruct_40SSZC)modeSwitchPreferredSize;	// 0x40a145
// declared property getter: - (id)onModeSwitch;	// 0x40a121
// declared property setter: - (void)setMenuItem:(id)item;	// 0x409d01
// declared property setter: - (void)setMode:(int)mode;	// 0x40a181
// declared property setter: - (void)setModeSwitch:(id)aSwitch;	// 0x409d61
// declared property setter: - (void)setModeSwitchPreferredSize:(XXStruct_40SSZC)size;	// 0x40a15d
// declared property setter: - (void)setOnModeSwitch:(id)aSwitch;	// 0x40a135
@end
