/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSDate, NSString, AVItemAccessLogEventInternal;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
	AVItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x33f92aed; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x33f92d69; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x33f92ee9; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x33f92e29; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x33f92f49; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x33f92a19; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x33f92bd5; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x33f92dc9; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x33f92e89; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x33f92c35; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x33f92a79; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x33f92ca9; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x33f92d09; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x33f92b61; 
- (id)init;	// 0x33f9286d
- (id)initWithDictionary:(id)dictionary;	// 0x33f92905
// declared property getter: - (id)URI;	// 0x33f92aed
- (id)copyWithZone:(NSZone *)zone;	// 0x33f92959
- (void)dealloc;	// 0x33f929ad
// declared property getter: - (double)durationWatched;	// 0x33f92d69
- (void)finalize;	// 0x33f92969
// declared property getter: - (double)indicatedBitrate;	// 0x33f92ee9
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x33f92e29
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x33f92f49
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x33f92a19
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x33f92bd5
// declared property getter: - (int)numberOfStalls;	// 0x33f92dc9
// declared property getter: - (double)observedBitrate;	// 0x33f92e89
// declared property getter: - (id)playbackSessionID;	// 0x33f92c35
// declared property getter: - (id)playbackStartDate;	// 0x33f92a79
// declared property getter: - (double)playbackStartOffset;	// 0x33f92ca9
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x33f92d09
// declared property getter: - (id)serverAddress;	// 0x33f92b61
@end

