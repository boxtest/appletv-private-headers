/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRResponder.h"

@class NSTimer, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerEventHandler : NSObject <BRResponder> {
@private
	BRMediaPlayer *_player;	// 4 = 0x4
	BOOL _waitingForUp;	// 8 = 0x8
	BOOL _inChapterSkipMode;	// 9 = 0x9
	double _virtualChapterMark;	// 12 = 0xc
	NSTimer *_chapterSelectionModeTimer;	// 20 = 0x14
	int _preShuttleState;	// 24 = 0x18
	int _shuttleSpeed;	// 28 = 0x1c
	int _shuttleDirection;	// 32 = 0x20
	BOOL _inShuttleMode;	// 36 = 0x24
	BOOL _readyToInitiateShuttle;	// 37 = 0x25
	NSTimer *_shuttleChapterSkipTimer;	// 40 = 0x28
	CGPoint _initialTouchPosition;	// 44 = 0x2c
	CGPoint _lastTouchPosition;	// 52 = 0x34
	CGPoint _lastTouchDelta;	// 60 = 0x3c
	double _shuttleFinishedTime;	// 68 = 0x44
}
+ (id)handlerWithPlayer:(id)player;	// 0x32950e91
- (id)initWithPlayer:(id)player;	// 0x32950ed5
- (BOOL)_changePlayerStateTo:(int)to;	// 0x3294ef69
- (BOOL)_changePlayerStateTo:(int)to onButtonDown:(id)down retrigger:(BOOL)retrigger;	// 0x3294eeed
- (BOOL)_chapterSkipSupported;	// 0x3294eca9
- (BOOL)_chapteringSupported;	// 0x3294ed31
- (BOOL)_defaultEventHandler:(id)handler;	// 0x32950b0d
- (void)_endChapterSelectionMode:(id)mode;	// 0x3294f4b5
- (void)_handleAccessibilityOutputForState:(int)state;	// 0x32950fa1
- (BOOL)_handleEventWhileChapterSelecting:(id)selecting;	// 0x3294fd11
- (BOOL)_handleEventWhileFF1:(id)a1;	// 0x3294fb51
- (BOOL)_handleEventWhileFF2:(id)a2;	// 0x3294fab5
- (BOOL)_handleEventWhileFF3:(id)a3;	// 0x3294fa19
- (BOOL)_handleEventWhileLoading:(id)loading;	// 0x32950131
- (BOOL)_handleEventWhilePaused:(id)paused;	// 0x3295024d
- (BOOL)_handleEventWhilePlaying:(id)playing;	// 0x3294fbd9
- (BOOL)_handleEventWhileREW1:(id)a1;	// 0x3294f991
- (BOOL)_handleEventWhileREW2:(id)a2;	// 0x3294f8f5
- (BOOL)_handleEventWhileREW3:(id)a3;	// 0x3294f859
- (BOOL)_handleEventWhileSlowForward1:(id)a1;	// 0x3294f7d1
- (BOOL)_handleEventWhileSlowForward2:(id)a2;	// 0x3294f735
- (BOOL)_handleEventWhileSlowForward3:(id)a3;	// 0x3294f699
- (BOOL)_handleEventWhileSlowRewind1:(id)a1;	// 0x3294f611
- (BOOL)_handleEventWhileSlowRewind2:(id)a2;	// 0x3294f575
- (BOOL)_handleEventWhileSlowRewind3:(id)a3;	// 0x3294f4d9
- (BOOL)_handleForwardEvent:(id)event;	// 0x32950955
- (BOOL)_handleLeftEvent:(id)event;	// 0x329504dd
- (BOOL)_handleLeftEventWhileChapterSkipping:(id)skipping;	// 0x3295032d
- (BOOL)_handleRewindEvent:(id)event;	// 0x3295079d
- (BOOL)_handleRightEvent:(id)event;	// 0x3295063d
- (BOOL)_handleRightEventWhileChapterSkipping:(id)skipping;	// 0x32950405
- (BOOL)_handleTouchEvent:(id)event;	// 0x329514c5
- (BOOL)_handleTouchMultiSwipeLeftEvent:(id)event;	// 0x3294ea21
- (BOOL)_handleTouchMultiSwipeRightEvent:(id)event;	// 0x3294ea7d
- (BOOL)_handleTouchSwipeEvent:(id)event;	// 0x3294eb99
- (BOOL)_handleTouchSwipeLeftEvent:(id)event;	// 0x3294ead9
- (BOOL)_handleTouchSwipeRightEvent:(id)event;	// 0x3294eb39
- (BOOL)_handleTrickPlayWhileLoading:(id)loading;	// 0x329500e1
- (void)_initiateShuttleAction;	// 0x3294e85d
- (BOOL)_isFavoriteRadioStation;	// 0x3294ec11
- (BOOL)_performNextThingButtonAction:(id)action;	// 0x3294f44d
- (BOOL)_performPreviousThingButtonAction:(id)action;	// 0x3295135d
- (void)_performShuttle:(long)shuttle;	// 0x3294edc9
- (void)_performShuttleExit;	// 0x3294ee91
- (BOOL)_performSkipBackwardAction:(id)action;	// 0x3294f2dd
- (BOOL)_performSkipForwardAction:(id)action;	// 0x3294f3a5
- (BOOL)_performVolumeDownAction:(id)action;	// 0x3294eff5
- (BOOL)_performVolumeUpAction:(id)action;	// 0x3294f169
- (void)_playSoundForState:(int)state;	// 0x3294e7f9
- (void)_playerAssetChanged:(id)changed;	// 0x32950cd9
- (void)_playerStateChanged:(id)changed;	// 0x32950ca5
- (void)_setInChapterSkipMode:(BOOL)chapterSkipMode;	// 0x3295116d
- (void)_setShuttleSpeed:(int)speed;	// 0x3294e995
- (void)_touchRepeatCancel;	// 0x3294e831
- (void)_touchRepeatEvent;	// 0x3294e7fd
- (BOOL)brEventAction:(id)action;	// 0x32950d3d
- (BOOL)brKeyEvent:(id)event;	// 0x3294e7e5
- (void)dealloc;	// 0x32950e21
- (BOOL)showingChapterMarks;	// 0x3294e7e9
@end
