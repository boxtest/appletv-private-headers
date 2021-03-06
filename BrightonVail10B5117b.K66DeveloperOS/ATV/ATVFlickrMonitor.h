/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

__attribute__((visibility("hidden")))
@interface ATVFlickrMonitor : ATVInternetPhotosMonitor <ATVSettingsSaver> {
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x1b3dd5; converted property
+ (void)initialize;	// 0x1b30c1
+ (void)setSingleton:(id)singleton;	// 0x1b30b1
+ (id)singleton;	// 0x1b30a1
- (id)init;	// 0x1b3131
- (id)_loadFlickrURL:(id)url;	// 0x1b57cd
- (void)_performAccountIconImageLoad:(id)load;	// 0x1b5489
- (void)_performAccountLoad:(id)load;	// 0x1b3df5
- (void)_performAccountMediaLoad:(id)load;	// 0x1b3fb1
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x1b4b51
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x1b5449
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x1b5469
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x1b5595
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x1b52e1
- (void)_performCollectionAssetsLoad:(id)load;	// 0x1b4cc1
- (void)_performSearch:(id)search;	// 0x1b5301
- (id)_savedSearchesFilePath;	// 0x1b5939
- (void)addAccount:(id)account;	// 0x1b3361
- (void)addPathsToSaveTo:(id)to;	// 0x1b32b9
// converted property getter: - (id)backgroundTask;	// 0x1b3dd5
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x1b3b69
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x1b3bc5
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x1b3cf5
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x1b3d65
- (void)cancelLoadMediaForAccount:(id)account;	// 0x1b3a4d
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x1b3b0d
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x1b3c85
- (void)dealloc;	// 0x1b3229
- (void)loadAccountIconForAccount:(id)account;	// 0x1b3525
- (void)loadAccountWithName:(id)name;	// 0x1b33ed
- (void)loadAssetsForCollection:(id)collection;	// 0x1b358d
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x1b3671
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x1b36ed
- (void)loadMediaForAccount:(id)account;	// 0x1b3455
- (void)loadSubAccountsForAccount:(id)account;	// 0x1b34bd
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x1b35f5
- (void)removeAccountWithName:(id)name;	// 0x1b32e9
- (void)removeSavedSearchTerm:(id)term;	// 0x1b38ad
- (void)saveSearchTerm:(id)term;	// 0x1b3791
- (id)savedSearchTerms;	// 0x1b3a15
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x1b3769
- (id)taskContext;	// 0x1b3de5
@end

