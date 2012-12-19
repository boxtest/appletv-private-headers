/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 184 = 0xb8
	BOOL _signOutExitsApp;	// 188 = 0xbc
	NSString *_confirmationTitle;	// 192 = 0xc0
	NSString *_confirmationDescription;	// 196 = 0xc4
	NSString *_signInPageURL;	// 200 = 0xc8
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x133c29; S=0x133c3d; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x133c05; S=0x133c19; @synthesize=_confirmationTitle
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x133bc5; S=0x133bd5; @synthesize=_merchant
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x133c4d; S=0x133c61; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x133be5; S=0x133bf5; @synthesize=_signOutExitsApp
- (void)_update;	// 0x13369d
- (BOOL)brEventAction:(id)action;	// 0x1337d5
// declared property getter: - (id)confirmationDescription;	// 0x133c29
// declared property getter: - (id)confirmationTitle;	// 0x133c05
- (void)controlWasActivated;	// 0x133795
- (void)dealloc;	// 0x133611
// declared property getter: - (id)merchant;	// 0x133bc5
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x133c3d
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x133c19
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x133bd5
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x133c61
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x133bf5
// declared property getter: - (id)signInPageURL;	// 0x133c4d
// declared property getter: - (BOOL)signOutExitsApp;	// 0x133be5
@end
