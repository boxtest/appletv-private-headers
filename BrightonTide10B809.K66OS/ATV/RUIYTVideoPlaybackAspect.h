/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTPlayerControlling.h"

@class BRControllerStack, RUIYTMediaAsset, RUIYTPlayerMemento, BRMediaPlayer, RUIYTLoadWaitController;
@protocol RUIYTVideoPlaybackAspectDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTVideoPlaybackAspect : XXUnknownSuperclass <RUIYTPlayerControlling> {
	BRControllerStack *_controllerStack;	// 4 = 0x4
	BRMediaPlayer *_player;	// 8 = 0x8
	RUIYTPlayerMemento *_playerMemento;	// 12 = 0xc
	RUIYTLoadWaitController *_loadWaitController;	// 16 = 0x10
	id<RUIYTVideoPlaybackAspectDelegate> _delegate;	// 20 = 0x14
	id _context;	// 24 = 0x18
}
@property(readonly, assign) id context;	// G=0x275379; @synthesize=_context
@property(readonly, assign) RUIYTMediaAsset *currentAsset;	// G=0x274a85; @dynamic
@property(assign, nonatomic) __weak id<RUIYTVideoPlaybackAspectDelegate> delegate;	// G=0x275359; S=0x274a19; @synthesize=_delegate
@property(readonly, assign) BOOL isWaitingForMoreAssets;	// G=0x274a29; @dynamic
- (id)initWithControllerStack:(id)controllerStack;	// 0x2748f9
- (void).cxx_destruct;	// 0x275399
- (BOOL)_haveUserConsentForInappropriateContent;	// 0x275615
- (void)_loadMoreAssets;	// 0x275875
- (void)_mediaPlayerCurrentAssetChanged:(id)changed;	// 0x275b45
- (void)_mediaPlayerPlaybackEnded:(id)ended;	// 0x275bb5
- (void)_mediaPlayerStateChanged:(id)changed;	// 0x275c91
- (id)_player;	// 0x275601
- (id)_playerForAssetAtIndex:(int)index inPlaylist:(id)playlist;	// 0x2757d1
- (void)_presentPlayer;	// 0x275a99
- (void)_pushRelatedMenu;	// 0x2759c5
- (void)_setPlayer:(id)player;	// 0x2754d9
- (void)_setWaitingForMoreAssets:(BOOL)moreAssets;	// 0x275419
- (void)abandonYTPlayback;	// 0x2751c1
- (void)appendAssets:(id)assets;	// 0x274d09
- (BOOL)canResumePlayback;	// 0x274e45
// declared property getter: - (id)context;	// 0x275379
// declared property getter: - (id)currentAsset;	// 0x274a85
- (void)dealloc;	// 0x274961
// declared property getter: - (id)delegate;	// 0x275359
// declared property getter: - (BOOL)isWaitingForMoreAssets;	// 0x274a29
- (void)menuActionForPlayer:(id)player;	// 0x2752c9
- (void)playYTAssetAgain:(id)again;	// 0x275039
- (void)playbackAsset:(id)asset context:(id)context;	// 0x274b01
- (void)playbackAssetAtIndex:(int)index inPlaylist:(id)playlist context:(id)context;	// 0x274bad
- (void)resumeYTPlayback;	// 0x274ffd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x274a19
@end
