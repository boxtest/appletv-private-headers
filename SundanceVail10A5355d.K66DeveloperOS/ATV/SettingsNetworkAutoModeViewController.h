/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@protocol SettingsNetworkAutoModeSelectionDelegate;

__attribute__((visibility("hidden")))
@interface SettingsNetworkAutoModeViewController : BRMenuController <BRMenuListItemProvider> {
	unsigned _forWireless : 1;	// 140 = 0x8c
	unsigned _useAuto : 1;	// 140 = 0x8c
	BOOL _forDNS;	// 141 = 0x8d
	id<SettingsNetworkAutoModeSelectionDelegate> _delegate;	// 144 = 0x90
	BOOL _shouldDisableAuto;	// 148 = 0x94
}
@property(assign, nonatomic) BOOL shouldDisableAuto;	// G=0x3acc29; S=0x3acc39; @synthesize=_shouldDisableAuto
- (id)initForAutomaticConfig:(BOOL)automaticConfig wireless:(BOOL)wireless dns:(BOOL)dns notifying:(id)notifying;	// 0x3ac725
- (void).cxx_destruct;	// 0x3acc49
- (float)heightForRow:(long)row;	// 0x3acc21
- (long)itemCount;	// 0x3acb91
- (id)itemForRow:(long)row;	// 0x3aca59
- (void)itemSelected:(long)selected;	// 0x3ac9a1
- (BOOL)rowSelectable:(long)selectable;	// 0x3acc25
// declared property setter: - (void)setShouldDisableAuto:(BOOL)disableAuto;	// 0x3acc39
// declared property getter: - (BOOL)shouldDisableAuto;	// 0x3acc29
- (id)titleForRow:(long)row;	// 0x3acb95
@end

