/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSCalendar, UIPickerView, NSDate, NSLocale, NSTimeZone;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 72 = 0x48
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x302936c1; S=0x302936e1; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x302937bd; S=0x302937dd; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x301bff55; S=0x30293701; @dynamic
@property(retain) id dateComponents;	// G=0x3029388d; S=0x302938ad; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x30293601; S=0x301b5649; @dynamic
@property(retain, nonatomic) NSLocale *locale;	// G=0x30293661; S=0x30293671; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x3029377d; S=0x3029379d; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x3029373d; S=0x3029375d; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x302937fd; S=0x301b59f1; @dynamic
@property(assign) double timeInterval;	// G=0x3029387d; S=0x3029386d; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x30293681; S=0x302936a1; @dynamic
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x302939fd; S=0x302939dd; 
- (id)initWithCoder:(id)coder;	// 0x30293065
- (id)initWithFrame:(CGRect)frame;	// 0x301b4149
- (float)_contentWidth;	// 0x3029397d
- (void)_insertPickerView;	// 0x301b4461
- (id)_locale;	// 0x30293621
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3029331d
- (void)_setHidesLabels:(BOOL)labels;	// 0x302939bd
- (void)_setHighlightsToday:(BOOL)today;	// 0x3029399d
- (void)_setLocale:(id)locale;	// 0x30293641
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x302939dd
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x302939fd
- (void)awakeFromNib;	// 0x302932b1
// declared property getter: - (id)calendar;	// 0x302936c1
// declared property getter: - (double)countDownDuration;	// 0x302937bd
// declared property getter: - (id)date;	// 0x301bff55
// converted property getter: - (id)dateComponents;	// 0x3029388d
// declared property getter: - (int)datePickerMode;	// 0x30293601
- (void)encodeWithCoder:(id)coder;	// 0x30293371
- (int)hour;	// 0x3029390d
// declared property getter: - (id)locale;	// 0x30293661
// declared property getter: - (id)maximumDate;	// 0x3029377d
// declared property getter: - (id)minimumDate;	// 0x3029373d
- (int)minute;	// 0x3029392d
// declared property getter: - (int)minuteInterval;	// 0x302937fd
- (int)second;	// 0x3029394d
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x302936e1
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x302937dd
// declared property setter: - (void)setDate:(id)date;	// 0x30293701
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x3029396d
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x301b5d41
// converted property setter: - (void)setDateComponents:(id)components;	// 0x302938ad
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x301b5649
- (void)setDelegate:(id)delegate;	// 0x3029384d
- (void)setFrame:(CGRect)frame;	// 0x301b43ed
- (void)setHighlightsToday:(BOOL)today;	// 0x302938ed
// declared property setter: - (void)setLocale:(id)locale;	// 0x30293671
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x3029379d
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x3029375d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x301b59f1
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x302938cd
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x3029386d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x302936a1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3029381d
// converted property getter: - (double)timeInterval;	// 0x3029387d
// declared property getter: - (id)timeZone;	// 0x30293681
@end
