/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class CALayer, MPVideoBufferLayerContainer, NSString, MPAVController, MPMovieSnapshotController;

@interface MPVideoView : UIView {
	MPAVController *_player;	// 48 = 0x30
	UIView *_videoBufferContainerView;	// 52 = 0x34
	MPVideoBufferLayerContainer *_videoBufferContainerLayer;	// 56 = 0x38
	CALayer *_videoBufferLayer;	// 60 = 0x3c
	MPMovieSnapshotController *_snapshotController;	// 64 = 0x40
	NSString *_moviePath;	// 68 = 0x44
	NSString *_movieSubtitle;	// 72 = 0x48
	NSString *_movieTitle;	// 76 = 0x4c
	NSString *_videoID;	// 80 = 0x50
	unsigned _scaleMode;	// 84 = 0x54
	double _startTime;	// 88 = 0x58
	double _stopTime;	// 96 = 0x60
	unsigned _effectiveScaleMode;	// 104 = 0x68
	unsigned _disableFudgingScaleToFullScreen : 1;	// 108 = 0x6c
	unsigned _requiresIntegralScreenFrame : 1;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x319f9d09; 
@property(assign) double currentTime;	// G=0x319fb5e9; S=0x319fb715; converted property
@property(assign, nonatomic) unsigned effectiveScaleMode;	// G=0x319fb449; S=0x319fb459; @synthesize=_effectiveScaleMode
@property(readonly, assign, nonatomic) CGRect movieFrame;	// G=0x319fa455; 
@property(readonly, retain) NSString *moviePath;	// G=0x319f9df5; converted property
@property(retain, nonatomic) NSString *movieSubtitle;	// G=0x319f9e05; S=0x319fb469; @synthesize=_movieSubtitle
@property(retain, nonatomic) NSString *movieTitle;	// G=0x319fb48d; S=0x319fb49d; @synthesize=_movieTitle
@property(assign, nonatomic) MPAVController *player;	// G=0x319fb4c1; S=0x319fb4d1; @synthesize=_player
@property(assign, nonatomic) BOOL requiresIntegralScreenFrame;	// G=0x319fa419; S=0x319fa42d; 
@property(assign, nonatomic) unsigned scaleMode;	// G=0x319fb4e1; S=0x319fa271; @synthesize=_scaleMode
@property(assign, nonatomic) double startTime;	// G=0x319fb4f1; S=0x319fb509; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x319fb51d; S=0x319fb535; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x319fb549; S=0x319fb559; @synthesize=_videoID
- (id)initWithFrame:(CGRect)frame;	// 0x319f971d
- (void)_AddVideoBufferLayerToViewHierarchyAndHideIfNecessary;	// 0x319fafa1
- (BOOL)_allowFudgingScaleToFullScreen;	// 0x319fa855
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x319fa4f9
- (BOOL)_isCloseToFullScreenWithTransform:(CGAffineTransform)transform;	// 0x319fa80d
- (BOOL)_isExactlyFullScreenWithTransform:(CGAffineTransform)transform;	// 0x319fa7c5
- (void)_itemWillChangeNotification:(id)_item;	// 0x319fa541
- (void)_layoutSublayers;	// 0x319faa6d
- (void)_layoutVideoLayers:(BOOL)layers;	// 0x319faa81
- (void)_playbackStateChangedNotification:(id)notification;	// 0x319fa551
- (void)_sizeDidChangedNotification:(id)_size;	// 0x319fa609
- (BOOL)_sizeDifferenceFromFullScreenIsLessThan:(CGSize)fullScreenIsLessThan allowingZero:(BOOL)zero withTransform:(CGAffineTransform)transform;	// 0x319fa8cd
- (void)_validityChangedNotification:(id)notification;	// 0x319fa639
- (void)addSubview:(id)subview;	// 0x319fb1a1
- (id)avPlayer;	// 0x319fb591
- (void)bringSubviewToFront:(id)front;	// 0x319fb1f5
- (int)bufferingStatusMask;	// 0x319fb5c9
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x319f9d09
- (void)cancelSnapshots;	// 0x319fa69d
// converted property getter: - (double)currentTime;	// 0x319fb5e9
- (void)dealloc;	// 0x319f9ae1
- (double)duration;	// 0x319fb609
// declared property getter: - (unsigned)effectiveScaleMode;	// 0x319fb449
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x319fb14d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x319fb2c5
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x319fb0f9
- (void)insertSubview:(id)subview below:(id)below;	// 0x319fb249
// declared property getter: - (CGRect)movieFrame;	// 0x319fa455
// converted property getter: - (id)moviePath;	// 0x319f9df5
// declared property getter: - (id)movieSubtitle;	// 0x319f9e05
// declared property getter: - (id)movieTitle;	// 0x319fb48d
- (id)mpavController;	// 0x319fb57d
- (void)pause;	// 0x319fb6d5
- (void)play;	// 0x319fa231
- (void)play;	// 0x319fb6f5
- (void)playFromBeginning;	// 0x319fa1c9
- (void)playWhenLikelyToKeepUp;	// 0x319fa189
- (int)playableContentType;	// 0x319fb641
- (int)playbackState;	// 0x319fb689
// declared property getter: - (id)player;	// 0x319fb4c1
- (void)prepareAVControllerQueue;	// 0x319f9e89
- (void)prepareToDisplayVideo;	// 0x319fa08d
// declared property getter: - (BOOL)requiresIntegralScreenFrame;	// 0x319fa419
// declared property getter: - (unsigned)scaleMode;	// 0x319fb4e1
- (void)scheduleThumbnailWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x319fa6f5
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x319fb715
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x319fb739
// declared property setter: - (void)setEffectiveScaleMode:(unsigned)mode;	// 0x319fb459
- (void)setFrame:(CGRect)frame;	// 0x319fb321
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x319fb469
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x319fb49d
- (void)setMovieWithPath:(id)path;	// 0x319fa09d
- (void)setNeedsDisplay;	// 0x319fb369
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x319fb3c1
// declared property setter: - (void)setPlayer:(id)player;	// 0x319fb4d1
- (void)setRepeatMode:(int)mode;	// 0x319fb77d
// declared property setter: - (void)setRequiresIntegralScreenFrame:(BOOL)frame;	// 0x319fa42d
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x319fa271
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x319fa3b1
- (void)setScaleMode:(unsigned)mode duration:(float)duration;	// 0x319fa285
// declared property setter: - (void)setStartTime:(double)time;	// 0x319fb509
// declared property setter: - (void)setStopTime:(double)time;	// 0x319fb535
// declared property setter: - (void)setVideoID:(id)anId;	// 0x319fb559
// declared property getter: - (double)startTime;	// 0x319fb4f1
- (void)stop;	// 0x319fb79d
// declared property getter: - (double)stopTime;	// 0x319fb51d
- (void)toggleScaleMode:(BOOL)mode;	// 0x319fa3e1
// declared property getter: - (id)videoID;	// 0x319fb549
- (id)viewWithTag:(int)tag;	// 0x319fb29d
@end
