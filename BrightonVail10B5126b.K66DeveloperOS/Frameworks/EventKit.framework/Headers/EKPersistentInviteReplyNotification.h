/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, EKPersistentCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface EKPersistentInviteReplyNotification : EKPersistentObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x31873731; 
@property(readonly, assign, nonatomic) EKPersistentCalendar *calendar;	// G=0x31873751; 
@property(readonly, assign, nonatomic) NSString *calendarName;	// G=0x3187361d; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x31873715; 
@property(readonly, assign, nonatomic) NSString *shareeAddress;	// G=0x31873655; 
@property(readonly, assign, nonatomic) NSString *shareeDisplayName;	// G=0x31873639; 
@property(readonly, assign, nonatomic) NSString *shareeFirstName;	// G=0x318736c1; 
@property(readonly, assign, nonatomic) NSString *shareeLastName;	// G=0x318736dd; 
@property(readonly, assign, nonatomic) int status;	// G=0x318736f9; 
+ (id)defaultPropertiesToLoad;	// 0x31873529
+ (id)relations;	// 0x31873595
// declared property getter: - (BOOL)alerted;	// 0x31873731
// declared property getter: - (id)calendar;	// 0x31873751
// declared property getter: - (id)calendarName;	// 0x3187361d
// declared property getter: - (id)creationDate;	// 0x31873715
// declared property getter: - (id)shareeAddress;	// 0x31873655
// declared property getter: - (id)shareeDisplayName;	// 0x31873639
// declared property getter: - (id)shareeFirstName;	// 0x318736c1
// declared property getter: - (id)shareeLastName;	// 0x318736dd
// declared property getter: - (int)status;	// 0x318736f9
@end
