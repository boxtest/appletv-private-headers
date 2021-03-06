/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class ABUnknownPersonViewController;

@interface ABUnknownPersonViewDelegateForwarder : NSObject <ABNewPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
	ABUnknownPersonViewController *_viewController;	// 4 = 0x4
}
- (id)initWithUnknownPersonViewController:(id)unknownPersonViewController;	// 0x31475b3d
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson;	// 0x31475b7d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x31475b9d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31475bdd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31475bfd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31475bbd
@end

