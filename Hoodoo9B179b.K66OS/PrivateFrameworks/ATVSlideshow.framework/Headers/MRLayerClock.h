/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MRLayerClock : NSObject {
	double _time;	// 4 = 0x4
	double _layerDuration;	// 12 = 0xc
	double _containerTime;	// 20 = 0x14
	double _containerDuration;	// 28 = 0x1c
	double _localTimeOffset;	// 36 = 0x24
	double _stopAtTime;	// 44 = 0x2c
	int _currentLoopIndex;	// 52 = 0x34
	unsigned _flags;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) double containerDuration;	// G=0x3553d17d; @synthesize=_containerDuration
@property(readonly, assign, nonatomic) double croppedContainerTime;	// G=0x3553d065; 
@property(readonly, assign, nonatomic) int currentLoopIndex;	// G=0x3553d1ed; @synthesize=_currentLoopIndex
@property(readonly, assign, nonatomic) double extendedContainerTime;	// G=0x3553d165; @synthesize=_containerTime
@property(readonly, assign, nonatomic) BOOL isInPhaseIn;	// G=0x3553d0e5; 
@property(readonly, assign, nonatomic) BOOL isInPhaseOut;	// G=0x3553d0f9; 
@property(readonly, assign, nonatomic) BOOL isPaused;	// G=0x3553d0b5; 
@property(readonly, assign, nonatomic) BOOL jumpedBackInTime;	// G=0x3553d0d1; 
@property(assign, nonatomic) double layerDuration;	// G=0x3553d139; S=0x3553d151; @synthesize=_layerDuration
@property(assign, nonatomic) double localTimeOffset;	// G=0x3553d195; S=0x3553d1ad; @synthesize=_localTimeOffset
@property(assign, nonatomic) double stopAtTime;	// G=0x3553d1c1; S=0x3553d1d9; @synthesize=_stopAtTime
@property(assign, nonatomic) double time;	// G=0x3553d10d; S=0x3553d125; @synthesize=_time
- (id)init;	// 0x3553cbdd
// declared property getter: - (double)containerDuration;	// 0x3553d17d
// declared property getter: - (double)croppedContainerTime;	// 0x3553d065
// declared property getter: - (int)currentLoopIndex;	// 0x3553d1ed
// declared property getter: - (double)extendedContainerTime;	// 0x3553d165
// declared property getter: - (BOOL)isInPhaseIn;	// 0x3553d0e5
// declared property getter: - (BOOL)isInPhaseOut;	// 0x3553d0f9
// declared property getter: - (BOOL)isPaused;	// 0x3553d0b5
// declared property getter: - (BOOL)jumpedBackInTime;	// 0x3553d0d1
// declared property getter: - (double)layerDuration;	// 0x3553d139
// declared property getter: - (double)localTimeOffset;	// 0x3553d195
- (void)pauseOnNextUpdate;	// 0x3553d01d
- (void)reactivate:(BOOL)reactivate;	// 0x3553cc2d
- (void)resumeOnNextUpdate;	// 0x3553cff1
// declared property setter: - (void)setLayerDuration:(double)duration;	// 0x3553d151
// declared property setter: - (void)setLocalTimeOffset:(double)offset;	// 0x3553d1ad
- (void)setParentIsPaused:(BOOL)paused;	// 0x3553d041
// declared property setter: - (void)setStopAtTime:(double)time;	// 0x3553d1d9
// declared property setter: - (void)setTime:(double)time;	// 0x3553d125
// declared property getter: - (double)stopAtTime;	// 0x3553d1c1
// declared property getter: - (double)time;	// 0x3553d10d
- (void)updateForTime:(double)time andPlug:(id)plug;	// 0x3553ccad
@end
