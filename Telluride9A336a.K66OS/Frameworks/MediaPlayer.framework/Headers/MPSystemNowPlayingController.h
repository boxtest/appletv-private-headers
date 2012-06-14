/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPAVController;

@interface MPSystemNowPlayingController : NSObject {
@private
	BOOL _hasSeenAnyItem;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	dispatch_queue_s *_serialQueue;	// 12 = 0xc
}
@property(assign, nonatomic) MPAVController *player;	// G=0x35b32179; S=0x35b32189; @synthesize=_player
- (id)init;	// 0x35b31495
- (int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;	// 0x35b3215d
- (int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;	// 0x35b32169
- (unsigned)_chapterIndexForItem:(id)item atTime:(double)time;	// 0x35b32109
- (void)dealloc;	// 0x35b314e5
// declared property getter: - (id)player;	// 0x35b32179
- (void)postNowPlayingInfoForItem:(id)item;	// 0x35b31525
- (void)postProgressUpdateForItem:(id)item;	// 0x35b31d49
// declared property setter: - (void)setPlayer:(id)player;	// 0x35b32189
@end
