/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"
#import "BRSecureResource.h"
#import "BRATVMediaItem.h"
#import "BRMediaAssetDerivesMediaURL.h"

@class NSMutableDictionary, ATVDataItem, NSString;

__attribute__((visibility("hidden")))
@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem, BRMediaAssetDerivesMediaURL, BRSecureResource> {
	ATVDataItem *_mediaItem;	// 8 = 0x8
	NSMutableDictionary *_metadata;	// 12 = 0xc
	NSString *_assetID;	// 16 = 0x10
}
@property(readonly, retain) NSString *assetID;	// G=0x2ae5bd; converted property
@property(assign) unsigned bookmarkTimeInMS;	// G=0x2aea59; S=0x2aeac1; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x2ae565
+ (id)streamingMediaAssetWithMediaItem:(id)mediaItem;	// 0x2ae575
- (id)initWithMediaItem:(id)mediaItem;	// 0x2af4e9
- (void)_playerStateChanged:(id)changed;	// 0x2af571
- (BOOL)_supportsBookmarkProperty;	// 0x2af5d1
- (BOOL)alwaysRequiresAuthorization;	// 0x2af299
- (id)artist;	// 0x2ae819
// converted property getter: - (id)assetID;	// 0x2ae5bd
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x2aea59
- (void)dealloc;	// 0x2ae4c1
- (long)duration;	// 0x2aea0d
- (BOOL)hasVideoContent;	// 0x2ae6bd
- (id)imageProxy;	// 0x2aedc9
- (BOOL)incrementPlayCount:(unsigned)count;	// 0x2aec99
- (BOOL)isHD;	// 0x2ae945
- (BOOL)isScrubbable;	// 0x2ae989
- (id)mediaDescription;	// 0x2ae89d
- (id)mediaFlavor;	// 0x2ae9e1
- (id)mediaItemRef;	// 0x2af2bd
- (id)mediaSummary;	// 0x2ae871
- (id)mediaType;	// 0x2ae691
- (id)mediaURL;	// 0x2ae64d
- (id)playbackMetadata;	// 0x2aeef5
- (id)primaryCollectionTitle;	// 0x2ae845
- (id)primaryGenre;	// 0x2ae8c9
- (void)resolveMediaURL:(id)url;	// 0x2af2cd
- (id)secureResourceAuthenticator;	// 0x2af48d
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x2aeac1
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x2aeeb9
- (void)setWatched:(BOOL)watched;	// 0x2af121
- (BOOL)shouldShowTrackPopup;	// 0x2af491
- (unsigned)startTimeInMS;	// 0x2aec49
- (id)title;	// 0x2ae7ed
@end

