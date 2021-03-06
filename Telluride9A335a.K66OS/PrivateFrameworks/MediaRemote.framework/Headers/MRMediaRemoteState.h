/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSData;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteState : NSObject {
@private
	BOOL _canBeNowPlayingApp;	// 4 = 0x4
	id _commandHandlerBlock;	// 8 = 0x8
	BOOL _includeVideoRoutes;	// 12 = 0xc
	BOOL _isOverrideApp;	// 13 = 0xd
	int _notifyLaunchedToken;	// 16 = 0x10
	NSData *_nowPlayingArtworkData;	// 20 = 0x14
	NSDictionary *_nowPlayingInfo;	// 24 = 0x18
	unsigned _routeDiscoveryCount;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL canBeNowPlayingApp;	// G=0x35889029; S=0x35889039; @synthesize=_canBeNowPlayingApp
@property(copy, nonatomic) id commandHandlerBlock;	// G=0x35889019; S=0x35889091; @synthesize=_commandHandlerBlock
@property(assign, nonatomic) BOOL includeVideoRoutes;	// G=0x35888ff9; S=0x35889009; @synthesize=_includeVideoRoutes
@property(assign, nonatomic) BOOL isOverrideApp;	// G=0x35888fd9; S=0x35888fe9; @synthesize=_isOverrideApp
@property(retain, nonatomic) NSData *nowPlayingArtworkData;	// G=0x35888fc9; S=0x358890b5; @synthesize=_nowPlayingArtworkData
@property(retain, nonatomic) NSDictionary *nowPlayingInfo;	// G=0x35888fb9; S=0x358890dd; @synthesize=_nowPlayingInfo
- (id)init;	// 0x3588933d
- (void)_avSystemControllerServerConnectionDiedNotification:(id)notification;	// 0x35889105
- (void)beginRouteDiscovery;	// 0x35888f8d
// declared property getter: - (BOOL)canBeNowPlayingApp;	// 0x35889029
// declared property getter: - (id)commandHandlerBlock;	// 0x35889019
- (void)dealloc;	// 0x3588926d
- (void)endRouteDiscovery;	// 0x35888fa1
// declared property getter: - (BOOL)includeVideoRoutes;	// 0x35888ff9
// declared property getter: - (BOOL)isOverrideApp;	// 0x35888fd9
// declared property getter: - (id)nowPlayingArtworkData;	// 0x35888fc9
// declared property getter: - (id)nowPlayingInfo;	// 0x35888fb9
// declared property setter: - (void)setCanBeNowPlayingApp:(BOOL)app;	// 0x35889039
// declared property setter: - (void)setCommandHandlerBlock:(id)block;	// 0x35889091
// declared property setter: - (void)setIncludeVideoRoutes:(BOOL)routes;	// 0x35889009
// declared property setter: - (void)setIsOverrideApp:(BOOL)app;	// 0x35888fe9
// declared property setter: - (void)setNowPlayingArtworkData:(id)data;	// 0x358890b5
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x358890dd
@end

