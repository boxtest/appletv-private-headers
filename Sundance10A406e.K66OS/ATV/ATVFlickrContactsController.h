/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsController : BRMediaMenuController {
	ATVInternetPhotosAccount *_account;	// 176 = 0xb0
	BOOL _isScreenSaverMenu;	// 180 = 0xb4
}
+ (id)menuControllerForAccount:(id)account;	// 0x1a5b35
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x1a5b7d
- (id)initWithAccount:(id)account;	// 0x1a5bc9
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x1a5bdd
- (void)_handleAccountSelection:(id)selection;	// 0x1a5fd5
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x1a5f35
- (void)_providerUpdated:(id)updated;	// 0x1a617d
- (void)dealloc;	// 0x1a5eb5
- (BOOL)isNetworkDependent;	// 0x1a5f31
@end
