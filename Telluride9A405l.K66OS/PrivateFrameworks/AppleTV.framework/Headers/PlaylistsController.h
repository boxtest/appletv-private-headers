/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRDataQueryController.h"

@class NSMutableArray, NSArray;

@interface PlaylistsController : BRDataQueryController {
@private
	ATVMediaTypeRef _mediaTypeForQuery;	// 148 = 0x94
	ATVMediaCollectionRef _folder;	// 152 = 0x98
	NSArray *_filteredPlaylists;	// 156 = 0x9c
	BOOL _countIntegratedQuery;	// 160 = 0xa0
	NSMutableArray *_tempFilteredPlaylists;	// 164 = 0xa4
	NSMutableArray *_pendingPlaylistQueries;	// 168 = 0xa8
	Class _mediaTypeControllerClass;	// 172 = 0xac
}
+ (id)playlistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type mediaType:(ATVMediaTypeRef)type3 mediaTypeControllerClass:(Class)aClass;	// 0x35f1df75
- (id)initWithMediaType:(ATVMediaTypeRef)mediaType folder:(ATVMediaCollectionRef)folder dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type mediaTypeControllerClass:(Class)aClass;	// 0x35f1dfd1
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x35f20351
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x35f1fc5d
- (ATVMediaFilterRef)_createFilterForCurrentMediaType;	// 0x35f1f1e9
- (void)_fetchPlaylistsItemCount:(id)count;	// 0x35f1f2a9
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x35f1fa59
- (void)_playlistItemsQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f1f505
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x35f1f891
- (ATVMediaQueryRef)createDataQuery;	// 0x35f1e335
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x35f1ed2d
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x35f1ea25
- (BOOL)dataClientUpdated:(id)updated;	// 0x35f1e25d
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f1e5ed
- (void)dealloc;	// 0x35f1e149
- (id)errorForNoContent;	// 0x35f1ea05
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35f1f025
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x35f1eff9
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x35f1ec81
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x35f1ebdd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35f1eae5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35f1f005
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f1ef29
@end

