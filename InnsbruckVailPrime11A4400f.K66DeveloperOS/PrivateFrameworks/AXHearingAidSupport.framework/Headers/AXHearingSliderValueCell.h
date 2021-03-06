/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import <Preferences/PSTableCell.h>

@class NSNumberFormatter, UIView, UISlider, UILabel;

@interface AXHearingSliderValueCell : PSTableCell {
	UIView *_leftView;	// 416 = 0x1a0
	UISlider *_slider;	// 420 = 0x1a4
	UILabel *_valueLabel;	// 424 = 0x1a8
	NSNumberFormatter *_numberFormatter;	// 428 = 0x1ac
	float _sliderMargin;	// 432 = 0x1b0
	float _valueWidth;	// 436 = 0x1b4
}
@property(retain) id value;	// G=0x2fdcf789; S=0x2fdcf4f1; converted property
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x2fdcedad
- (void)accessibilityDecrement;	// 0x2fdd0471
- (id)accessibilityHint;	// 0x2fdd0349
- (void)accessibilityIncrement;	// 0x2fdd0451
- (id)accessibilityLabel;	// 0x2fdd0369
- (unsigned long long)accessibilityTraits;	// 0x2fdd0309
- (id)accessibilityValue;	// 0x2fdd0329
- (void)dealloc;	// 0x2fdcee91
- (id)description;	// 0x2fdd0491
- (BOOL)isAccessibilityElement;	// 0x2fdd044d
- (void)layoutSubviews;	// 0x2fdcfb9d
// converted property setter: - (void)setValue:(id)value;	// 0x2fdcf4f1
- (void)sliderValueDidChange:(id)sliderValue;	// 0x2fdcf3c1
- (void)updateValue;	// 0x2fdcfab1
// converted property getter: - (id)value;	// 0x2fdcf789
- (void)willMoveToSuperview:(id)superview;	// 0x2fdcef49
@end

