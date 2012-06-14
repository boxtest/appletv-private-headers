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
@property(copy, nonatomic) NSURL *URL;	// G=0x345a85a1; S=0x345a85bd; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x34545a51; 
@property(copy, nonatomic) NSURL *action;	// G=0x345a8569; S=0x345a8585; 
@property(copy, nonatomic) NSSet *alarms;	// G=0x34546259; S=0x345a85d9; 
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x3453f701; S=0x34556755; 
@property(copy, nonatomic) NSSet *attachments;	// G=0x34547db1; S=0x345a8a85; 
@property(copy, nonatomic) NSSet *attendees;	// G=0x34547ef1; S=0x345a86ed; 
@property(retain, nonatomic) EKPersistentCalendar *calendar;	// G=0x34542285; S=0x3454eec5; 
@property(copy, nonatomic) NSDate *creationDate;	// G=0x34558e6d; S=0x34558e89; 
@property(readonly, assign, nonatomic, getter=isDetached) BOOL detached;	// G=0x34549be5; 
@property(copy, nonatomic) NSSet *detachedItems;	// G=0x345510e9; S=0x345a8ba1; 
@property(copy, nonatomic) NSSet *exceptionDates;	// G=0x345a8665; S=0x345510cd; 
@property(copy, nonatomic) NSData *externalData;	// G=0x345a89ad; S=0x345a89c9; 
@property(copy, nonatomic) NSString *externalID;	// G=0x345a8975; S=0x345a8991; 
@property(copy, nonatomic) NSString *externalModTag;	// G=0x345a89e5; S=0x345a8a01; 
@property(assign, nonatomic) int externalTrackingStatus;	// G=0x345a8a1d; S=0x345a8a39; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x34551a4d; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x34542025; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x345a84bd; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x34549aa5; 
@property(copy, nonatomic) NSDate *lastModifiedDate;	// G=0x345a8531; S=0x345a854d; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x34541461; S=0x34550a75; 
@property(copy, nonatomic) NSString *notes;	// G=0x34548069; S=0x3454fef1; 
@property(retain, nonatomic) EKPersistentOrganizer *organizer;	// G=0x345a893d; S=0x345a8959; 
@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;	// G=0x34549c05; S=0x345a8ad9; 
@property(assign, nonatomic) int priority;	// G=0x34554d99; S=0x34556ced; 
@property(copy, nonatomic) NSSet *recurrenceRules;	// G=0x3454912d; S=0x34558ef9; 
@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;	// G=0x3454858d; S=0x345a87d5; 
@property(assign, nonatomic) int sequenceNumber;	// G=0x34558ea5; S=0x34558ec1; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x3453fe79; S=0x34550ea5; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x3453f3ad; S=0x34550e49; 
@property(copy, nonatomic) NSString *title;	// G=0x34540e51; S=0x34550e2d; 
@property(copy, nonatomic) NSString *uniqueID;	// G=0x34547cbd; S=0x34551be9; 
+ (id)defaultPropertiesToLoad;	// 0x3453f4b9
+ (id)relations;	// 0x34541919
- (id)init;	// 0x34548701
// declared property getter: - (id)URL;	// 0x345a85a1
// declared property getter: - (id)UUID;	// 0x34545a51
// declared property getter: - (id)action;	// 0x345a8569
- (void)addAlarm:(id)alarm;	// 0x345a85f5
- (void)addAttachment:(id)attachment;	// 0x345a8aa1
- (void)addAttendee:(id)attendee;	// 0x345a8765
- (void)addDetachedItem:(id)item;	// 0x345a8bbd
- (void)addExceptionDate:(id)date;	// 0x345a8681
- (void)addRecurrenceRule:(id)rule;	// 0x345a862d
// declared property getter: - (id)alarms;	// 0x34546259
// declared property getter: - (id)attachments;	// 0x34547db1
- (int)attendeeCount;	// 0x345a86b9
// declared property getter: - (id)attendees;	// 0x34547ef1
// declared property getter: - (id)calendar;	// 0x34542285
// declared property getter: - (id)creationDate;	// 0x34558e6d
- (void)deleteSelfAndDetached;	// 0x34554409
// declared property getter: - (id)detachedItems;	// 0x345510e9
// declared property getter: - (id)exceptionDates;	// 0x345a8665
// declared property getter: - (id)externalData;	// 0x345a89ad
// declared property getter: - (id)externalID;	// 0x345a8975
// declared property getter: - (id)externalModTag;	// 0x345a89e5
// declared property getter: - (int)externalTrackingStatus;	// 0x345a8a1d
// declared property getter: - (BOOL)hasAlarms;	// 0x34551a4d
- (BOOL)hasAttachments;	// 0x345a8a55
// declared property getter: - (BOOL)hasAttendees;	// 0x34542025
// declared property getter: - (BOOL)hasNotes;	// 0x345a84bd
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x34549aa5
// declared property getter: - (BOOL)isAllDay;	// 0x3453f701
// declared property getter: - (BOOL)isDetached;	// 0x34549be5
- (void)itemDidReplicateInNewCalendar:(id)item;	// 0x345a8fb1
// declared property getter: - (id)lastModifiedDate;	// 0x345a8531
// declared property getter: - (id)location;	// 0x34541461
- (id)moveToCalendar:(id)calendar;	// 0x345a8fb5
- (id)moveToCalendar:(id)calendar skipItem:(id)item;	// 0x345a8d4d
// declared property getter: - (id)notes;	// 0x34548069
// declared property getter: - (id)organizer;	// 0x345a893d
// declared property getter: - (id)originalItem;	// 0x34549c05
- (void)primitiveValueChangedForKey:(id)key;	// 0x34548ad9
// declared property getter: - (int)priority;	// 0x34554d99
// declared property getter: - (id)recurrenceRules;	// 0x3454912d
- (void)removeAlarm:(id)alarm;	// 0x345a8611
- (void)removeAttachment:(id)attachment;	// 0x345a8abd
- (void)removeAttendee:(id)attendee;	// 0x345a8781
- (void)removeDetachedItem:(id)item;	// 0x345a8c85
- (void)removeExceptionDate:(id)date;	// 0x345a869d
- (void)removeRecurrenceRule:(id)rule;	// 0x345a8649
// declared property getter: - (id)selfAttendee;	// 0x3454858d
// declared property getter: - (int)sequenceNumber;	// 0x34558ea5
// declared property setter: - (void)setAction:(id)action;	// 0x345a8585
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x345a85d9
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34556755
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x345a8a85
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x345a86ed
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3454eec5
// declared property setter: - (void)setCreationDate:(id)date;	// 0x34558e89
// declared property setter: - (void)setDetachedItems:(id)items;	// 0x345a8ba1
// declared property setter: - (void)setExceptionDates:(id)dates;	// 0x345510cd
// declared property setter: - (void)setExternalData:(id)data;	// 0x345a89c9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x345a8991
// declared property setter: - (void)setExternalModTag:(id)tag;	// 0x345a8a01
// declared property setter: - (void)setExternalTrackingStatus:(int)status;	// 0x345a8a39
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x345a854d
// declared property setter: - (void)setLocation:(id)location;	// 0x34550a75
// declared property setter: - (void)setNotes:(id)notes;	// 0x3454fef1
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x345a8959
// declared property setter: - (void)setOriginalItem:(id)item;	// 0x345a8ad9
// declared property setter: - (void)setPriority:(int)priority;	// 0x34556ced
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x34558ef9
// declared property setter: - (void)setSelfAttendee:(id)attendee;	// 0x345a87d5
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x34558ec1
// declared property setter: - (void)setStartDate:(id)date;	// 0x34550ea5
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x34550e49
// declared property setter: - (void)setTitle:(id)title;	// 0x34550e2d
// declared property setter: - (void)setURL:(id)url;	// 0x345a85bd
// declared property setter: - (void)setUniqueID:(id)anId;	// 0x34551be9
// declared property getter: - (id)startDate;	// 0x3453fe79
// declared property getter: - (id)timeZone;	// 0x3453f3ad
// declared property getter: - (id)title;	// 0x34540e51
// declared property getter: - (id)uniqueID;	// 0x34547cbd
- (BOOL)validate:(id *)validate;	// 0x34551545
@end
