/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDateFormatter, NSAttributedString;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchDescriptionView : BRControl {
	NSDateFormatter *_dayMonthYearFormatter;	// 84 = 0x54
	NSAttributedString *_title;	// 88 = 0x58
	NSAttributedString *_dimmedTitle;	// 92 = 0x5c
	NSAttributedString *_boldTitle;	// 96 = 0x60
	NSDateFormatter *_dayMonthFormatter;	// 100 = 0x64
}
@property(retain, nonatomic) NSAttributedString *boldTitle;	// G=0x3c42f9; S=0x3c4309; @synthesize=_boldTitle
@property(retain, nonatomic) NSDateFormatter *dayMonthFormatter;	// G=0x3c40a9; S=0x3c4331; @synthesize=_dayMonthFormatter
@property(retain, nonatomic) NSDateFormatter *dayMonthYearFormatter;	// G=0x3c4135; S=0x3c4261; @synthesize=_dayMonthYearFormatter
@property(retain, nonatomic) NSAttributedString *dimmedTitle;	// G=0x3c42c1; S=0x3c42d1; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSAttributedString *title;	// G=0x3c4289; S=0x3c4299; @synthesize=_title
- (id)init;	// 0x3c32d1
- (void).cxx_destruct;	// 0x3c4359
- (id)_boldTitleAttributes;	// 0x3c4001
- (id)_dimmedTitleAttributes;	// 0x3c4049
- (id)_titleAttributes;	// 0x3c3fb9
- (id)accessibilityLabel;	// 0x3c41c1
// declared property getter: - (id)boldTitle;	// 0x3c42f9
// declared property getter: - (id)dayMonthFormatter;	// 0x3c40a9
// declared property getter: - (id)dayMonthYearFormatter;	// 0x3c4135
// declared property getter: - (id)dimmedTitle;	// 0x3c42c1
- (void)drawRect:(CGRect)rect;	// 0x3c3d11
// declared property setter: - (void)setBoldTitle:(id)title;	// 0x3c4309
// declared property setter: - (void)setDayMonthFormatter:(id)formatter;	// 0x3c4331
// declared property setter: - (void)setDayMonthYearFormatter:(id)formatter;	// 0x3c4261
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0x3c42d1
// declared property setter: - (void)setTitle:(id)title;	// 0x3c4299
- (void)setTitle:(id)title boldTitle:(id)title2 dimmedTitle:(id)title3;	// 0x3c3915
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3c3ba1
// declared property getter: - (id)title;	// 0x3c4289
- (void)updatePhotoCount:(int)count description:(id)description;	// 0x3c3321
- (void)updatePhotoCount:(int)count modifiedDate:(id)date;	// 0x3c3515
@end

