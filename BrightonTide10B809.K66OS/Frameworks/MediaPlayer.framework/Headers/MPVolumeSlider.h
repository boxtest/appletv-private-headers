/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UIView, UIImageView, NSString, NSTimer, UILabel, MPAVController;

@interface MPVolumeSlider : UISlider {
	NSTimer *_commitTimer;	// 172 = 0xac
	MPAVController *_player;	// 176 = 0xb0
	UILabel *_routeNameLabel;	// 180 = 0xb4
	int _style;	// 184 = 0xb8
	UIImageView *_thumbImageView;	// 188 = 0xbc
	UIImageView *_thumbMaskImageView;	// 192 = 0xc0
	NSString *_volumeAudioCategory;	// 196 = 0xc4
	BOOL _isOffScreen;	// 200 = 0xc8
	BOOL _volumeWarningEnabled;	// 201 = 0xc9
	UIView *_volumeWarningView;	// 204 = 0xcc
	int _volumeWarningState;	// 208 = 0xd0
	float _EUVolumeLimit;	// 212 = 0xd4
	BOOL _volumeWarningBlinking;	// 216 = 0xd8
}
@property(assign, nonatomic, setter=_setIsOffScreen:) BOOL _isOffScreen;	// G=0x31cf90b9; S=0x31cf785d; @synthesize
@property(retain, nonatomic) MPAVController *player;	// G=0x31cf7531; S=0x31cf7541; 
@property(readonly, assign, nonatomic) int style;	// G=0x31cf90a9; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x31cf770d; S=0x31cf77d9; 
- (id)initWithFrame:(CGRect)frame;	// 0x31cf6179
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31cf61a5
- (void)_EUVolumeLimitDidChange:(id)_EUVolumeLimit;	// 0x31cf7d89
- (void)_EUVolumeLimitEnforcedDidChange:(id)_EUVolumeLimitEnforced;	// 0x31cf7df5
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x31cf78ad
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x31cf7901
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31cf799d
- (void)_beginBlinkingWarningView;	// 0x31cf8fb1
- (void)_blinkWarningView;	// 0x31cf8fd1
- (void)_commitVolumeChange;	// 0x31cf808d
- (void)_endBlinkingWarningView;	// 0x31cf9059
- (void)_endTracking;	// 0x31cf7029
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)_isExternalPlaybackActive;	// 0x31cf79cd
// declared property getter: - (BOOL)_isOffScreen;	// 0x31cf90b9
- (BOOL)_isPlayerInValidState;	// 0x31cf7e85
- (void)_layoutForAvailableRoutes;	// 0x31cf8581
- (void)_layoutMaskForThumb;	// 0x31cf8341
- (void)_layoutVolumeWarningView;	// 0x31cf8c61
- (id)_maxTrackImageForStyle:(int)style;	// 0x31cf82a1
- (id)_minTrackImageForStyle:(int)style;	// 0x31cf8201
- (void)_routeNameLabelAnimationDidEnd;	// 0x31cf8f75
// declared property setter: - (void)_setIsOffScreen:(BOOL)screen;	// 0x31cf785d
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x31cf79fd
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x31cf7a35
- (id)_thumbImageForStyle:(int)style;	// 0x31cf8169
- (void)_updateVolumeFromAVController;	// 0x31cf7fbd
- (void)_volumeDidChange:(id)_volume;	// 0x31cf7c61
- (float)_volumeFromAVController;	// 0x31cf7ed1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31cf6b91
- (void)cancelTrackingWithEvent:(id)event;	// 0x31cf6fe9
- (id)createThumbView;	// 0x31cf675d
- (void)dealloc;	// 0x31cf6515
- (void)didMoveToSuperview;	// 0x31cf71dd
- (void)didMoveToWindow;	// 0x31cf727d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31cf6f09
- (void)layoutSubviews;	// 0x31cf7121
- (float)maximumValue;	// 0x31cf6839
- (float)minimumValue;	// 0x31cf6841
// declared property getter: - (id)player;	// 0x31cf7531
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31cf72f1
- (void)setAlpha:(float)alpha;	// 0x31cf740d
- (void)setFrame:(CGRect)frame;	// 0x31cf7185
- (void)setHidden:(BOOL)hidden;	// 0x31cf7465
// declared property setter: - (void)setPlayer:(id)player;	// 0x31cf7541
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x31cf74bd
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x31cf6845
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x31cf77d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31cf73a9
// declared property getter: - (int)style;	// 0x31cf90a9
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x31cf69d5
// declared property getter: - (id)volumeAudioCategory;	// 0x31cf770d
@end

