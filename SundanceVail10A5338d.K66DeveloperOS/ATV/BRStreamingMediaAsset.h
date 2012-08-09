/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRBaseMediaAsset.h"
#import "BRATVMediaItem.h"
#import "BRMediaAssetDerivesMediaURL.h"

@class ATVDataItem, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem, BRMediaAssetDerivesMediaURL, BRSecureResource> {
	ATVDataItem *_mediaItem;	// 8 = 0x8
	NSMutableDictionary *_metadata;	// 12 = 0xc
	NSString *_assetID;	// 16 = 0x10
}
@property(readonly, retain) NSString *assetID;	// G=0x27cf61; converted property
@property(assign) unsigned bookmarkTimeInMS;	// G=0x27d3a5; S=0x27d40d; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x27cf09
+ (id)streamingMediaAssetWithMediaItem:(id)mediaItem;	// 0x27cf19
- (id)initWithMediaItem:(id)mediaItem;	// 0x27dd01
- (BOOL)_supportsBookmarkProperty;	// 0x27dd89
- (BOOL)alwaysRequiresAuthorization;	// 0x27dbb9
- (id)artist;	// 0x27d1bd
// converted property getter: - (id)assetID;	// 0x27cf61
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x27d3a5
- (void)dealloc;	// 0x27ce91
- (long)duration;	// 0x27d359
- (BOOL)hasVideoContent;	// 0x27d061
- (id)imageProxy;	// 0x27d6e9
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x27d5e1
- (BOOL)isHD;	// 0x27d2e9
- (id)mediaDescription;	// 0x27d241
- (id)mediaFlavor;	// 0x27d32d
- (id)mediaItemRef;	// 0x27dbdd
- (id)mediaSummary;	// 0x27d215
- (id)mediaType;	// 0x27d035
- (id)mediaURL;	// 0x27cff1
- (id)playbackMetadata;	// 0x27d815
- (id)primaryCollectionTitle;	// 0x27d1e9
- (id)primaryGenre;	// 0x27d26d
- (void)resolveMediaURL:(id)url;	// 0x27dbed
- (id)secureResourceAuthenticator;	// 0x27dcfd
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x27d40d
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x27d7d9
- (void)setWatched:(BOOL)watched;	// 0x27da41
- (unsigned)startTimeInMS;	// 0x27d595
- (id)title;	// 0x27d191
@end
