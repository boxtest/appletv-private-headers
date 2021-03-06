/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRButtonControl.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesButtonControl : BRButtonControl {
	ATVMerchant *_merchant;	// 132 = 0x84
	ATVFavorite *_favorite;	// 136 = 0x88
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x13a799; S=0x13a7a9; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x13a779; S=0x13a789; @synthesize=_merchant
- (id)init;	// 0x13a5c5
- (void)_toggle;	// 0x13a8c9
- (void)_update;	// 0x13a7b9
- (BOOL)brEventAction:(id)action;	// 0x13a719
- (void)controlWasActivated;	// 0x13a6d9
- (void)dealloc;	// 0x13a675
// declared property getter: - (id)favorite;	// 0x13a799
// declared property getter: - (id)merchant;	// 0x13a779
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x13a7a9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x13a789
@end

