/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant;

__attribute__((visibility("hidden")))
@interface SettingsParentalPhotoStreamController : BRViewController {
	BRMerchant *_merchant;	// 104 = 0x68
}
- (id)initWithMerchant:(id)merchant;	// 0x3fcdb1
- (void).cxx_destruct;	// 0x3fd4b9
- (void)dealloc;	// 0x3fcf41
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3fd2bd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3fcf85
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3fd2b1
@end
