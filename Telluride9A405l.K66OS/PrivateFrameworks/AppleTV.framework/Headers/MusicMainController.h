/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"

@class NSArray, NSString, BRControl;

@interface MusicMainController : MusicController {
@private
	BRControl *_allSongsPreview;	// 124 = 0x7c
	BOOL _displayNowPlaying;	// 128 = 0x80
	NSArray *_controllerMenuItems;	// 132 = 0x84
	NSString *_textEntryClient;	// 136 = 0x88
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x35f08525; S=0x35f08535; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x35f08559; S=0x35f08569; @synthesize=_textEntryClient
+ (void)initialize;	// 0x35f075a5
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x35f08631
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x35f0858d
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x35f085c5
- (void)_networkStateChanged:(id)changed;	// 0x35f088e1
- (void)_playerStateChanged:(id)changed;	// 0x35f08899
- (void)_updateNowPlaying;	// 0x35f0871d
- (void)controlWasActivated;	// 0x35f07789
// declared property getter: - (id)controllerMenuItems;	// 0x35f08525
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x35f083b5
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x35f08325
- (void)dealloc;	// 0x35f076e5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35f07afd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35f07cfd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x35f07af1
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x35f07a99
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x35f08311
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x35f082fd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35f07935
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35f07a15
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x35f07a5d
- (long)numberOfSectionsInList:(id)list;	// 0x35f07a11
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f08435
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x35f08535
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x35f08569
// declared property getter: - (id)textEntryClient;	// 0x35f08559
- (void)wasPopped;	// 0x35f078c9
- (void)wasPushed;	// 0x35f077c9
@end

