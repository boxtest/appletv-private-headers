/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSEditableListController.h"


@interface PSUsageBundleDetailController : PSEditableListController {
}
+ (id)mediaGroups;	// 0x324a56dd
+ (void)setupSpecifier:(id)specifier forMediaGroups:(id)mediaGroups;	// 0x324a56e1
- (BOOL)canBeShownFromSuspendedState;	// 0x324a58b5
- (void)dealloc;	// 0x324a58f5
- (void)loadView;	// 0x324a579d
- (BOOL)needsToShowToolbarInPrefsAppRoot;	// 0x324a58b1
- (id)size:(id)size;	// 0x324a58b9
- (id)sizeForSpecifier:(id)specifier;	// 0x324a5e49
- (id)specifiers;	// 0x324a5ea9
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x324a5ba9
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x324a5921
- (BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;	// 0x324a5e2d
- (void)updateSizesAfterDeletingSize:(float)size shouldPop:(BOOL)pop;	// 0x324a5a59
@end

