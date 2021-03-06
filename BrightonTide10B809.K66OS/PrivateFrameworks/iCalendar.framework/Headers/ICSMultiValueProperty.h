/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"


@interface ICSMultiValueProperty : ICSProperty {
}
- (id)initWithValue:(id)value type:(unsigned)type;	// 0x3686adc9
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36847015
- (void)_setParsedValues:(id)values type:(unsigned)type;	// 0x36852e55
- (BOOL)isMultiValued;	// 0x3686ae15
- (void)setValue:(id)value type:(int)type;	// 0x3686ae61
- (void)setValues:(id)values valueType:(int)type;	// 0x3686aed1
- (id)value;	// 0x3686ae19
- (id)values;	// 0x3686aea5
@end

