/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, NSMutableArray, MPVideoView, MPAVController;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
	NSMutableArray *_pendingSnapshots;	// 16 = 0x10
	unsigned _expectingTimeJump : 1;	// 20 = 0x14
	unsigned _pendingRestore : 1;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
}
@property(assign, nonatomic) MPAVController *player;	// G=0x33ba8e5d; S=0x33ba8e6d; @synthesize=_player
- (id)_currentSnapshot;	// 0x33ba8b5d
- (void)_finishSnapshot:(id)snapshot;	// 0x33ba8ba5
- (void)_restoreOriginalTime;	// 0x33ba8d0d
- (void)_startNextSnapshot;	// 0x33ba8d99
- (void)_takeSnapshot:(id)snapshot;	// 0x33ba8e1d
- (void)_timeDidJump:(id)_time;	// 0x33ba8a95
- (void)cancel;	// 0x33ba8815
- (void)dealloc;	// 0x33ba874d
// declared property getter: - (id)player;	// 0x33ba8e5d
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x33ba8899
- (void)setLayer:(id)layer;	// 0x33ba8a41
// declared property setter: - (void)setPlayer:(id)player;	// 0x33ba8e6d
- (void)setVideoView:(id)view;	// 0x33ba8a85
@end

