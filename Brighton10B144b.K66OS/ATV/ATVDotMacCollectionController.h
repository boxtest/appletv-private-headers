/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRMediaMenuController.h"

@class ATVDotMacCollection, NSString, ATVInternetPhotosAccount, BRController;

__attribute__((visibility("hidden")))
@interface ATVDotMacCollectionController : BRMediaMenuController <BRTextFieldDelegate> {
	ATVInternetPhotosAccount *_account;	// 176 = 0xb0
	ATVDotMacCollection *_collectionToAuth;	// 180 = 0xb4
	ATVDotMacCollection *_videoCollectionToLoad;	// 184 = 0xb8
	int _state;	// 188 = 0xbc
	NSString *_userName;	// 192 = 0xc0
	BOOL _isScreenSaverMenu;	// 196 = 0xc4
	BRController *_spinnerController;	// 200 = 0xc8
}
+ (id)menuControllerForAccount:(id)account;	// 0x1a58b5
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x1a58fd
- (id)initWithAccount:(id)account;	// 0x1a5949
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x1a595d
- (void)_authFinished:(id)finished;	// 0x1a68a9
- (void)_authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x1a6eb9
- (void)_handleCollectionSelection:(id)selection;	// 0x1a5fb1
- (void)_handleRemoveSelection:(id)selection;	// 0x1a60fd
- (void)_providerUpdated:(id)updated;	// 0x1a6aed
- (void)_pushWaitSpinnerController;	// 0x1a6f65
- (void)_setScreenSaverForCollection:(id)collection;	// 0x1a6e4d
- (void)_showInvalidUserNamePrompt;	// 0x1a64ad
- (void)_showPasswordPrompt;	// 0x1a66e1
- (void)_showUserNamePrompt;	// 0x1a6279
- (void)_startPlaybackForCollection:(id)collection;	// 0x1a6c61
- (void)dealloc;	// 0x1a5dad
- (long)defaultIndex;	// 0x1a5e79
- (BOOL)isNetworkDependent;	// 0x1a5fad
- (void)textDidChange:(id)text;	// 0x1a5ead
- (void)textDidEndEditing:(id)text;	// 0x1a5eb1
@end

