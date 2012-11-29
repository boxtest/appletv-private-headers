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
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x34876211
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x348762bd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3487647d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34876285
@end
