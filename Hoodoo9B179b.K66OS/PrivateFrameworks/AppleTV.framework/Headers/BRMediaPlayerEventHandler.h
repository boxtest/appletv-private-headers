/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRResponder.h"
#import "AppleTV-Structs.h"

@class BRMediaPlayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerEventHandler : NSObject <BRResponder> {
@private
	BRMediaPlayer *_player;	// 4 = 0x4
	BOOL _waitingForUp;	// 8 = 0x8
	BOOL _inChapterSkipMode;	// 9 = 0x9
	double _virtualChapterMark;	// 12 = 0xc
	NSTimer *_chapterSelectionModeTimer;	// 20 = 0x14
	int _preShuttleState;	// 24 = 0x18
	long _shuttleSpeed;	// 28 = 0x1c
	int _shuttleDirection;	// 32 = 0x20
	BOOL _inShuttleMode;	// 36 = 0x24
	BOOL _readyToInitiateShuttle;	// 37 = 0x25
	NSTimer *_shuttleChapterSkipTimer;	// 40 = 0x28
	CGPoint _initialTouchPosition;	// 44 = 0x2c
	CGPoint _lastTouchPosition;	// 52 = 0x34
	CGPoint _lastTouchDelta;	// 60 = 0x3c
	double _shuttleFinishedTime;	// 68 = 0x44
}
+ (id)handlerWithPlayer:(id)player;	// 0x30344ac5
- (id)initWithPlayer:(id)player;	// 0x303449d9
- (BOOL)_changePlayerStateTo:(int)to;	// 0x30346f11
- (BOOL)_changePlayerStateTo:(int)to onButtonDown:(id)down retrigger:(BOOL)retrigger;	// 0x30346fad
- (BOOL)_chapterSkipSupported;	// 0x30347511
- (BOOL)_chapteringSupported;	// 0x30347245
- (BOOL)_defaultEventHandler:(id)handler;	// 0x30344d59
- (void)_endChapterSelectionMode:(id)mode;	// 0x30346661
- (void)_handleAccessibilityOutputForState:(int)state;	// 0x30346cc5
- (BOOL)_handleEventWhileChapterSelecting:(id)selecting;	// 0x303459b1
- (BOOL)_handleEventWhileFF1:(id)a1;	// 0x30345ef1
- (BOOL)_handleEventWhileFF2:(id)a2;	// 0x30345f7d
- (BOOL)_handleEventWhileFF3:(id)a3;	// 0x30346025
- (BOOL)_handleEventWhileLoading:(id)loading;	// 0x303457e9
- (BOOL)_handleEventWhilePaused:(id)paused;	// 0x303456f9
- (BOOL)_handleEventWhilePlaying:(id)playing;	// 0x30345da5
- (BOOL)_handleEventWhileREW1:(id)a1;	// 0x303460cd
- (BOOL)_handleEventWhileREW2:(id)a2;	// 0x30346159
- (BOOL)_handleEventWhileREW3:(id)a3;	// 0x30346201
- (BOOL)_handleEventWhileSlowForward1:(id)a1;	// 0x303462a9
- (BOOL)_handleEventWhileSlowForward2:(id)a2;	// 0x30346335
- (BOOL)_handleEventWhileSlowForward3:(id)a3;	// 0x303463dd
- (BOOL)_handleEventWhileSlowRewind1:(id)a1;	// 0x30346485
- (BOOL)_handleEventWhileSlowRewind2:(id)a2;	// 0x30346511
- (BOOL)_handleEventWhileSlowRewind3:(id)a3;	// 0x303465b9
- (BOOL)_handleForwardEvent:(id)event;	// 0x30344f0d
- (BOOL)_handleLeftEvent:(id)event;	// 0x3034543d
- (BOOL)_handleLeftEventWhileChapterSkipping:(id)skipping;	// 0x3034565d
- (BOOL)_handleRewindEvent:(id)event;	// 0x303450e1
- (BOOL)_handleRightEvent:(id)event;	// 0x303452b9
- (BOOL)_handleRightEventWhileChapterSkipping:(id)skipping;	// 0x303455c1
- (BOOL)_handleTouchEvent:(id)event;	// 0x30347655
- (BOOL)_handleTouchMultiSwipeLeftEvent:(id)event;	// 0x30347aad
- (BOOL)_handleTouchMultiSwipeRightEvent:(id)event;	// 0x30347a49
- (BOOL)_handleTouchSwipeEvent:(id)event;	// 0x303478ed
- (BOOL)_handleTouchSwipeLeftEvent:(id)event;	// 0x303479e5
- (BOOL)_handleTouchSwipeRightEvent:(id)event;	// 0x30347981
- (BOOL)_handleTrickPlayWhileLoading:(id)loading;	// 0x30345965
- (void)_initiateShuttleAction;	// 0x30347b99
- (BOOL)_isFavoriteRadioStation;	// 0x303475ad
- (BOOL)_performNextThingButtonAction:(id)action;	// 0x303467e5
- (BOOL)_performPreviousThingButtonAction:(id)action;	// 0x30346685
- (void)_performShuttle:(long)shuttle;	// 0x30347099
- (void)_performShuttleExit;	// 0x3034702d
- (BOOL)_performSkipBackwardAction:(id)action;	// 0x30346915
- (BOOL)_performSkipForwardAction:(id)action;	// 0x30346859
- (BOOL)_performVolumeDownAction:(id)action;	// 0x30346b59
- (BOOL)_performVolumeUpAction:(id)action;	// 0x303469ed
- (void)_playSoundForState:(int)state;	// 0x30347029
- (void)_playerAssetChanged:(id)changed;	// 0x30344ca5
- (void)_playerStateChanged:(id)changed;	// 0x30344d19
- (void)_setInChapterSkipMode:(BOOL)chapterSkipMode;	// 0x303472ed
- (void)_setShuttleSpeed:(int)speed;	// 0x30347b11
- (void)_touchRepeatCancel;	// 0x30347ce5
- (void)_touchRepeatEvent;	// 0x30347d15
- (BOOL)brEventAction:(id)action;	// 0x30344b8d
- (BOOL)brKeyEvent:(id)event;	// 0x30344c91
- (void)dealloc;	// 0x30344b11
- (BOOL)showingChapterMarks;	// 0x30344c95
@end

