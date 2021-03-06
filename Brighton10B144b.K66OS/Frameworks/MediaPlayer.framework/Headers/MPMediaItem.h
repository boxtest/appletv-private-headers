/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"

@class NSString, NSDate, NSArray, MPMediaItemArtwork;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x31d0c51d; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x31d0c579; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x31d0c595; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x31d0c5b1; 
@property(assign, nonatomic) double bookmarkTime;	// G=0x31d0c5cd; S=0x31d0c601; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x31d0bced; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x31d0c645; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x31d0c539; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x31d0c841; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x31d0c661; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x31d0cc4d; S=0x31d0cc7d; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x31d0c741; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x31d0c67d; 
@property(readonly, assign, nonatomic) BOOL isUsableAsRepresentativeItem;	// G=0x31d0d3e5; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x31d0cab5; S=0x31d0cad1; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x31d0cc15; S=0x31d0cc31; 
@property(copy, nonatomic) NSDate *lastUsedDate;	// G=0x31d0caed; S=0x31d0cb09; 
@property(readonly, assign, nonatomic) int mediaType;	// G=0x31d0c771; 
@property(readonly, assign, nonatomic) BOOL mediaTypeCanSeedGenius;	// G=0x31da8421; 
@property(assign, nonatomic) unsigned playCount;	// G=0x31d0c9c5; S=0x31d0c9f9; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x31d0ca3d; S=0x31d0ca71; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x31d0c7a5; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x31d0c885; 
@property(assign, nonatomic) unsigned rating;	// G=0x31d0c8a1; S=0x31d0c8d5; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x31d0c919; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x31d0ccc1; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x31d0cb25; S=0x31d0cb59; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x31d0cb9d; S=0x31d0cbd1; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x31d0c7d9; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x31d0c80d; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x31d0c935; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x31d0c951; 
+ (void)_createFilterableDictionary;	// 0x31d0bd09
+ (BOOL)_isValidItemProperty:(id)property;	// 0x31d0c4d9
+ (BOOL)canFilterByProperty:(id)property;	// 0x31d0b45d
+ (id)dynamicProperties;	// 0x31d0bbc1
+ (id)fallbackTitlePropertyForGroupingType:(int)groupingType;	// 0x31d0bba5
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x31d0bab5
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x31d0bb21
- (id)initWithCoder:(id)coder;	// 0x31d0b359
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x31d0b24d
- (id)_bestStoreURL;	// 0x31d0b9fd
- (id)_directStoreURL;	// 0x31d0d3e9
- (id)_libraryLinkArtist;	// 0x31d0d591
- (id)_libraryLinkKind;	// 0x31d0d605
- (id)_libraryLinkPlaylistName;	// 0x31d0d6c5
- (id)_libraryLinkURL;	// 0x31d0d759
// declared property getter: - (id)albumArtist;	// 0x31d0c51d
// declared property getter: - (id)albumTitle;	// 0x31d0c579
// declared property getter: - (id)artist;	// 0x31d0c595
// declared property getter: - (id)artwork;	// 0x31d0c5b1
// declared property getter: - (double)bookmarkTime;	// 0x31d0c5cd
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x31d0ce25
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x31d0cf11
// declared property getter: - (id)chapters;	// 0x31d0bced
- (id)chaptersOfType:(int)type;	// 0x31d0ccf1
- (void)clearBookmarkTime;	// 0x31d0b97d
// declared property getter: - (id)composer;	// 0x31d0c645
- (unsigned)countOfChaptersOfType:(int)type;	// 0x31d0d045
- (void)didReceiveMemoryWarning;	// 0x31d0b9f9
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x31d0b611
// declared property getter: - (id)effectiveAlbumArtist;	// 0x31d0c539
// declared property getter: - (double)effectiveStopTime;	// 0x31d0c841
- (void)encodeWithCoder:(id)coder;	// 0x31d0b3e1
- (BOOL)existsInLibrary;	// 0x31d0ba35
- (void)gaplessHeuristicInfo:(unsigned *)info durationInSamples:(unsigned long long *)samples lastPacketsResync:(unsigned long long *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x31d0d125
// declared property getter: - (id)genre;	// 0x31d0c661
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x31d0cc4d
- (unsigned)hash;	// 0x31d0b2a9
- (void)incrementPlayCountForPlayingToEnd;	// 0x31d0b805
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x31d0b881
- (void)incrementSkipCount;	// 0x31d0b789
- (BOOL)isDownloadInProgress;	// 0x31da3a2d
- (BOOL)isDownloadable;	// 0x31da37e1
- (BOOL)isEqual:(id)equal;	// 0x31d0b2c1
// declared property getter: - (BOOL)isITunesU;	// 0x31d0c741
// declared property getter: - (BOOL)isRental;	// 0x31d0c67d
// declared property getter: - (BOOL)isUsableAsRepresentativeItem;	// 0x31d0d3e5
// declared property getter: - (id)lastPlayedDate;	// 0x31d0cab5
// declared property getter: - (id)lastSkippedDate;	// 0x31d0cc15
// declared property getter: - (id)lastUsedDate;	// 0x31d0caed
- (void)markNominalAmountHasBeenPlayed;	// 0x31d0b691
// declared property getter: - (int)mediaType;	// 0x31d0c771
// declared property getter: - (BOOL)mediaTypeCanSeedGenius;	// 0x31da8421
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x31d0b70d
// declared property getter: - (unsigned)playCount;	// 0x31d0c9c5
// declared property getter: - (unsigned)playCountSinceSync;	// 0x31d0ca3d
// declared property getter: - (double)playbackDuration;	// 0x31d0c7a5
// declared property getter: - (id)podcastTitle;	// 0x31d0c885
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x31d0bcb9
- (id)predicateForProperty:(id)property;	// 0x31d0c985
// declared property getter: - (unsigned)rating;	// 0x31d0c8a1
// declared property getter: - (id)releaseDate;	// 0x31d0c919
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x31d0ccc1
- (id)representativeItem;	// 0x31d0ba31
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x31d0c601
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x31d0cc7d
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x31d0cad1
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x31d0cc31
// declared property setter: - (void)setLastUsedDate:(id)date;	// 0x31d0cb09
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x31d0c9f9
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x31d0ca71
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x31d0c8d5
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x31d0cb59
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x31d0cbd1
// declared property getter: - (unsigned)skipCount;	// 0x31d0cb25
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x31d0cb9d
// declared property getter: - (double)startTime;	// 0x31d0c7d9
// declared property getter: - (double)stopTime;	// 0x31d0c80d
// declared property getter: - (id)title;	// 0x31d0c935
- (void)updateLastUsedDateToCurrentDate;	// 0x31d0b901
- (id)valueForProperty:(id)property;	// 0x31d0b4e9
- (id)valuesForProperties:(id)properties;	// 0x31d0b591
// declared property getter: - (unsigned)year;	// 0x31d0c951
@end

