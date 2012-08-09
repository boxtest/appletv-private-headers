/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVController;
@protocol OS_dispatch_queue;

@interface MPSystemNowPlayingController : NSObject {
	BOOL _hasSeenAnyItem;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_serialQueue;	// 12 = 0xc
}
@property(assign, nonatomic) MPAVController *player;	// G=0x3413eab5; S=0x3413eac5; @synthesize=_player
- (id)init;	// 0x3413dc25
- (int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;	// 0x3413e749
- (int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;	// 0x3413e755
- (unsigned)_chapterIndexForItem:(id)item atTime:(double)time;	// 0x3413e6f5
- (id)_progressInfoForItem:(id)item;	// 0x3413e769
- (void)dealloc;	// 0x3413dc75
// declared property getter: - (id)player;	// 0x3413eab5
- (void)postNowPlayingInfoForItem:(id)item;	// 0x3413dcb5
- (void)postProgressUpdateForItem:(id)item;	// 0x3413e66d
// declared property setter: - (void)setPlayer:(id)player;	// 0x3413eac5
@end
