/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAccessibilityCaptioningStyleBaseController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsAccessibilityCaptioningStylesController : SettingsAccessibilityCaptioningStyleBaseController {
	NSArray *_styleProfiles;	// 108 = 0x6c
}
- (id)initWithTitle:(id)title andProfileID:(id)anId;	// 0x2ce0e1
- (void).cxx_destruct;	// 0x2ce749
- (void)_loadCaptionStyles;	// 0x2ce591
- (void)_reloadList;	// 0x2ce551
- (id)_styleNameAtIndexPath:(id)indexPath;	// 0x2ce6cd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2ce355
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2ce1ed
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2ce141
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2ce191
- (long)numberOfSectionsInList:(id)list;	// 0x2ce13d
@end

