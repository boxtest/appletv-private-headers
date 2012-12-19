/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 184 = 0xb8
	ATVFavorite *_favorite;	// 188 = 0xbc
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x1276a1; S=0x1276b1; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x127681; S=0x127691; @synthesize=_merchant
- (void)_toggle;	// 0x12771d
- (void)_update;	// 0x1276c1
- (BOOL)brEventAction:(id)action;	// 0x127621
- (void)controlWasActivated;	// 0x1275e1
- (void)dealloc;	// 0x12757d
// declared property getter: - (id)favorite;	// 0x1276a1
// declared property getter: - (id)merchant;	// 0x127681
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x1276b1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x127691
@end
