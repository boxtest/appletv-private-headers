/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIOpenInTableViewController : UITableViewController {
	UIDocumentInteractionController *_documentInteractionController;	// 212 = 0xd4
}
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x31f0b919
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31f0b9c5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31f0bb85
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31f0b98d
@end
