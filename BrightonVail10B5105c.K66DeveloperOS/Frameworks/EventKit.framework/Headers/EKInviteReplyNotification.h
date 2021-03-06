/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSString, EKCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface EKInviteReplyNotification : EKObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x35ba093d; 
@property(readonly, assign, nonatomic) EKCalendar *calendar;	// G=0x35ba0999; 
@property(readonly, assign, nonatomic) NSString *calendarName;	// G=0x35ba07ed; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x35ba0915; 
@property(readonly, assign, nonatomic) NSString *shareeAddress;	// G=0x35ba0875; 
@property(readonly, assign, nonatomic) NSString *shareeDisplayName;	// G=0x35ba0815; 
@property(readonly, assign, nonatomic) NSString *shareeFirstName;	// G=0x35ba089d; 
@property(readonly, assign, nonatomic) NSString *shareeLastName;	// G=0x35ba08c5; 
@property(readonly, assign, nonatomic) int status;	// G=0x35ba08ed; 
- (id)_persistentInviteReplyNotification;	// 0x35ba07dd
// declared property getter: - (BOOL)alerted;	// 0x35ba093d
// declared property getter: - (id)calendar;	// 0x35ba0999
// declared property getter: - (id)calendarName;	// 0x35ba07ed
- (void)clearAlertedStatus;	// 0x35ba0965
// declared property getter: - (id)creationDate;	// 0x35ba0915
- (id)lazyLoadRelationForKey:(id)key;	// 0x35ba0761
// declared property getter: - (id)shareeAddress;	// 0x35ba0875
// declared property getter: - (id)shareeDisplayName;	// 0x35ba0815
// declared property getter: - (id)shareeFirstName;	// 0x35ba089d
// declared property getter: - (id)shareeLastName;	// 0x35ba08c5
// declared property getter: - (int)status;	// 0x35ba08ed
@end

