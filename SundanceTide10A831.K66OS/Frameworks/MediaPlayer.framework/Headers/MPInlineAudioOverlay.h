/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPPlaybackControlsView.h"
#import "MediaPlayer-Structs.h"

@class UILabel, UIImageView, MPInlineAudioTransportControls, NSString;
@protocol MPVideoControllerProtocol;

@interface MPInlineAudioOverlay : MPPlaybackControlsView {
	id<MPVideoControllerProtocol> _videoViewController;	// 188 = 0xbc
	int _style;	// 192 = 0xc0
	UIView *_backgroundView;	// 196 = 0xc4
	MPInlineAudioTransportControls *_transportControls;	// 200 = 0xc8
	UILabel *_streamingLabel;	// 204 = 0xcc
	NSString *_playbackErrorDescription;	// 208 = 0xd0
	UILabel *_playbackErrorDescriptionLabel;	// 212 = 0xd4
	UIImageView *_leftImageView;	// 216 = 0xd8
	UIImageView *_trackImageView;	// 220 = 0xdc
	UIImageView *_leftStretchImageView;	// 224 = 0xe0
	UIImageView *_rightStretchImageView;	// 228 = 0xe4
	UIImageView *_rightImageView;	// 232 = 0xe8
	UIImageView *_largeLeftImageView;	// 236 = 0xec
	UIImageView *_largeMiddleLeftImageView;	// 240 = 0xf0
	UIImageView *_largeTrackImageView;	// 244 = 0xf4
	UIImageView *_largeMiddleRightImageView;	// 248 = 0xf8
	UIImageView *_largeRightImageView;	// 252 = 0xfc
}
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x36f2ca5d; S=0x36f2c5d9; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int style;	// G=0x36f2ca71; S=0x36f2c371; @synthesize=_style
@property(assign, nonatomic) id<MPVideoControllerProtocol> videoViewController;	// G=0x36f2ca81; S=0x36f2c6e9; @synthesize=_videoViewController
- (id)initWithFrame:(CGRect)frame;	// 0x36f2a56d
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x36f2c2fd
- (CGRect)_frameInBackgroundViewForDescriptionLabel:(id)descriptionLabel;	// 0x36f2c92d
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x36f2c32d
- (id)_newDescriptionLabel;	// 0x36f2c805
- (void)_updateVisiblePartsForAvailableRoutes;	// 0x36f2c779
- (void)dealloc;	// 0x36f2a65d
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)partMask;	// 0x36f2c271
- (void)layoutSubviews;	// 0x36f2a845
- (id)newProgressIndicator;	// 0x36f2c025
// declared property getter: - (id)playbackErrorDescription;	// 0x36f2ca5d
- (void)reloadView;	// 0x36f2c1f1
- (void)setCurrentTime:(double)time;	// 0x36f2c0d1
- (void)setItem:(id)item;	// 0x36f2c195
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x36f2c5d9
- (void)setPlayer:(id)player;	// 0x36f2c2a9
// declared property setter: - (void)setStyle:(int)style;	// 0x36f2c371
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x36f2c6e9
// declared property getter: - (int)style;	// 0x36f2ca71
// declared property getter: - (id)videoViewController;	// 0x36f2ca81
@end
