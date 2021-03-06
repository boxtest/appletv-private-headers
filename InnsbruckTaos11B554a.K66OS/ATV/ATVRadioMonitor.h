/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRadioMonitor : XXUnknownSuperclass {
	BOOL _disableiAdEngineSelectorScheduled;	// 4 = 0x4
	BOOL _radioAppActive;	// 5 = 0x5
	BOOL _displayingStillListeningDialog;	// 6 = 0x6
	NSTimer *_playbackPausedTimer;	// 8 = 0x8
	NSTimer *_stillListeningPresentationTimer;	// 12 = 0xc
	NSTimer *_stillListeningDismissalTimer;	// 16 = 0x10
	NSTimer *_holdOffScreenSaverTimer;	// 20 = 0x14
	NSDate *_lastUserActionDate;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isDisplayingStillListeningDialog) BOOL displayingStillListeningDialog;	// G=0x330fb5; S=0x330fc5; @synthesize=_displayingStillListeningDialog
@property(assign, nonatomic) __weak NSTimer *holdOffScreenSaverTimer;	// G=0x330f49; S=0x330f69; @synthesize=_holdOffScreenSaverTimer
@property(retain, nonatomic) NSDate *lastUserActionDate;	// G=0x330f7d; S=0x330f8d; @synthesize=_lastUserActionDate
@property(assign, nonatomic) __weak NSTimer *playbackPausedTimer;	// G=0x330ead; S=0x330ecd; @synthesize=_playbackPausedTimer
@property(assign, nonatomic) BOOL radioAppActive;	// G=0x330e9d; S=0x32f385; @synthesize=_radioAppActive
@property(assign, nonatomic) __weak NSTimer *stillListeningDismissalTimer;	// G=0x330f15; S=0x330f35; @synthesize=_stillListeningDismissalTimer
@property(assign, nonatomic) __weak NSTimer *stillListeningPresentationTimer;	// G=0x330ee1; S=0x330f01; @synthesize=_stillListeningPresentationTimer
+ (id)sharedInstance;	// 0x32f091
- (id)init;	// 0x32f10d
- (void).cxx_destruct;	// 0x330fd5
- (void)_assetPlayedToEnd:(id)end;	// 0x32ff99
- (void)_dataClientStatusChanged:(id)changed;	// 0x32f4dd
- (void)_deviceWillSleep:(id)_device;	// 0x32f73d
- (void)_deviceWillWakeup:(id)_device;	// 0x32f759
- (void)_disableIAdEngineImmediate:(id)immediate;	// 0x32f951
- (void)_disableIAdEngineWithDelay:(id)delay;	// 0x32f7e9
- (void)_dismissScreenSaver;	// 0x3302d5
- (void)_dismissStillListeningDialog;	// 0x330dc5
- (void)_enableIAdEngineImmediate:(id)immediate;	// 0x32faa5
- (void)_holdOffScreenSaver;	// 0x330189
- (void)_holdOffTimerFired:(id)fired;	// 0x330255
- (void)_playbackPausedTimerFired:(id)fired;	// 0x3300f9
- (void)_playerMediaCued:(id)cued;	// 0x32ff69
- (void)_playerStateChanged:(id)changed;	// 0x32f56d
- (void)_playerStateDidChangeToState:(int)_playerState;	// 0x32fbf9
- (void)_presentStillListeningDialog;	// 0x330849
- (void)_resumePlayback;	// 0x330551
- (void)_scheduleStillListeningPresentationTimerIfNeeded;	// 0x33058d
- (void)_stillListeningDismissalTimerFired:(id)fired;	// 0x330159
- (void)_stillListeningPresentationTimerFired:(id)fired;	// 0x330129
- (void)_stopPlayback;	// 0x3304c5
- (void)_userActionOccurred:(id)occurred;	// 0x32fe29
- (void)dealloc;	// 0x32f319
// declared property getter: - (id)holdOffScreenSaverTimer;	// 0x330f49
// declared property getter: - (BOOL)isDisplayingStillListeningDialog;	// 0x330fb5
// declared property getter: - (id)lastUserActionDate;	// 0x330f7d
// declared property getter: - (id)playbackPausedTimer;	// 0x330ead
- (id)player;	// 0x330471
// declared property getter: - (BOOL)radioAppActive;	// 0x330e9d
// declared property setter: - (void)setDisplayingStillListeningDialog:(BOOL)dialog;	// 0x330fc5
// declared property setter: - (void)setHoldOffScreenSaverTimer:(id)timer;	// 0x330f69
// declared property setter: - (void)setLastUserActionDate:(id)date;	// 0x330f8d
// declared property setter: - (void)setPlaybackPausedTimer:(id)timer;	// 0x330ecd
// declared property setter: - (void)setRadioAppActive:(BOOL)active;	// 0x32f385
// declared property setter: - (void)setStillListeningDismissalTimer:(id)timer;	// 0x330f35
// declared property setter: - (void)setStillListeningPresentationTimer:(id)timer;	// 0x330f01
- (void)startingPlaybackOperation:(id)operation;	// 0x32f481
// declared property getter: - (id)stillListeningDismissalTimer;	// 0x330f15
// declared property getter: - (id)stillListeningPresentationTimer;	// 0x330ee1
@end

