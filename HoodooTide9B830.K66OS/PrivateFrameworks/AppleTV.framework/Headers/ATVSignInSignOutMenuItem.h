/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuItem.h"

@class ATVMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
@private
	ATVMerchant *_merchant;	// 144 = 0x90
	BOOL _signOutExitsApp;	// 148 = 0x94
	NSString *_confirmationTitle;	// 152 = 0x98
	NSString *_confirmationDescription;	// 156 = 0x9c
	NSString *_signInPageURL;	// 160 = 0xa0
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x3295ac61; S=0x3295ac71; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x3295ac2d; S=0x3295ac3d; @synthesize=_confirmationTitle
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3295abd9; S=0x3295abe9; @synthesize=_merchant
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x3295ac95; S=0x3295aca5; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x3295ac0d; S=0x3295ac1d; @synthesize=_signOutExitsApp
- (void)_update;	// 0x3295a6c9
- (BOOL)brEventAction:(id)action;	// 0x3295a7f5
// declared property getter: - (id)confirmationDescription;	// 0x3295ac61
// declared property getter: - (id)confirmationTitle;	// 0x3295ac2d
- (void)controlWasActivated;	// 0x3295a7b5
- (void)dealloc;	// 0x3295a641
// declared property getter: - (id)merchant;	// 0x3295abd9
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x3295ac71
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x3295ac3d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3295abe9
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x3295aca5
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x3295ac1d
// declared property getter: - (id)signInPageURL;	// 0x3295ac95
// declared property getter: - (BOOL)signOutExitsApp;	// 0x3295ac0d
@end
