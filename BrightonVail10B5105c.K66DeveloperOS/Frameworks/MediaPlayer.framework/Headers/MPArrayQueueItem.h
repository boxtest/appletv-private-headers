/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _stopTime;	// 20 = 0x14
	NSString *_videoID;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) MPAVItem *item;	// G=0x34f90b39; @synthesize=_item
@property(copy, nonatomic) NSString *path;	// G=0x34f90b49; S=0x34f90b5d; @synthesize=_path
@property(assign, nonatomic) double startTime;	// G=0x34f90b6d; S=0x34f90b85; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x34f90b99; S=0x34f90bb1; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x34f90bc5; S=0x34f90bd9; @synthesize=_videoID
- (id)init;	// 0x34f90a11
- (id)initWithMPAVItem:(id)mpavitem;	// 0x34f90a25
- (void)dealloc;	// 0x34f90aa9
// declared property getter: - (id)item;	// 0x34f90b39
// declared property getter: - (id)path;	// 0x34f90b49
// declared property setter: - (void)setPath:(id)path;	// 0x34f90b5d
// declared property setter: - (void)setStartTime:(double)time;	// 0x34f90b85
// declared property setter: - (void)setStopTime:(double)time;	// 0x34f90bb1
// declared property setter: - (void)setVideoID:(id)anId;	// 0x34f90bd9
// declared property getter: - (double)startTime;	// 0x34f90b6d
// declared property getter: - (double)stopTime;	// 0x34f90b99
// declared property getter: - (id)videoID;	// 0x34f90bc5
@end
