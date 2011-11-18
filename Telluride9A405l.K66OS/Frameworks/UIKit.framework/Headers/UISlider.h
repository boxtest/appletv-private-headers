/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIImageView, UIColor, UIImage;

@interface UISlider : UIControl <NSCoding> {
@private
	float _value;	// 72 = 0x48
	float _minValue;	// 76 = 0x4c
	float _maxValue;	// 80 = 0x50
	float _alpha;	// 84 = 0x54
	CFDictionaryRef _contentLookup;	// 88 = 0x58
	UIImageView *_minValueImageView;	// 92 = 0x5c
	UIImageView *_maxValueImageView;	// 96 = 0x60
	UIImageView *_thumbView;	// 100 = 0x64
	UIImageView *_minTrackView;	// 104 = 0x68
	UIImageView *_maxTrackView;	// 108 = 0x6c
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned preparingToAnimate : 1;
		unsigned showValue : 1;
		unsigned trackEnabled : 1;
		unsigned creatingSnapshot : 1;
		unsigned thumbDisabled : 1;
		unsigned minTrackHidden : 1;
	} _sliderFlags;	// 112 = 0x70
	float _hitOffset;	// 116 = 0x74
	UIColor *_minTintColor;	// 120 = 0x78
	UIColor *_maxTintColor;	// 124 = 0x7c
	UIColor *_thumbTintColor;	// 128 = 0x80
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x32e8439d; S=0x32e84381; 
@property(readonly, assign, nonatomic) UIImage *currentMaximumTrackImage;	// G=0x32ddfc69; 
@property(readonly, assign, nonatomic) UIImage *currentMinimumTrackImage;	// G=0x32ddfcb9; 
@property(readonly, assign, nonatomic) UIImage *currentThumbImage;	// G=0x32ddfbc9; 
@property(retain, nonatomic) UIColor *maximumTrackTintColor;	// G=0x32e84fc9; S=0x32e83cfd; @synthesize=_maxTintColor
@property(assign, nonatomic) float maximumValue;	// G=0x32e20581; S=0x32e20605; @dynamic
@property(retain, nonatomic) UIImage *maximumValueImage;	// G=0x32e83df5; S=0x32e20681; 
@property(retain, nonatomic) UIColor *minimumTrackTintColor;	// G=0x32e84fb9; S=0x32e83c4d; @synthesize=_minTintColor
@property(assign, nonatomic) float minimumValue;	// G=0x32e20571; S=0x32e20591; @dynamic
@property(retain, nonatomic) UIImage *minimumValueImage;	// G=0x32e83dad; S=0x32e20769; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x32e84fd9; S=0x32e83a3d; @synthesize=_thumbTintColor
@property(assign, nonatomic) float value;	// G=0x32ddfa19; S=0x32e20851; @dynamic
- (id)init;	// 0x32e83381
- (id)initWithCoder:(id)coder;	// 0x32e833b1
- (id)initWithFrame:(CGRect)frame;	// 0x32dde9ad
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x32e84fe9
- (id)_contentForState:(unsigned)state;	// 0x32ddf9f5
- (void)_controlMouseDown:(GSEventRef)down;	// 0x32e84add
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x32e84ae5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x32e84ae1
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32e84f41
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32e84f49
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32e84f45
- (void)_initImages;	// 0x32de08f1
- (void)_initSubviews;	// 0x32de0a35
- (BOOL)_isThumbEnabled;	// 0x32e852c9
- (void)_layoutSubviewsForBoundsChange:(BOOL)boundsChange;	// 0x32ddeb29
- (id)_maximumTrackImageForState:(unsigned)state;	// 0x32ddf9b5
- (id)_minimumTrackImageForState:(unsigned)state;	// 0x32ddfd19
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32e836d9
- (id)_scriptingInfo;	// 0x32e854b9
- (void)_sendDelayedActions;	// 0x32e8444d
- (void)_setAlpha:(float)alpha remember:(BOOL)remember;	// 0x32e84161
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x32de0061
- (void)_setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x32de0285
- (void)_setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x32de0119
- (void)_setMinimumTrackVisible:(BOOL)visible withDuration:(double)duration;	// 0x32e851bd
- (void)_setThumbEnabled:(BOOL)enabled;	// 0x32e85125
- (void)_setThumbImage:(id)image forStates:(unsigned)states;	// 0x32ddff49
- (void)_setThumbTintColor:(id)color forStates:(unsigned)states;	// 0x32e85399
- (void)_setTrackEnabled:(BOOL)enabled;	// 0x32e850f1
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x32de0701
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x32e843d1
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x32e843b1
- (UIEdgeInsets)_thumbHitEdgeInsets;	// 0x32e852e1
- (id)_thumbImageForState:(unsigned)state;	// 0x32ddfc29
- (BOOL)_trackEnabled;	// 0x32e85111
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x32e844c1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32e84ae9
- (BOOL)cancelMouseTracking;	// 0x32e84a55
- (BOOL)cancelTouchTracking;	// 0x32e84f4d
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32e84895
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32e84d69
- (id)createThumbView;	// 0x32de0be9
// declared property getter: - (id)currentMaximumTrackImage;	// 0x32ddfc69
// declared property getter: - (id)currentMinimumTrackImage;	// 0x32ddfcb9
// declared property getter: - (id)currentThumbImage;	// 0x32ddfbc9
- (void)dealloc;	// 0x32de31f1
- (id)description;	// 0x32e839a5
- (void)didMoveToWindow;	// 0x32e20865
- (void)encodeWithCoder:(id)coder;	// 0x32e83789
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32e8492d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32e84e3d
- (BOOL)isAccessibilityElementByDefault;	// 0x32f01569
- (BOOL)isAnimatingValueChange;	// 0x32e85001
// declared property getter: - (BOOL)isContinuous;	// 0x32e8439d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f0156d
- (void)layoutSubviews;	// 0x32de085d
- (id)maximumTrackImageForState:(unsigned)state;	// 0x32ddf9a5
// declared property getter: - (id)maximumTrackTintColor;	// 0x32e84fc9
// declared property getter: - (float)maximumValue;	// 0x32e20581
// declared property getter: - (id)maximumValueImage;	// 0x32e83df5
- (CGRect)maximumValueImageRectForBounds:(CGRect)bounds;	// 0x32ddfe29
- (id)minimumTrackImageForState:(unsigned)state;	// 0x32ddfd09
// declared property getter: - (id)minimumTrackTintColor;	// 0x32e84fb9
// declared property getter: - (float)minimumValue;	// 0x32e20571
// declared property getter: - (id)minimumValueImage;	// 0x32e83dad
- (CGRect)minimumValueImageRectForBounds:(CGRect)bounds;	// 0x32ddfd59
- (id)scriptingInfoWithChildren;	// 0x32e85579
- (void)setAlpha:(float)alpha;	// 0x32de0d29
- (void)setBounds:(CGRect)bounds;	// 0x32e840b5
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x32e84381
- (void)setEnabled:(BOOL)enabled;	// 0x32e841fd
- (void)setFrame:(CGRect)frame;	// 0x32ddea7d
- (void)setHighlighted:(BOOL)highlighted;	// 0x32e842c1
- (void)setMaximumTrackImage:(id)image forState:(unsigned)state;	// 0x32e222b9
- (void)setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x32de0255
// declared property setter: - (void)setMaximumTrackTintColor:(id)color;	// 0x32e83cfd
// declared property setter: - (void)setMaximumValue:(float)value;	// 0x32e20605
// declared property setter: - (void)setMaximumValueImage:(id)image;	// 0x32e20681
- (void)setMinimumTrackImage:(id)image forState:(unsigned)state;	// 0x32e221bd
- (void)setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x32de00e9
// declared property setter: - (void)setMinimumTrackTintColor:(id)color;	// 0x32e83c4d
// declared property setter: - (void)setMinimumValue:(float)value;	// 0x32e20591
// declared property setter: - (void)setMinimumValueImage:(id)image;	// 0x32e20769
- (void)setSelected:(BOOL)selected;	// 0x32e84321
- (void)setShowValue:(BOOL)value;	// 0x32e85015
- (void)setThumbImage:(id)image forState:(unsigned)state;	// 0x32e220c1
- (void)setThumbImage:(id)image forStates:(unsigned)states;	// 0x32ddff19
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x32e83a3d
// declared property setter: - (void)setValue:(float)value;	// 0x32e20851
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x32de03c1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32e83e3d
- (id)thumbImageForState:(unsigned)state;	// 0x32ddfc19
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x32ddfa29
// declared property getter: - (id)thumbTintColor;	// 0x32e84fd9
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x32ddf7bd
// declared property getter: - (float)value;	// 0x32ddfa19
- (CGRect)valueTextRectForBounds:(CGRect)bounds;	// 0x32e85059
@end

