/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSURL, NSTimeZone, NSData, NSSet, NSString, EKPersistentLocation, EKPersistentCalendar, NSDate, EKPersistentOrganizer, EKPersistentAttendee;

__attribute__((visibility("hidden")))
@interface EKPersistentCalendarItem : EKPersistentObject {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x332315a1; S=0x332315bd; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x331cea51; 
@property(copy, nonatomic) NSURL *action;	// G=0x33231569; S=0x33231585; 
@property(copy, nonatomic) NSSet *alarms;	// G=0x331cf259; S=0x332315d9; 
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x331c8701; S=0x331df755; 
@property(copy, nonatomic) NSSet *attachments;	// G=0x331d0db1; S=0x33231a85; 
@property(copy, nonatomic) NSSet *attendees;	// G=0x331d0ef1; S=0x332316ed; 
@property(retain, nonatomic) EKPersistentCalendar *calendar;	// G=0x331cb285; S=0x331d7ec5; 
@property(copy, nonatomic) NSDate *creationDate;	// G=0x331e1e6d; S=0x331e1e89; 
@property(readonly, assign, nonatomic, getter=isDetached) BOOL detached;	// G=0x331d2be5; 
@property(copy, nonatomic) NSSet *detachedItems;	// G=0x331da0e9; S=0x33231ba1; 
@property(copy, nonatomic) NSSet *exceptionDates;	// G=0x33231665; S=0x331da0cd; 
@property(copy, nonatomic) NSData *externalData;	// G=0x332319ad; S=0x332319c9; 
@property(copy, nonatomic) NSString *externalID;	// G=0x33231975; S=0x33231991; 
@property(copy, nonatomic) NSString *externalModTag;	// G=0x332319e5; S=0x33231a01; 
@property(assign, nonatomic) int externalTrackingStatus;	// G=0x33231a1d; S=0x33231a39; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x331daa4d; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x331cb025; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x332314bd; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x331d2aa5; 
@property(copy, nonatomic) NSDate *lastModifiedDate;	// G=0x33231531; S=0x3323154d; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x331ca461; S=0x331d9a75; 
@property(copy, nonatomic) NSString *notes;	// G=0x331d1069; S=0x331d8ef1; 
@property(retain, nonatomic) EKPersistentOrganizer *organizer;	// G=0x3323193d; S=0x33231959; 
@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;	// G=0x331d2c05; S=0x33231ad9; 
@property(assign, nonatomic) int priority;	// G=0x331ddd99; S=0x331dfced; 
@property(copy, nonatomic) NSSet *recurrenceRules;	// G=0x331d212d; S=0x331e1ef9; 
@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;	// G=0x331d158d; S=0x332317d5; 
@property(assign, nonatomic) int sequenceNumber;	// G=0x331e1ea5; S=0x331e1ec1; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x331c8e79; S=0x331d9ea5; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x331c83ad; S=0x331d9e49; 
@property(copy, nonatomic) NSString *title;	// G=0x331c9e51; S=0x331d9e2d; 
@property(copy, nonatomic) NSString *uniqueID;	// G=0x331d0cbd; S=0x331dabe9; 
+ (id)defaultPropertiesToLoad;	// 0x331c84b9
+ (id)relations;	// 0x331ca919
- (id)init;	// 0x331d1701
// declared property getter: - (id)URL;	// 0x332315a1
// declared property getter: - (id)UUID;	// 0x331cea51
// declared property getter: - (id)action;	// 0x33231569
- (void)addAlarm:(id)alarm;	// 0x332315f5
- (void)addAttachment:(id)attachment;	// 0x33231aa1
- (void)addAttendee:(id)attendee;	// 0x33231765
- (void)addDetachedItem:(id)item;	// 0x33231bbd
- (void)addExceptionDate:(id)date;	// 0x33231681
- (void)addRecurrenceRule:(id)rule;	// 0x3323162d
// declared property getter: - (id)alarms;	// 0x331cf259
// declared property getter: - (id)attachments;	// 0x331d0db1
- (int)attendeeCount;	// 0x332316b9
// declared property getter: - (id)attendees;	// 0x331d0ef1
// declared property getter: - (id)calendar;	// 0x331cb285
// declared property getter: - (id)creationDate;	// 0x331e1e6d
- (void)deleteSelfAndDetached;	// 0x331dd409
// declared property getter: - (id)detachedItems;	// 0x331da0e9
// declared property getter: - (id)exceptionDates;	// 0x33231665
// declared property getter: - (id)externalData;	// 0x332319ad
// declared property getter: - (id)externalID;	// 0x33231975
// declared property getter: - (id)externalModTag;	// 0x332319e5
// declared property getter: - (int)externalTrackingStatus;	// 0x33231a1d
// declared property getter: - (BOOL)hasAlarms;	// 0x331daa4d
- (BOOL)hasAttachments;	// 0x33231a55
// declared property getter: - (BOOL)hasAttendees;	// 0x331cb025
// declared property getter: - (BOOL)hasNotes;	// 0x332314bd
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x331d2aa5
// declared property getter: - (BOOL)isAllDay;	// 0x331c8701
// declared property getter: - (BOOL)isDetached;	// 0x331d2be5
- (void)itemDidReplicateInNewCalendar:(id)item;	// 0x33231fb1
// declared property getter: - (id)lastModifiedDate;	// 0x33231531
// declared property getter: - (id)location;	// 0x331ca461
- (id)moveToCalendar:(id)calendar;	// 0x33231fb5
- (id)moveToCalendar:(id)calendar skipItem:(id)item;	// 0x33231d4d
// declared property getter: - (id)notes;	// 0x331d1069
// declared property getter: - (id)organizer;	// 0x3323193d
// declared property getter: - (id)originalItem;	// 0x331d2c05
- (void)primitiveValueChangedForKey:(id)key;	// 0x331d1ad9
// declared property getter: - (int)priority;	// 0x331ddd99
// declared property getter: - (id)recurrenceRules;	// 0x331d212d
- (void)removeAlarm:(id)alarm;	// 0x33231611
- (void)removeAttachment:(id)attachment;	// 0x33231abd
- (void)removeAttendee:(id)attendee;	// 0x33231781
- (void)removeDetachedItem:(id)item;	// 0x33231c85
- (void)removeExceptionDate:(id)date;	// 0x3323169d
- (void)removeRecurrenceRule:(id)rule;	// 0x33231649
// declared property getter: - (id)selfAttendee;	// 0x331d158d
// declared property getter: - (int)sequenceNumber;	// 0x331e1ea5
// declared property setter: - (void)setAction:(id)action;	// 0x33231585
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x332315d9
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x331df755
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x33231a85
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x332316ed
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x331d7ec5
// declared property setter: - (void)setCreationDate:(id)date;	// 0x331e1e89
// declared property setter: - (void)setDetachedItems:(id)items;	// 0x33231ba1
// declared property setter: - (void)setExceptionDates:(id)dates;	// 0x331da0cd
// declared property setter: - (void)setExternalData:(id)data;	// 0x332319c9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x33231991
// declared property setter: - (void)setExternalModTag:(id)tag;	// 0x33231a01
// declared property setter: - (void)setExternalTrackingStatus:(int)status;	// 0x33231a39
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x3323154d
// declared property setter: - (void)setLocation:(id)location;	// 0x331d9a75
// declared property setter: - (void)setNotes:(id)notes;	// 0x331d8ef1
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x33231959
// declared property setter: - (void)setOriginalItem:(id)item;	// 0x33231ad9
// declared property setter: - (void)setPriority:(int)priority;	// 0x331dfced
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x331e1ef9
// declared property setter: - (void)setSelfAttendee:(id)attendee;	// 0x332317d5
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x331e1ec1
// declared property setter: - (void)setStartDate:(id)date;	// 0x331d9ea5
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x331d9e49
// declared property setter: - (void)setTitle:(id)title;	// 0x331d9e2d
// declared property setter: - (void)setURL:(id)url;	// 0x332315bd
// declared property setter: - (void)setUniqueID:(id)anId;	// 0x331dabe9
// declared property getter: - (id)startDate;	// 0x331c8e79
// declared property getter: - (id)timeZone;	// 0x331c83ad
// declared property getter: - (id)title;	// 0x331c9e51
// declared property getter: - (id)uniqueID;	// 0x331d0cbd
- (BOOL)validate:(id *)validate;	// 0x331da545
@end

