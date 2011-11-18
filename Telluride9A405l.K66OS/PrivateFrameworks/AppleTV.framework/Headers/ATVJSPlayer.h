/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRStateMachine, ATVJSPlayerMoreAssetsSpinnerController, ATVJSContext, BRMediaPlayer, ATVInterstitialGroup;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : NSObject {
@private
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	BRStateMachine *_playlistStateMachine;	// 8 = 0x8
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 12 = 0xc
	ATVJSContext *context;	// 16 = 0x10
	ATVInterstitialGroup *interstitialGroup;	// 20 = 0x14
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x35d9d919; S=0x35d9d929; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x35d9d94d; S=0x35d9d961; @synthesize
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x35d9b6d9
- (void)_loadAssetsActivity;	// 0x35d9c865
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x35d9bbb5
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x35d9c7a1
- (void)_playerPlaybackEnded:(id)ended;	// 0x35d9c839
- (void)_playerPlaybackError:(id)error;	// 0x35d9bc05
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x35d9bdb1
- (void)_playerStallDuringPlayback:(id)playback;	// 0x35d9bcd5
- (void)_playerStartedBuffering:(id)buffering;	// 0x35d9bb0d
- (void)_playerStateChanged:(id)changed;	// 0x35d9b799
- (void)_playerWillStop:(id)_player;	// 0x35d9be25
- (void)_registerPlaylistHandlers;	// 0x35d9ce7d
- (void)_setupSpinnerActivity;	// 0x35d9cd65
- (void)_updateAsset:(id)asset;	// 0x35d9bec5
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x35d9c16d
- (void)_updateEventGroupsNotification:(id)notification;	// 0x35d9c735
// declared property getter: - (id)context;	// 0x35d9d919
// declared property getter: - (id)interstitialGroup;	// 0x35d9d94d
// declared property setter: - (void)setContext:(id)context;	// 0x35d9d929
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x35d9d961
- (void)setup;	// 0x35d9b3d1
- (void)tearDown;	// 0x35d9b631
@end

