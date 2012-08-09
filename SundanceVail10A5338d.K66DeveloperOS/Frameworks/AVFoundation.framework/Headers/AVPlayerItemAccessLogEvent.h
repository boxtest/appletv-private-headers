/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
	AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x317c23ad; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x317c2629; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x317c27a9; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x317c26e9; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x317c2809; 
@property(readonly, assign, nonatomic) int numberOfMediaRequests;	// G=0x317c22c9; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x317c2329; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x317c2495; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x317c2689; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x317c2749; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x317c24f5; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x317c2339; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x317c2569; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x317c25c9; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x317c2421; 
- (id)init;	// 0x317c211d
- (id)initWithDictionary:(id)dictionary;	// 0x317c21b5
// declared property getter: - (id)URI;	// 0x317c23ad
- (id)copyWithZone:(NSZone *)zone;	// 0x317c2209
- (void)dealloc;	// 0x317c225d
// declared property getter: - (double)durationWatched;	// 0x317c2629
- (void)finalize;	// 0x317c2219
// declared property getter: - (double)indicatedBitrate;	// 0x317c27a9
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x317c26e9
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x317c2809
// declared property getter: - (int)numberOfMediaRequests;	// 0x317c22c9
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x317c2329
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x317c2495
// declared property getter: - (int)numberOfStalls;	// 0x317c2689
// declared property getter: - (double)observedBitrate;	// 0x317c2749
// declared property getter: - (id)playbackSessionID;	// 0x317c24f5
// declared property getter: - (id)playbackStartDate;	// 0x317c2339
// declared property getter: - (double)playbackStartOffset;	// 0x317c2569
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x317c25c9
// declared property getter: - (id)serverAddress;	// 0x317c2421
@end
