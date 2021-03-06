/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMediaAsset.h"

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x3665f551; S=0x3665f519; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x3665f51d; S=0x3665f501; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x3665f425; S=0x3665f429; converted property
@property(retain) id lastPlayed;	// G=0x3665f555; S=0x3665f559; converted property
@property(assign) float userStarRating;	// G=0x3665f4b1; S=0x3665f4b9; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x3665f2a9
- (BOOL)alwaysRequiresAuthorization;	// 0x3665f7d1
- (id)artist;	// 0x3665f371
- (id)artistCollection;	// 0x3665f5c1
- (id)artistForSorting;	// 0x3665f375
- (id)assetID;	// 0x3665f359
- (id)authorName;	// 0x3665f6c9
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x3665f551
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x3665f51d
- (id)broadcaster;	// 0x3665f49d
- (BOOL)canBePlayedInShuffle;	// 0x3665f6e5
- (id)cast;	// 0x3665f3c5
- (id)category;	// 0x3665f6d5
- (void)cleanUpPlaybackContext;	// 0x3665f7c5
- (BOOL)closedCaptioned;	// 0x3665f4cd
- (id)collections;	// 0x3665f615
- (id)composer;	// 0x3665f4e5
- (id)composerForSorting;	// 0x3665f4e9
- (id)copyright;	// 0x3665f3b9
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x3665f7e5
- (id)dateAcquired;	// 0x3665f455
- (id)dateAcquiredString;	// 0x3665f631
- (id)dateCreated;	// 0x3665f459
- (id)dateCreatedString;	// 0x3665f659
- (id)datePublished;	// 0x3665f45d
- (id)datePublishedString;	// 0x3665f681
- (void)dealloc;	// 0x3665f2fd
- (id)directors;	// 0x3665f3e1
- (BOOL)dolbyDigital;	// 0x3665f4d1
- (long)duration;	// 0x3665f3bd
- (unsigned)episode;	// 0x3665f4a9
- (id)episodeNumber;	// 0x3665f4a1
- (BOOL)forceHDCPProtection;	// 0x3665f4f9
- (id)genres;	// 0x3665f469
- (int)grFormat;	// 0x3665f6dd
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x3665f425
- (BOOL)hasCoverArt;	// 0x3665f451
- (BOOL)hasVideoContent;	// 0x3665f4ed
- (unsigned)hash;	// 0x3665f799
- (id)imageProxy;	// 0x3665f43d
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x3665f441
- (void)incrementPerformanceCount;	// 0x3665f419
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x3665f41d
- (BOOL)isAvailable;	// 0x3665f729
- (BOOL)isCheckedOut;	// 0x3665f7ed
- (BOOL)isDisabled;	// 0x3665f4f1
- (BOOL)isEqual:(id)equal;	// 0x3665f735
- (BOOL)isExplicit;	// 0x3665f7d5
- (BOOL)isHD;	// 0x3665f4c1
- (BOOL)isInappropriate;	// 0x3665f6d9
- (BOOL)isLocal;	// 0x3665f6e9
- (BOOL)isPlaying;	// 0x3665f819
- (BOOL)isPlayingOrPaused;	// 0x3665f955
- (BOOL)isProtectedContent;	// 0x3665f4f5
- (BOOL)isValid;	// 0x3665f35d
- (BOOL)isWidescreen;	// 0x3665f4c9
- (id)keywords;	// 0x3665f6cd
// converted property getter: - (id)lastPlayed;	// 0x3665f555
- (void)logDescription;	// 0x3665f6a9
- (id)mediaCollections;	// 0x3665f4ad
- (id)mediaDescription;	// 0x3665f3b5
- (id)mediaFlavor;	// 0x3665f4c5
- (id)mediaObjectID;	// 0x3665f361
- (id)mediaSummary;	// 0x3665f3b1
- (id)mediaType;	// 0x3665f461
- (id)mediaURL;	// 0x3665f42d
- (id)merchant;	// 0x3665f4dd
- (long)parentalControlRatingRank;	// 0x3665f7cd
- (long)parentalControlRatingSystemID;	// 0x3665f7c9
- (void)performSelector:(SEL)selector target:(id)target;	// 0x3665f7f1
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x3665f805
- (long)performanceCount;	// 0x3665f3c1
- (int)physicalMediaID;	// 0x3665f48d
- (BOOL)playable;	// 0x3665f7d9
- (id)playbackMetadata;	// 0x3665f7dd
- (id)playbackRightsOwner;	// 0x3665f4fd
- (void)preparePlaybackContext;	// 0x3665f7c1
- (id)previewURL;	// 0x3665f431
- (id)primaryCollection;	// 0x3665f5bd
- (int)primaryCollectionOrder;	// 0x3665f485
- (id)primaryCollectionTitle;	// 0x3665f5c5
- (id)primaryCollectionTitleForSorting;	// 0x3665f5ed
- (id)primaryGenre;	// 0x3665f465
- (id)producers;	// 0x3665f3fd
- (id)provider;	// 0x3665f349
- (id)publisher;	// 0x3665f4e1
- (id)rating;	// 0x3665f4bd
- (id)resolution;	// 0x3665f6ad
- (unsigned)season;	// 0x3665f4a5
- (id)seriesName;	// 0x3665f495
- (id)seriesNameForSorting;	// 0x3665f499
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x3665f519
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x3665f501
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x3665f429
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x3665f559
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x3665f7e1
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x3665f4b9
- (void)skip;	// 0x3665f72d
- (id)sourceID;	// 0x3665f7e9
- (float)starRating;	// 0x3665f4d5
- (id)startDate;	// 0x3665f591
- (unsigned)startTimeInMS;	// 0x3665f58d
- (unsigned)startTimeInSeconds;	// 0x3665f55d
- (unsigned)stopTimeInMS;	// 0x3665f5b9
- (unsigned)stopTimeInSeconds;	// 0x3665f595
- (id)title;	// 0x3665f379
- (id)titleForSorting;	// 0x3665f3a1
- (id)trickPlayConfig;	// 0x3665f439
- (id)trickPlayURL;	// 0x3665f435
// converted property getter: - (float)userStarRating;	// 0x3665f4b1
- (id)viewCount;	// 0x3665f6d1
- (void)willBeDeleted;	// 0x3665f731
- (void)willBeginPlayback;	// 0x3665f421
@end

