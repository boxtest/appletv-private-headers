/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import </libobjc.A.h>

@class MPAVItem, NSURL, AVAsset;

@interface MPMovie : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	int _movieSourceType;	// 12 = 0xc
	double _startPlaybackTime;	// 16 = 0x10
	double _endPlaybackTime;	// 24 = 0x18
	BOOL _explicitlySetMovieSourceType;	// 32 = 0x20
	BOOL _movieIsUnplayable;	// 33 = 0x21
	double _lastKnownDuration;	// 36 = 0x24
	CGSize _lastKnownNaturalSize;	// 44 = 0x2c
	unsigned _lastKnownType;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x2e2d9639; 
@property(readonly, assign, nonatomic) double duration;	// G=0x2e2d9769; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x2e2d988d; S=0x2e2d9879; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x2e2d969d; 
@property(assign, nonatomic) int movieSourceType;	// G=0x2e2d9759; S=0x2e2d96dd; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x2e2d97f9; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x2e2d97b1; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x2e2d9861; S=0x2e2d984d; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x2e2d9689; 
+ (id)movieWithAsset:(id)asset error:(id *)error;	// 0x2e2d927d
+ (id)movieWithURL:(id)url options:(id)options error:(id *)error;	// 0x2e2d9209
- (void).cxx_destruct;	// 0x2e2d9f01
- (id)_MPArrayQueueItem;	// 0x2e2d9ad9
- (void)_determineMediaType;	// 0x2e2d9b89
- (void)_durationAvailableNotification:(id)notification;	// 0x2e2d98a9
- (id)_initWithAsset:(id)asset error:(id *)error;	// 0x2e2d92d9
- (id)_initWithURL:(id)url options:(id)options error:(id *)error;	// 0x2e2d9371
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x2e2d9959
- (void)_sharedInit;	// 0x2e2d9445
- (void)_typeAvailableNotification:(id)notification;	// 0x2e2d9a3d
// declared property getter: - (id)asset;	// 0x2e2d9639
- (void)dealloc;	// 0x2e2d9575
// declared property getter: - (double)duration;	// 0x2e2d9769
// declared property getter: - (double)endPlaybackTime;	// 0x2e2d988d
// declared property getter: - (int)movieMediaTypes;	// 0x2e2d969d
// declared property getter: - (int)movieSourceType;	// 0x2e2d9759
// declared property getter: - (CGSize)naturalSize;	// 0x2e2d97f9
// declared property getter: - (double)playableDuration;	// 0x2e2d97b1
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x2e2d9879
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x2e2d96dd
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x2e2d984d
// declared property getter: - (double)startPlaybackTime;	// 0x2e2d9861
// declared property getter: - (id)url;	// 0x2e2d9689
@end

