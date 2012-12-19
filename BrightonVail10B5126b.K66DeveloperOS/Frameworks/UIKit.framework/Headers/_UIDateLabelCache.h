/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _UIDateLabelCache : NSObject {
	double _today;	// 4 = 0x4
	double _noon;	// 12 = 0xc
	double _tomorrow;	// 20 = 0x14
	double _previousWeek;	// 28 = 0x1c
	UIFont *_timeDesignatorFont;	// 36 = 0x24
	NSString *_amString;	// 40 = 0x28
	NSString *_pmString;	// 44 = 0x2c
	CGSize _amSize;	// 48 = 0x30
	CGSize _pmSize;	// 56 = 0x38
	CFDictionaryRef _dateStringCache;	// 64 = 0x40
	CFDictionaryRef _dateStringCacheForForceTimeOnly;	// 68 = 0x44
	CFDateFormatterRef _timeFormatter;	// 72 = 0x48
	CFDateFormatterRef _shortDateFormatter;	// 76 = 0x4c
	CFDateFormatterRef _shortTimeFormatter;	// 80 = 0x50
	CFCalendarRef _calendar;	// 84 = 0x54
	CFDictionaryRef _dateSizeCache;	// 88 = 0x58
	CFDictionaryRef _dateSizeCacheForForceTimeOnly;	// 92 = 0x5c
	BOOL _designatorValid;	// 96 = 0x60
	BOOL _use24HourTime;	// 97 = 0x61
	BOOL _timeDesignatorAppearsBeforeTime;	// 98 = 0x62
}
@property(readonly, assign) CGSize amSize;	// G=0x32d1ade1; converted property
@property(readonly, retain) NSString *amString;	// G=0x32d1ad79; converted property
@property(readonly, assign) CGSize pmSize;	// G=0x32d1ae75; converted property
@property(readonly, retain) NSString *pmString;	// G=0x32d1adad; converted property
@property(readonly, assign) BOOL timeDesignatorAppearsBeforeTime;	// G=0x32b742b1; converted property
@property(readonly, retain) UIFont *timeDesignatorFont;	// G=0x32b73a85; converted property
@property(readonly, assign) BOOL use24HourTime;	// G=0x32bca2cd; converted property
- (id)init;	// 0x32b71469
- (void)_loadDesignatorStrings;	// 0x32d1ac75
- (void)_localeDidChange;	// 0x32d1ac11
- (void)_localeWillChange;	// 0x32d1abf5
- (void)_significantTimeChange;	// 0x32d1ab91
- (BOOL)_timeDesignatorAppearsBeforeTime;	// 0x32b7275d
- (void)_updateTodayAndNoon;	// 0x32b71efd
// converted property getter: - (CGSize)amSize;	// 0x32d1ade1
// converted property getter: - (id)amString;	// 0x32d1ad79
- (CFDateRef)createDateKeyForAbsoluteTime:(double)absoluteTime forceTimeOnly:(BOOL)only;	// 0x32b71e01
- (id)dateStringForAbsoluteTime:(double)absoluteTime dateKey:(CFDateRef)key forceTimeOnly:(BOOL)only;	// 0x32b72029
- (void)dealloc;	// 0x32d1a845
- (void)invalidateDateCache;	// 0x32d1a9e5
- (void)invalidateDateSizeCache;	// 0x32d1a9a9
- (CGSize)mainTimeSizeForDateKey:(CFDateRef)dateKey forceTimeOnly:(BOOL)only;	// 0x32b735bd
- (double)noonAbsoluteTime;	// 0x32d1af49
// converted property getter: - (CGSize)pmSize;	// 0x32d1ae75
// converted property getter: - (id)pmString;	// 0x32d1adad
- (void)setMainTimeSize:(CGSize)size forDateKey:(CFDateRef)dateKey forceTimeOnly:(BOOL)only;	// 0x32b73991
// converted property getter: - (BOOL)timeDesignatorAppearsBeforeTime;	// 0x32b742b1
// converted property getter: - (id)timeDesignatorFont;	// 0x32b73a85
- (id)timeDesignatorForAbsoluteTime:(double)absoluteTime forceTimeOnly:(BOOL)only;	// 0x32b72545
- (CGSize)timeDesignatorSizeForAbsoluteTime:(double)absoluteTime forceTimeOnly:(BOOL)only forFont:(id)font;	// 0x32b73ad9
- (double)todayAbsoluteTime;	// 0x32d1af09
// converted property getter: - (BOOL)use24HourTime;	// 0x32bca2cd
@end
