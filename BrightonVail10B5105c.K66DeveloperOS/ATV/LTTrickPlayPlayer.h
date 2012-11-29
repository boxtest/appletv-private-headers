/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class LTTrickPlayAsset, NSTimer, NSMutableDictionary, LTAVPlayer, LTSkipAssetVisualControl;

__attribute__((visibility("hidden")))
@interface LTTrickPlayPlayer : XXUnknownSuperclass {
	NSTimer *_playTimer;	// 4 = 0x4
	NSTimer *_highFreqProgressTimer;	// 8 = 0x8
	double _timeIntervalOfLastHighFreqUpdate;	// 12 = 0xc
	int _preferredTimeScale;	// 20 = 0x14
	double _forwardPlaybackEndTime;	// 24 = 0x18
	double _reversePlaybackEndTime;	// 32 = 0x20
	BOOL _didSetLayerContents;	// 40 = 0x28
	LTTrickPlayAsset *_asset;	// 44 = 0x2c
	LTSkipAssetVisualControl *_visuals;	// 48 = 0x30
	float _rate;	// 52 = 0x34
	double _previousTimeIntervalCheck;	// 56 = 0x38
	double _currentTimeInterval;	// 64 = 0x40
	NSMutableDictionary *_cachedChapterImageProxies;	// 72 = 0x48
	LTAVPlayer *_avPlayer;	// 76 = 0x4c
}
@property(readonly, retain) LTAVPlayer *avPlayer;	// G=0x5952d; converted property
@property(assign) float rate;	// G=0x59749; S=0x59591; converted property
@property(readonly, retain) LTSkipAssetVisualControl *visuals;	// G=0x59815; converted property
+ (id)trickPlayerWithAsset:(id)asset;	// 0x59361
- (id)initWithTrickPlayAsset:(id)trickPlayAsset;	// 0x593f5
- (void).cxx_destruct;	// 0x5982d
- (void)_checkAtEitherEndOfPlayback;	// 0x59951
- (BOOL)_hasChapterImages;	// 0x5a161
- (void)_highFreqProgressTimerFired:(id)fired;	// 0x5a08d
- (void)_postUpdateProgress;	// 0x598b1
- (void)_resetVisuals;	// 0x59b49
- (double)_timeAdjustedForInterstitials:(double)interstitials;	// 0x59c5d
- (void)_updatePlayer:(id)player;	// 0x59d2d
// converted property getter: - (id)avPlayer;	// 0x5952d
- (void)bufferAheadFromTime:(XXStruct_pwHToB)time;	// 0x59829
- (XXStruct_pwHToB)currentTime;	// 0x597e5
- (void)invalidate;	// 0x594e9
// converted property getter: - (float)rate;	// 0x59749
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x59759
- (void)setAVPlayer:(id)player;	// 0x59541
- (void)setForwardPlaybackEndTime:(double)time;	// 0x59569
// converted property setter: - (void)setRate:(float)rate;	// 0x59591
- (void)setReversePlaybackEndTime:(double)time;	// 0x5957d
// converted property getter: - (id)visuals;	// 0x59815
@end
