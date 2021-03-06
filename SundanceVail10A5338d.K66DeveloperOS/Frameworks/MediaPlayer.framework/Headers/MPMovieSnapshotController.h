/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPAVController, CALayer, MPVideoView, NSMutableArray;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
	NSMutableArray *_pendingSnapshots;	// 16 = 0x10
	unsigned _expectingTimeJump : 1;	// 20 = 0x14
	unsigned _pendingRestore : 1;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
}
@property(assign, nonatomic) MPAVController *player;	// G=0x3413f91d; S=0x3413f92d; @synthesize=_player
- (id)_currentSnapshot;	// 0x3413f629
- (void)_finishSnapshot:(id)snapshot;	// 0x3413f66d
- (void)_restoreOriginalTime;	// 0x3413f7d5
- (void)_startNextSnapshot;	// 0x3413f859
- (void)_takeSnapshot:(id)snapshot;	// 0x3413f8dd
- (void)_timeDidJump:(id)_time;	// 0x3413f559
- (void)cancel;	// 0x3413f2c9
- (void)dealloc;	// 0x3413f201
// declared property getter: - (id)player;	// 0x3413f91d
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x3413f349
- (void)setLayer:(id)layer;	// 0x3413f505
// declared property setter: - (void)setPlayer:(id)player;	// 0x3413f92d
- (void)setVideoView:(id)view;	// 0x3413f549
@end

