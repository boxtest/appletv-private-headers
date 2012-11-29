/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDate;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
	MPMovieAccessLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x36ebc1e5; 
@property(assign, nonatomic) MPMovieAccessLogEventInternal _internal;	// G=0x36ebc365; S=0x36ebc379; @synthesize
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x36ebc2a5; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x36ebc325; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x36ebc2e5; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x36ebc345; 
@property(readonly, assign, nonatomic) unsigned numberOfSegmentsDownloaded;	// G=0x36ebc1a5; 
@property(readonly, assign, nonatomic) unsigned numberOfServerAddressChanges;	// G=0x36ebc225; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x36ebc2c5; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x36ebc305; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x36ebc245; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x36ebc1c5; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x36ebc265; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x36ebc285; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x36ebc205; 
// declared property getter: - (id)URI;	// 0x36ebc1e5
- (id)_initWithAVItemAccessLogEvent:(id)avitemAccessLogEvent;	// 0x36ebc0f5
// declared property getter: - (MPMovieAccessLogEventInternal)_internal;	// 0x36ebc365
- (id)copyWithZone:(NSZone *)zone;	// 0x36ebc195
- (void)dealloc;	// 0x36ebc149
// declared property getter: - (double)durationWatched;	// 0x36ebc2a5
// declared property getter: - (double)indicatedBitrate;	// 0x36ebc325
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x36ebc2e5
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x36ebc345
// declared property getter: - (unsigned)numberOfSegmentsDownloaded;	// 0x36ebc1a5
// declared property getter: - (unsigned)numberOfServerAddressChanges;	// 0x36ebc225
// declared property getter: - (int)numberOfStalls;	// 0x36ebc2c5
// declared property getter: - (double)observedBitrate;	// 0x36ebc305
// declared property getter: - (id)playbackSessionID;	// 0x36ebc245
// declared property getter: - (id)playbackStartDate;	// 0x36ebc1c5
// declared property getter: - (double)playbackStartOffset;	// 0x36ebc265
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x36ebc285
// declared property getter: - (id)serverAddress;	// 0x36ebc205
// declared property setter: - (void)set_internal:(MPMovieAccessLogEventInternal)internal;	// 0x36ebc379
@end
