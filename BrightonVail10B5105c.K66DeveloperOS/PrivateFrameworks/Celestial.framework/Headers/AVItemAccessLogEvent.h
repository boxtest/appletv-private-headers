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
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x30c5bf55; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x30c5c1d1; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x30c5c351; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x30c5c291; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x30c5c3b1; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x30c5be81; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x30c5c03d; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x30c5c231; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x30c5c2f1; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x30c5c09d; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x30c5bee1; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x30c5c111; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x30c5c171; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x30c5bfc9; 
- (id)init;	// 0x30c5bcd5
- (id)initWithDictionary:(id)dictionary;	// 0x30c5bd6d
// declared property getter: - (id)URI;	// 0x30c5bf55
- (id)copyWithZone:(NSZone *)zone;	// 0x30c5bdc1
- (void)dealloc;	// 0x30c5be15
// declared property getter: - (double)durationWatched;	// 0x30c5c1d1
- (void)finalize;	// 0x30c5bdd1
// declared property getter: - (double)indicatedBitrate;	// 0x30c5c351
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x30c5c291
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x30c5c3b1
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x30c5be81
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x30c5c03d
// declared property getter: - (int)numberOfStalls;	// 0x30c5c231
// declared property getter: - (double)observedBitrate;	// 0x30c5c2f1
// declared property getter: - (id)playbackSessionID;	// 0x30c5c09d
// declared property getter: - (id)playbackStartDate;	// 0x30c5bee1
// declared property getter: - (double)playbackStartOffset;	// 0x30c5c111
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x30c5c171
// declared property getter: - (id)serverAddress;	// 0x30c5bfc9
@end
