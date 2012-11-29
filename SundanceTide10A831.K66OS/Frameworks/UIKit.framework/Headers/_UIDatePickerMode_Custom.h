/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIDatePickerMode.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Custom : _UIDatePickerMode {
	NSString *_originalFormat;	// 116 = 0x74
	NSArray *_components;	// 120 = 0x78
	NSArray *_sortedComponents;	// 124 = 0x7c
	int _displayedUnits;	// 128 = 0x80
	int _desiredUnits;	// 132 = 0x84
}
@property(readonly, retain) NSArray *components;	// G=0x320018c5; converted property
- (id)initWithFormatString:(id)formatString datePickerView:(id)view;	// 0x320016e1
- (id)_componentForCalendarUnit:(unsigned)calendarUnit;	// 0x32001cd5
- (unsigned)calendarUnitForComponent:(int)component;	// 0x32001c25
- (int)componentForCalendarUnit:(unsigned)calendarUnit;	// 0x32001c61
// converted property getter: - (id)components;	// 0x320018c5
- (id)dateForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x320022fd
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x32001fc9
- (void)dealloc;	// 0x32001735
- (int)displayedCalendarUnits;	// 0x32001e89
- (unsigned)extractableCalendarUnits;	// 0x32001dad
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x320023d5
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x32002415
- (void)noteCalendarChanged;	// 0x320017ad
- (unsigned)numberOfComponents;	// 0x32001f55
- (int)numberOfRowsInComponent:(int)component;	// 0x32001f7d
- (void)resetComponentWidths;	// 0x320017fd
- (int)titleAlignmentForCalendarUnit:(unsigned)calendarUnit;	// 0x32001ff1
- (int)valueForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x32002361
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x32001ff5
@end
