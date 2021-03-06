/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItem.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class MPMediaLibrary, NSArray, NSNumber;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying> {
@private
	MPMediaLibrary *_library;	// 4 = 0x4
	unsigned long long _persistentID;	// 8 = 0x8
	NSArray *_chapters;	// 16 = 0x10
	NSNumber *_mediaType;	// 20 = 0x14
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x34897195; converted property
- (id)init;	// 0x34896d01
- (id)initWithCoder:(id)coder;	// 0x34896f09
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x34896d4d
- (id)initWithPersistentID:(unsigned long long)persistentID library:(id)library;	// 0x34896d99
- (id)initWithPersistentID:(unsigned long long)persistentID valuesForProperties:(id)properties library:(id)library;	// 0x34896dbd
- (id)_nonBatchableValueForProperty:(id)property isBatchable:(BOOL *)batchable;	// 0x348971ad
- (void)clearBookmarkTime;	// 0x348983d1
- (id)copyWithZone:(NSZone *)zone;	// 0x34896ef9
- (void)dealloc;	// 0x34896e25
- (id)description;	// 0x34896e9d
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x348981b9
- (void)encodeWithCoder:(id)coder;	// 0x34897059
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x34897c4d
- (BOOL)existsInLibrary;	// 0x34897149
- (void)incrementPlayCountForPlayingToEnd;	// 0x348983f1
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x34898421
- (void)incrementSkipCount;	// 0x348982cd
- (void)markNominalAmountHasBeenPlayed;	// 0x34898161
- (id)mediaLibrary;	// 0x34897185
- (double)nominalHasBeenPlayedThreshold;	// 0x34898179
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x34898251
// converted property getter: - (unsigned long long)persistentID;	// 0x34897195
- (void)reallyIncrementPlayCount;	// 0x3489805d
- (void)setValue:(id)value forProperty:(id)property;	// 0x34897b95
- (void)updateLastUsedDateToCurrentDate;	// 0x34898511
- (id)valueForProperty:(id)property;	// 0x3489775d
- (id)valuesForProperties:(id)properties;	// 0x348979bd
@end

