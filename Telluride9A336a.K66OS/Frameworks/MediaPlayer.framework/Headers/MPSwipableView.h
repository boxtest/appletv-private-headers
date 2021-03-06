/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <UIView.h> // Unknown library

@class MPSwipeGestureRecognizer, MPTapGestureRecognizer, UIPinchGestureRecognizer, MPActivityGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;	// 48 = 0x30
	int _simultaneousGestureTypes;	// 52 = 0x34
	id<MPSwipableViewDelegate> _swipeDelegate;	// 56 = 0x38
	MPTapGestureRecognizer *_tapGestureRecognizer;	// 60 = 0x3c
	MPSwipeGestureRecognizer *_swipeGestureRecognizer;	// 64 = 0x40
	MPActivityGestureRecognizer *_activityGestureRecognizer;	// 68 = 0x44
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 72 = 0x48
}
@property(assign, nonatomic) int enabledGestureTypes;	// G=0x35b80275; S=0x35b7fe4d; @synthesize=_enabledGestureTypes
@property(assign, nonatomic) int simultaneousGestureTypes;	// G=0x35b80285; S=0x35b80295; @synthesize=_simultaneousGestureTypes
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;	// G=0x35b80255; S=0x35b80265; @synthesize=_swipeDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x35b7f901
- (void)_activityGestureRecognized:(id)recognized;	// 0x35b7fd59
- (void)_pinchGestureRecognized:(id)recognized;	// 0x35b7fda1
- (void)_swipeGestureRecognized:(id)recognized;	// 0x35b7fbfd
- (void)_tapGestureRecognized:(id)recognized;	// 0x35b7fc7d
- (void)_updateGestureRecognizersForEnabledTypes;	// 0x35b7feed
- (void)addGestureRecognizer:(id)recognizer;	// 0x35b7fb79
- (void)dealloc;	// 0x35b7f96d
// declared property getter: - (int)enabledGestureTypes;	// 0x35b80275
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x35b7fe79
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35b7fae9
- (void)removeGestureRecognizer:(id)recognizer;	// 0x35b7fbc1
// declared property setter: - (void)setEnabledGestureTypes:(int)types;	// 0x35b7fe4d
// declared property setter: - (void)setSimultaneousGestureTypes:(int)types;	// 0x35b80295
// declared property setter: - (void)setSwipeDelegate:(id)delegate;	// 0x35b80265
// declared property getter: - (int)simultaneousGestureTypes;	// 0x35b80285
// declared property getter: - (id)swipeDelegate;	// 0x35b80255
@end

