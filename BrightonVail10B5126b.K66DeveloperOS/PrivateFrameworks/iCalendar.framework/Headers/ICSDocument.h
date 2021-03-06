/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library

@class ICSCalendar;

@interface ICSDocument : NSObject {
	ICSCalendar *_calendar;	// 4 = 0x4
}
@property(readonly, retain) ICSCalendar *calendar;	// G=0x36844c1d; converted property
- (id)initWithCalendar:(id)calendar;	// 0x36844b7d
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x368449d9
- (id)initWithData:(id)data encoding:(unsigned)encoding options:(unsigned)options error:(id *)error;	// 0x36844a29
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x36844ac5
- (id)initWithICSString:(id)icsstring options:(unsigned)options error:(id *)error;	// 0x368449a1
- (id)ICSDataWithOptions:(unsigned)options;	// 0x36844c2d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36844cad
// converted property getter: - (id)calendar;	// 0x36844c1d
- (void)dealloc;	// 0x36844bd1
- (BOOL)validate:(id *)validate;	// 0x36844d09
@end

