/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UILabel, NSTimer, NSString, UIImageView, MPAVController;

@interface MPVolumeSlider : UISlider {
@private
	NSTimer *_commitTimer;	// 132 = 0x84
	MPAVController *_avController;	// 136 = 0x88
	NSString *_volumeAudioCategory;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	UILabel *_routeNameLabel;	// 148 = 0x94
	UIImageView *_thumbImageView;	// 152 = 0x98
	UIImageView *_thumbMaskImageView;	// 156 = 0x9c
}
@property(retain, nonatomic) MPAVController *MPAVController;	// G=0x33bf0625; S=0x33bf0635; 
@property(readonly, assign, nonatomic) int style;	// G=0x33bf1841; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x33bf0745; S=0x33bf07dd; 
- (id)initWithFrame:(CGRect)frame;	// 0x33bef7bd
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x33bef7e9
// declared property getter: - (id)MPAVController;	// 0x33bf0625
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x33bf0861
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x33bf089d
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x33bf08f1
- (void)_commitVolumeChange;	// 0x33bf0cc5
- (void)_endTracking;	// 0x33bf0125
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x33bf0921
- (void)_layoutForAvailableRoutes;	// 0x33bf113d
- (void)_layoutMaskForThumb;	// 0x33bf0f41
- (id)_maxTrackImageForStyle:(int)style;	// 0x33bf0ea5
- (id)_minTrackImageForStyle:(int)style;	// 0x33bf0e09
- (void)_routeNameLabelAnimationDidEnd;	// 0x33bf1801
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x33bf0951
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x33bf0985
- (id)_thumbImageForStyle:(int)style;	// 0x33bf0d89
- (void)_updateVolumeFromAVController;	// 0x33bf0bd9
- (void)_volumeDidChange:(id)_volume;	// 0x33bf0abd
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33befe1d
- (void)cancelTrackingWithEvent:(id)event;	// 0x33bf00e5
- (id)createThumbView;	// 0x33befda5
- (void)dealloc;	// 0x33befa5d
- (void)didMoveToSuperview;	// 0x33bf02cd
- (void)didMoveToWindow;	// 0x33bf0365
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33bf00a5
- (void)layoutSubviews;	// 0x33bf0221
- (float)maximumValue;	// 0x33befc59
- (float)minimumValue;	// 0x33befc55
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33bf03d9
- (void)setAlpha:(float)alpha;	// 0x33bf0501
- (void)setFrame:(CGRect)frame;	// 0x33bf0275
- (void)setHidden:(BOOL)hidden;	// 0x33bf0559
// declared property setter: - (void)setMPAVController:(id)controller;	// 0x33bf0635
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x33bf05b1
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x33bf07dd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33bf0491
// declared property getter: - (int)style;	// 0x33bf1841
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x33befc61
// declared property getter: - (id)volumeAudioCategory;	// 0x33bf0745
@end

