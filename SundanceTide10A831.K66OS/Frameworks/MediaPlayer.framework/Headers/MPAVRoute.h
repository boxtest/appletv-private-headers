/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPAVRoute : NSObject {
	BOOL _displayIsPicked;	// 4 = 0x4
	int _displayRouteType;	// 8 = 0x8
	BOOL _isPicked;	// 12 = 0xc
	BOOL _requiresPassword;	// 13 = 0xd
	unsigned _routeIndex;	// 16 = 0x10
	NSString *_routeName;	// 20 = 0x14
	int _routeType;	// 24 = 0x18
	NSString *_routeUID;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL displayIsPicked;	// G=0x36f49bf5; S=0x36f49c05; @synthesize=_displayIsPicked
@property(assign, nonatomic) int displayRouteType;	// G=0x36f49c15; S=0x36f49c25; @synthesize=_displayRouteType
@property(assign, nonatomic) BOOL isPicked;	// G=0x36f49c35; S=0x36f49c45; @synthesize=_isPicked
@property(readonly, assign, nonatomic) NSString *name;	// G=0x36f49c55; @synthesize=_routeName
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// G=0x36f49c65; @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) unsigned routeIndex;	// G=0x36f49c75; @synthesize=_routeIndex
@property(readonly, assign, nonatomic) int routeType;	// G=0x36f49c85; @synthesize=_routeType
@property(readonly, assign, nonatomic) NSString *routeUID;	// G=0x36f49c95; @synthesize=_routeUID
+ (id)_audioDeviceController;	// 0x36f496b1
+ (id)_availableRoutesFromAudioDeviceController:(id)audioDeviceController forType:(unsigned)type;	// 0x36f4971d
+ (BOOL)availableRoutesExistForType:(unsigned)type;	// 0x36f4937d
+ (id)availableRoutesForType:(unsigned)type;	// 0x36f493a5
+ (id)videoRouteForRoute:(id)route;	// 0x36f493f9
+ (id)wirelessDisplayRouteForRoute:(id)route;	// 0x36f49555
- (id)_initWithName:(id)name routeType:(int)type routeUID:(id)uid routeIndex:(unsigned)index requiresPassword:(BOOL)password;	// 0x36f49169
- (void)dealloc;	// 0x36f49215
// declared property getter: - (BOOL)displayIsPicked;	// 0x36f49bf5
// declared property getter: - (int)displayRouteType;	// 0x36f49c15
- (unsigned)hash;	// 0x36f49279
- (BOOL)isEqual:(id)equal;	// 0x36f492c9
// declared property getter: - (BOOL)isPicked;	// 0x36f49c35
// declared property getter: - (id)name;	// 0x36f49c55
// declared property getter: - (BOOL)requiresPassword;	// 0x36f49c65
// declared property getter: - (unsigned)routeIndex;	// 0x36f49c75
// declared property getter: - (int)routeType;	// 0x36f49c85
// declared property getter: - (id)routeUID;	// 0x36f49c95
// declared property setter: - (void)setDisplayIsPicked:(BOOL)picked;	// 0x36f49c05
// declared property setter: - (void)setDisplayRouteType:(int)type;	// 0x36f49c25
// declared property setter: - (void)setIsPicked:(BOOL)picked;	// 0x36f49c45
@end

