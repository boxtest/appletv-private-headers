/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "QuickLook-Structs.h"
#import </libobjc.A.h>
#import "UINavigationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, UITableViewController, UINavigationController, UIDocumentInteractionController, QLPreviewController;

@interface QLArchiveViewer : NSObject <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {
	QLPreviewController *_previewController;	// 4 = 0x4
	UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
	UINavigationController *_navigationController;	// 12 = 0xc
	UIPopoverController *_popoverController;	// 16 = 0x10
	UITableViewController *_tableViewController;	// 20 = 0x14
	BOOL _visible;	// 24 = 0x18
}
@property(readonly, assign, getter=isVisible) BOOL visible;	// G=0x2f3254d1; 
- (id)initWithPreviewController:(id)previewController;	// 0x2f324dad
- (void)_cancelUpdateThumbnails;	// 0x2f325815
- (CGSize)_imageSize;	// 0x2f325951
- (void)_updateIcon:(id)icon forCell:(id)cell;	// 0x2f325999
- (void)_updateThumbnails;	// 0x2f3255b1
- (void)dealloc;	// 0x2f3250ed
- (void)dismiss:(id)dismiss;	// 0x2f3254bd
- (void)dismissAnimated:(BOOL)animated;	// 0x2f3253b5
// declared property getter: - (BOOL)isVisible;	// 0x2f3254d1
- (int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)presentation;	// 0x2f325f5d
- (unsigned)navigationControllerSupportedInterfaceOrientations:(id)orientations;	// 0x2f325f59
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x2f325f45
- (void)presentFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x2f325179
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x2f325f1d
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x2f325f2d
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x2f325f0d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2f325ad5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x2f325e6d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2f325a9d
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;	// 0x2f325e09
- (void)update;	// 0x2f3254e1
@end

