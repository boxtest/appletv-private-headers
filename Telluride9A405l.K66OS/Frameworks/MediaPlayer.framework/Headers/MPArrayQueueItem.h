/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class SSDownload, NSString, MPAVItem;

@interface MPArrayQueueItem : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	SSDownload *_download;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _stopTime;	// 24 = 0x18
	NSString *_videoID;	// 32 = 0x20
}
@property(retain, nonatomic) SSDownload *download;	// G=0x33bba05d; S=0x33bba06d; @synthesize=_download
@property(readonly, assign, nonatomic) MPAVItem *item;	// G=0x33bba091; @synthesize=_item
@property(copy, nonatomic) NSString *path;	// G=0x33bba0a1; S=0x33bba0b1; @synthesize=_path
@property(assign, nonatomic) double startTime;	// G=0x33bba0d5; S=0x33bba0ed; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x33bba101; S=0x33bba119; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x33bba12d; S=0x33bba13d; @synthesize=_videoID
- (id)init;	// 0x33bb9f19
- (id)initWithMPAVItem:(id)mpavitem;	// 0x33bb9f2d
- (void)dealloc;	// 0x33bb9fb1
// declared property getter: - (id)download;	// 0x33bba05d
// declared property getter: - (id)item;	// 0x33bba091
// declared property getter: - (id)path;	// 0x33bba0a1
// declared property setter: - (void)setDownload:(id)download;	// 0x33bba06d
// declared property setter: - (void)setPath:(id)path;	// 0x33bba0b1
// declared property setter: - (void)setStartTime:(double)time;	// 0x33bba0ed
// declared property setter: - (void)setStopTime:(double)time;	// 0x33bba119
// declared property setter: - (void)setVideoID:(id)anId;	// 0x33bba13d
// declared property getter: - (double)startTime;	// 0x33bba0d5
// declared property getter: - (double)stopTime;	// 0x33bba101
// declared property getter: - (id)videoID;	// 0x33bba12d
@end

