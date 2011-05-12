/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKAlarmWrapper : NSObject {
	CalAlarmOccurrence *_alarm;	// 4 = 0x4
}
+ (id)wrapperWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x334affd5
- (id)initWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x334aff1d
- (void)dealloc;	// 0x334b04f5
- (id)description;	// 0x334b1749
- (double)fireDate;	// 0x334b1731
- (unsigned)hash;	// 0x334b17ed
- (BOOL)isEqual:(id)equal;	// 0x334b1821
- (id)occurrence;	// 0x334affa5
@end
