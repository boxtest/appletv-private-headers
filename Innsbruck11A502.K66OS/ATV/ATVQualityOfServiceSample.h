/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVQualityOfServiceSample : XXUnknownSuperclass {
	int _numberOfSegmentsDownloaded;	// 4 = 0x4
	NSString *_serverAddress;	// 8 = 0x8
	int _numberOfServerAddressChanges;	// 12 = 0xc
	NSString *_URI;	// 16 = 0x10
	int _numberOfStalls;	// 20 = 0x14
	int _numberOfDroppedVideoFrames;	// 24 = 0x18
	double _segmentsDownloadedDuration;	// 28 = 0x1c
	double _durationWatched;	// 36 = 0x24
	long long _numberOfBytesTransferred;	// 44 = 0x2c
	double _observedBitrate;	// 52 = 0x34
	double _indicatedBitrate;	// 60 = 0x3c
}
@property(retain, nonatomic) NSString *URI;	// G=0x228599; S=0x2285a9; @synthesize=_URI
@property(assign, nonatomic) double durationWatched;	// G=0x2285e5; S=0x2285fd; @synthesize=_durationWatched
@property(assign, nonatomic) double indicatedBitrate;	// G=0x228689; S=0x2286a1; @synthesize=_indicatedBitrate
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x228631; S=0x228649; @synthesize=_numberOfBytesTransferred
@property(assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x2286b5; S=0x2286c5; @synthesize=_numberOfDroppedVideoFrames
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x228539; S=0x228549; @synthesize=_numberOfSegmentsDownloaded
@property(assign, nonatomic) int numberOfServerAddressChanges;	// G=0x228579; S=0x228589; @synthesize=_numberOfServerAddressChanges
@property(assign, nonatomic) int numberOfStalls;	// G=0x228611; S=0x228621; @synthesize=_numberOfStalls
@property(assign, nonatomic) double observedBitrate;	// G=0x22865d; S=0x228675; @synthesize=_observedBitrate
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x2285b9; S=0x2285d1; @synthesize=_segmentsDownloadedDuration
@property(retain, nonatomic) NSString *serverAddress;	// G=0x228559; S=0x228569; @synthesize=_serverAddress
// declared property getter: - (id)URI;	// 0x228599
- (void)dealloc;	// 0x2284e1
// declared property getter: - (double)durationWatched;	// 0x2285e5
// declared property getter: - (double)indicatedBitrate;	// 0x228689
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x228631
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x2286b5
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x228539
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x228579
// declared property getter: - (int)numberOfStalls;	// 0x228611
// declared property getter: - (double)observedBitrate;	// 0x22865d
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x2285b9
// declared property getter: - (id)serverAddress;	// 0x228559
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x2285fd
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x2286a1
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x228649
// declared property setter: - (void)setNumberOfDroppedVideoFrames:(int)droppedVideoFrames;	// 0x2286c5
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x228549
// declared property setter: - (void)setNumberOfServerAddressChanges:(int)serverAddressChanges;	// 0x228589
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x228621
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x228675
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x2285d1
// declared property setter: - (void)setServerAddress:(id)address;	// 0x228569
// declared property setter: - (void)setURI:(id)uri;	// 0x2285a9
@end

