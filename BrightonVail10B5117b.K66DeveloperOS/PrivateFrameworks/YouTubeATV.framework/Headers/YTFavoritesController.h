/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, YTAccountFeedRequest, YTAuthenticatedAccountPost, NSURL;
@protocol YTFavoritesControllerDelegate;

@interface YTFavoritesController : NSObject {
	NSMutableArray *_pendingFavoritesShortIDs;	// 4 = 0x4
	NSMutableArray *_mergedFavorites;	// 8 = 0x8
	YTAuthenticatedAccountPost *_accountPost;	// 12 = 0xc
	YTAccountFeedRequest *_accountFeedRequest;	// 16 = 0x10
	BOOL _usingAccountFavorites;	// 20 = 0x14
	BOOL _shouldOfferMergeOfLocalBookmarks;	// 21 = 0x15
	NSURL *_batchURL;	// 24 = 0x18
	NSMutableArray *_bookmarkVideos;	// 28 = 0x1c
	NSMutableArray *_bookmarkShortIDs;	// 32 = 0x20
	id<YTFavoritesControllerDelegate> _mergeBookmarksDelegate;	// 36 = 0x24
}
@property(retain) NSURL *batchURL;	// G=0x368ea1e9; S=0x368ea191; converted property
@property(readonly, assign) BOOL shouldOfferMergeOfLocalBookmarks;	// G=0x368e97cd; converted property
@property(assign) BOOL usingAccountFavorites;	// G=0x368e974d; S=0x368e975d; converted property
+ (id)sharedFavoritesController;	// 0x368e96b9
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x368ea1f9
- (void)_bookmarksDidChangeNotifyObservers:(BOOL)_bookmarks;	// 0x368e9a61
- (void)_loadBookmarks;	// 0x368e9ba9
- (void)_processNextPendingFavoritesBatch;	// 0x368e98a1
- (void)_saveBookmarks;	// 0x368e9b1d
- (void)accountFeedRequest:(id)request didFailWithError:(id)error;	// 0x368ea53d
- (void)accountFeedRequest:(id)request receivedVideos:(id)videos;	// 0x368ea245
- (void)addFavoriteForVideo:(id)video;	// 0x368e9f55
- (void)addLocalBookmarkForVideo:(id)video;	// 0x368e9e89
// converted property getter: - (id)batchURL;	// 0x368ea1e9
- (id)bookmarkedShortIDs;	// 0x368e9e55
- (id)bookmarkedVideos;	// 0x368e9dad
- (void)bookmarksSearchRequestInterrupted;	// 0x368e9e29
- (void)dealloc;	// 0x368e9701
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)delegate;	// 0x368e9991
- (void)removeFavoriteForVideo:(id)video;	// 0x368ea039
- (void)saveBookmarksIfNeeded;	// 0x368ea16d
- (void)searchRequestReturnedVideos:(id)videos;	// 0x368e9dbd
// converted property setter: - (void)setBatchURL:(id)url;	// 0x368ea191
- (void)setLocalBookmarksMergeOffered:(BOOL)offered;	// 0x368e9839
// converted property setter: - (void)setUsingAccountFavorites:(BOOL)favorites;	// 0x368e975d
// converted property getter: - (BOOL)shouldOfferMergeOfLocalBookmarks;	// 0x368e97cd
// converted property getter: - (BOOL)usingAccountFavorites;	// 0x368e974d
@end
