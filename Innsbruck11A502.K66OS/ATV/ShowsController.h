/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "VideoController.h"

@class NSArray, NSMutableArray, NSString, NSNumber, ATVDataType;

__attribute__((visibility("hidden")))
@interface ShowsController : VideoController <BRTabControlDelegate> {
	ATVDataType *_mediaType;	// 172 = 0xac
	NSArray *_tvShowsSortedByShowName;	// 176 = 0xb0
	NSMutableArray *_unwatchedItemsByShow;	// 180 = 0xb4
	NSMutableArray *_itemsByShow;	// 184 = 0xb8
	NSNumber *_showID;	// 188 = 0xbc
	NSString *_showName;	// 192 = 0xc0
	BOOL _unwatchedShows;	// 196 = 0xc4
	NSMutableArray *_showItems;	// 200 = 0xc8
	BOOL _playAllItems;	// 204 = 0xcc
}
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned)type playAllItems:(BOOL)items;	// 0x2ba015
+ (id)showsControllerForCollection:(id)collection mediaType:(id)type playAllItems:(BOOL)items dataClient:(id)client dataClientType:(unsigned)type5;	// 0x2ba18d
+ (id)showsControllerForShowWithID:(id)anId name:(id)name unwatched:(BOOL)unwatched mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type6;	// 0x2ba341
- (id)initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned)type;	// 0x2ba4bd
- (id)initWithShowID:(id)showID name:(id)name unwatched:(BOOL)unwatched mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type6;	// 0x2ba3cd
- (id)initWithShowsCollection:(id)showsCollection mediaType:(id)type playAllItems:(BOOL)items dataClient:(id)client dataClientType:(unsigned)type5;	// 0x2ba209
- (void).cxx_destruct;	// 0x2baf19
- (int)_convertIdentifierToTabControlItemKind:(unsigned)tabControlItemKind;	// 0x2bcd7d
- (id)_currentItems;	// 0x2bd85d
- (int)_currentlySelectedTabControlItemKind;	// 0x2bccfd
- (id)_getDictionary:(id)dictionary showID:(id)anId;	// 0x2bd729
- (id)_getUnwatchedItemsByShow:(BOOL)show;	// 0x2bdad1
- (id)_initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned)type;	// 0x2ba0b1
- (int)_lastSelectedTabControlItemKind;	// 0x2bcc65
- (long)_lastUnwatchedMediaItemRowIndex;	// 0x2bc20d
- (void)_mediaItemPropertySet:(id)set;	// 0x2bdf41
- (id)_menuItemForEpisode:(id)episode;	// 0x2bce31
- (id)_menuItemForShow:(id)show;	// 0x2bd225
- (id)_tabItemPreferenceKey;	// 0x2bd479
- (id)_titleKey;	// 0x2bd4f5
- (void)_updateDisplayPlaylists;	// 0x2bcd89
- (void)_updatePreviewForRow:(int)row inData:(id)data;	// 0x2bc315
- (id)currentItems;	// 0x2ba895
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x2bd571
- (BOOL)dataQueryComplete:(id)complete;	// 0x2baa59
- (void)dealloc;	// 0x2ba75d
- (id)defaultIndexPathToSelect;	// 0x2bab05
- (id)errorForNoContent;	// 0x2bab69
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2bb351
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2bba55
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2bb465
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2bb319
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2bb2b9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2bb05d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2bafb5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2bb00d
- (id)newDataQuery;	// 0x2ba995
- (id)newDataQueryWithoutSort;	// 0x2bbe19
- (id)newPreDataQuery;	// 0x2ba8a5
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x2bac21
- (long)numberOfSectionsInList:(id)list;	// 0x2bafb1
- (BOOL)preDataQueryComplete:(id)complete;	// 0x2ba965
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x2bad19
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x2baebd
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x2baf15
- (id)typeaheadPropertyName;	// 0x2bd661
- (void)wasPopped;	// 0x2ba7c9
@end

