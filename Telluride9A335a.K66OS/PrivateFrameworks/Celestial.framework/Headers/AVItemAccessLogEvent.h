/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class NSDate, NSString, AVItemAccessLogEventInternal;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
@private
	AVItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x31646edd; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x316466b5; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x31646835; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x31646775; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x31646899; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x31646535; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x31646591; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x31646719; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x316467d1; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x31646dfd; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x31646f4d; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x316465ed; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x31646651; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x31646e6d; 
- (id)init;	// 0x31646d59
- (id)initWithDictionary:(id)dictionary;	// 0x316464c5
// declared property getter: - (id)URI;	// 0x31646edd
- (id)copyWithZone:(NSZone *)zone;	// 0x31646525
- (void)dealloc;	// 0x31646fbd
// declared property getter: - (double)durationWatched;	// 0x316466b5
- (void)finalize;	// 0x3164702d
// declared property getter: - (double)indicatedBitrate;	// 0x31646835
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x31646775
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x31646899
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x31646535
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x31646591
// declared property getter: - (int)numberOfStalls;	// 0x31646719
// declared property getter: - (double)observedBitrate;	// 0x316467d1
// declared property getter: - (id)playbackSessionID;	// 0x31646dfd
// declared property getter: - (id)playbackStartDate;	// 0x31646f4d
// declared property getter: - (double)playbackStartOffset;	// 0x316465ed
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x31646651
// declared property getter: - (id)serverAddress;	// 0x31646e6d
@end
