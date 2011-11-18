/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x35cff991; S=0x35cff965; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x35cff1b5; S=0x35cff175; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x35cff059
- (id)_podcastID;	// 0x35cffb45
- (id)_showInfo;	// 0x35cffba1
- (id)artist;	// 0x35cff75d
- (id)assetID;	// 0x35cff1c5
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x35cff991
- (id)cast;	// 0x35cff2f9
- (id)copyright;	// 0x35cff7f5
- (id)coverArtID;	// 0x35cff4c5
- (id)dateAcquired;	// 0x35cff57d
- (id)datePublished;	// 0x35cff545
- (id)datePublishedString;	// 0x35cff735
- (void)dealloc;	// 0x35cff115
- (id)description;	// 0x35cff841
- (id)directors;	// 0x35cff379
- (long)duration;	// 0x35cff27d
// converted property getter: - (id)feedInfo;	// 0x35cff1b5
- (id)genres;	// 0x35cff68d
- (BOOL)hasCoverArt;	// 0x35cff495
- (BOOL)hasVideoContent;	// 0x35cff6b5
- (void)incrementPerformanceCount;	// 0x35cff8f9
- (BOOL)isExplicit;	// 0x35cff869
- (id)mediaDescription;	// 0x35cff245
- (id)mediaSummary;	// 0x35cff7e5
- (id)mediaType;	// 0x35cff58d
- (id)mediaURL;	// 0x35cff3b1
- (long)performanceCount;	// 0x35cff8d1
- (id)previewURL;	// 0x35cff419
- (id)primaryCollectionTitle;	// 0x35cff7a1
- (id)primaryGenre;	// 0x35cff5e1
- (id)primaryGenreAsString;	// 0x35cff5a9
- (id)producers;	// 0x35cff395
- (id)publisher;	// 0x35cff83d
- (id)rating;	// 0x35cff6b1
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x35cff965
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x35cff175
- (void)setHasBeenPlayed:(BOOL)played;	// 0x35cff939
- (id)thumbnailArtID;	// 0x35cff535
- (id)thumbnailURL;	// 0x35cff82d
- (id)title;	// 0x35cff20d
- (float)userStarRating;	// 0x35cff6a9
- (void)willBeginPlayback;	// 0x35cff9b9
@end

