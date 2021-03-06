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
@property(readonly, assign, nonatomic) double containerDuration;	// G=0x361f2545; @synthesize=_containerDuration
@property(readonly, assign, nonatomic) double croppedContainerTime;	// G=0x361f2431; 
@property(readonly, assign, nonatomic) int currentLoopIndex;	// G=0x361f25b5; @synthesize=_currentLoopIndex
@property(readonly, assign, nonatomic) double extendedContainerTime;	// G=0x361f252d; @synthesize=_containerTime
@property(readonly, assign, nonatomic) BOOL isInPhaseIn;	// G=0x361f24ad; 
@property(readonly, assign, nonatomic) BOOL isInPhaseOut;	// G=0x361f24c1; 
@property(readonly, assign, nonatomic) BOOL isPaused;	// G=0x361f2481; 
@property(readonly, assign, nonatomic) BOOL jumpedBackInTime;	// G=0x361f2499; 
@property(assign, nonatomic) double layerDuration;	// G=0x361f2501; S=0x361f2519; @synthesize=_layerDuration
@property(assign, nonatomic) double localTimeOffset;	// G=0x361f255d; S=0x361f2575; @synthesize=_localTimeOffset
@property(assign, nonatomic) double stopAtTime;	// G=0x361f2589; S=0x361f25a1; @synthesize=_stopAtTime
@property(assign, nonatomic) double time;	// G=0x361f24d5; S=0x361f24ed; @synthesize=_time
- (id)init;	// 0x361f1fa1
// declared property getter: - (double)containerDuration;	// 0x361f2545
// declared property getter: - (double)croppedContainerTime;	// 0x361f2431
// declared property getter: - (int)currentLoopIndex;	// 0x361f25b5
// declared property getter: - (double)extendedContainerTime;	// 0x361f252d
// declared property getter: - (BOOL)isInPhaseIn;	// 0x361f24ad
// declared property getter: - (BOOL)isInPhaseOut;	// 0x361f24c1
// declared property getter: - (BOOL)isPaused;	// 0x361f2481
// declared property getter: - (BOOL)jumpedBackInTime;	// 0x361f2499
// declared property getter: - (double)layerDuration;	// 0x361f2501
// declared property getter: - (double)localTimeOffset;	// 0x361f255d
- (void)pauseOnNextUpdate;	// 0x361f23e5
- (void)reactivate:(BOOL)reactivate;	// 0x361f1ff1
- (void)resumeOnNextUpdate;	// 0x361f23b9
// declared property setter: - (void)setLayerDuration:(double)duration;	// 0x361f2519
// declared property setter: - (void)setLocalTimeOffset:(double)offset;	// 0x361f2575
- (void)setParentIsPaused:(BOOL)paused;	// 0x361f2409
// declared property setter: - (void)setStopAtTime:(double)time;	// 0x361f25a1
// declared property setter: - (void)setTime:(double)time;	// 0x361f24ed
// declared property getter: - (double)stopAtTime;	// 0x361f2589
// declared property getter: - (double)time;	// 0x361f24d5
- (void)updateForTime:(double)time andPlug:(id)plug;	// 0x361f2069
@end

