/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, CADisplayLink;

@interface UIAnimator : NSObject {
	NSMutableArray *_animations;	// 4 = 0x4
	double _lastUpdateTime;	// 8 = 0x8
	CADisplayLink *_lcdHeartbeat;	// 16 = 0x10
	CADisplayLink *_tvHeartbeat;	// 20 = 0x14
	int _lcdCount;	// 24 = 0x18
	int _tvCount;	// 28 = 0x1c
}
+ (void)disableAnimation;	// 0x32f4dcdd
+ (void)enableAnimation;	// 0x32f55995
+ (id)sharedAnimator;	// 0x32f66241
- (void)_LCDHeartbeatCallback:(id)callback;	// 0x3300bf51
- (void)_TVHeartbeatCallback:(id)callback;	// 0x3309e031
- (void)_addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start startTime:(double)time;	// 0x3300bb55
- (void)_advance:(BOOL)advance withTimestamp:(double)timestamp;	// 0x3300bf89
- (void)_startAnimation:(id)animation withStartTime:(double)startTime;	// 0x3300bc75
- (void)addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start;	// 0x3300baf5
- (void)addAnimations:(id)animations withDuration:(double)duration start:(BOOL)start;	// 0x3309de65
- (void)dealloc;	// 0x3309dd65
- (float)fractionForAnimation:(id)animation;	// 0x3309e00d
- (void)removeAnimationsForTarget:(id)target;	// 0x32f662f9
- (void)removeAnimationsForTarget:(id)target ofKind:(Class)kind;	// 0x32fdc7bd
- (void)startAnimation:(id)animation;	// 0x3309dfe1
- (void)stopAnimation:(id)animation;	// 0x3300c485
@end

