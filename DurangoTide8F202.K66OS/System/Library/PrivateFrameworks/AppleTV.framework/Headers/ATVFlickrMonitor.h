/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVFlickrMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x3369be45; converted property
+ (void)initialize;	// 0x3369d849
+ (void)setSingleton:(id)singleton;	// 0x3369be39
+ (id)singleton;	// 0x3369be2d
- (id)init;	// 0x3369d76d
- (id)_loadFlickrURL:(id)url;	// 0x3369e2ad
- (void)_performAccountIconImageLoad:(id)load;	// 0x3369c0e9
- (void)_performAccountLoad:(id)load;	// 0x3369ca15
- (void)_performAccountMediaLoad:(id)load;	// 0x3369d8a9
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x3369c895
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x3369c1f1
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x3369c1d1
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x3369bee9
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x3369c341
- (void)_performCollectionAssetsLoad:(id)load;	// 0x3369c361
- (void)_performSearch:(id)search;	// 0x3369c211
- (id)_savedSearchesFilePath;	// 0x3369be91
- (void)addAccount:(id)account;	// 0x3369d605
// converted property getter: - (id)backgroundTask;	// 0x3369be45
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x3369cdd1
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x3369ccfd
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x3369cc1d
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x3369cbad
- (void)cancelLoadMediaForAccount:(id)account;	// 0x3369ceb1
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x3369ce41
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x3369cc8d
- (void)dealloc;	// 0x3369d6ed
- (void)loadAccountIconForAccount:(id)account;	// 0x3369d425
- (void)loadAccountWithName:(id)name;	// 0x3369d5a5
- (void)loadAssetsForCollection:(id)collection;	// 0x3369d37d
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x3369d27d
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x3369d1fd
- (void)loadMediaForAccount:(id)account;	// 0x3369d525
- (void)loadSubAccountsForAccount:(id)account;	// 0x3369d4a5
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x3369d2fd
- (void)removeAccountWithName:(id)name;	// 0x3369d681
- (void)removeSavedSearchTerm:(id)term;	// 0x3369cfa1
- (void)saveSearchTerm:(id)term;	// 0x3369d0dd
- (id)savedSearchTerms;	// 0x3369cf6d
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x3369d1d5
- (id)taskContext;	// 0x3369be55
@end
