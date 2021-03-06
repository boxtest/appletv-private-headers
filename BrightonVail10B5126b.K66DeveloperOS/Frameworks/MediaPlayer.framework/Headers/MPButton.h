/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library


@interface MPButton : UIButton {
	UIEdgeInsets _hitRectInsets;	// 180 = 0xb4
	double _holdDelayInterval;	// 196 = 0xc4
	unsigned _holding : 1;	// 204 = 0xcc
}
@property(assign, nonatomic) UIEdgeInsets hitRectInsets;	// G=0x31cff3f5; S=0x31cff419; @synthesize=_hitRectInsets
@property(assign, nonatomic) double holdDelayInterval;	// G=0x31cff435; S=0x31cff44d; @synthesize=_holdDelayInterval
+ (id)easyTouchButtonWithType:(int)type;	// 0x31cff03d
+ (float)easyTouchDefaultCharge;	// 0x31cff031
+ (UIEdgeInsets)easyTouchDefaultHitRectInsets;	// 0x31cff021
- (id)initWithFrame:(CGRect)frame;	// 0x31cfefd1
- (void)_delayedTriggerHold;	// 0x31cff2a5
- (void)_handleTouchCancel;	// 0x31cff305
- (void)_handleTouchDown;	// 0x31cff359
- (void)_handleTouchUp;	// 0x31cff3a1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31cff0f9
- (void)cancelTrackingWithEvent:(id)event;	// 0x31cff141
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31cff185
- (CGRect)hitRect;	// 0x31cff1cd
// declared property getter: - (UIEdgeInsets)hitRectInsets;	// 0x31cff3f5
// declared property getter: - (double)holdDelayInterval;	// 0x31cff435
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31cff269
// declared property setter: - (void)setHitRectInsets:(UIEdgeInsets)insets;	// 0x31cff419
// declared property setter: - (void)setHoldDelayInterval:(double)interval;	// 0x31cff44d
@end

