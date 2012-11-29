/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"

@class NSString, ATVInternetPhotosAccount, BRController, ATVDotMacCollection;

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
+ (id)menuControllerForAccount:(id)account;	// 0x19aae1
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x19ab29
- (id)initWithAccount:(id)account;	// 0x19ab75
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x19ab89
- (void)_authFinished:(id)finished;	// 0x19bac9
- (void)_authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x19c0d9
- (void)_handleCollectionSelection:(id)selection;	// 0x19b1dd
- (void)_handleRemoveSelection:(id)selection;	// 0x19b329
- (void)_providerUpdated:(id)updated;	// 0x19bd0d
- (void)_pushWaitSpinnerController;	// 0x19c185
- (void)_setScreenSaverForCollection:(id)collection;	// 0x19c06d
- (void)_showInvalidUserNamePrompt;	// 0x19b6cd
- (void)_showPasswordPrompt;	// 0x19b901
- (void)_showUserNamePrompt;	// 0x19b499
- (void)_startPlaybackForCollection:(id)collection;	// 0x19be81
- (void)dealloc;	// 0x19afd9
- (long)defaultIndex;	// 0x19b0a5
- (BOOL)isNetworkDependent;	// 0x19b1d9
- (void)textDidChange:(id)text;	// 0x19b0d9
- (void)textDidEndEditing:(id)text;	// 0x19b0dd
@end
