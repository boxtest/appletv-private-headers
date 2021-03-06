/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableSet, NSMutableDictionary, EKDaemonConnection, EKCalendar, NSNumber, NSString, NSTimeZone;
@protocol OS_dispatch_queue;

@interface EKEventStore : NSObject {
	NSMutableDictionary *_registeredObjects;	// 4 = 0x4
	NSMutableDictionary *_publicRegisteredObjects;	// 8 = 0x8
	NSMutableSet *_insertedObjects;	// 12 = 0xc
	NSMutableSet *_deletedObjects;	// 16 = 0x10
	NSMutableSet *_updatedObjects;	// 20 = 0x14
	NSNumber *_defaultTimedAlarmOffset;	// 24 = 0x18
	NSNumber *_defaultAllDayAlarmOffset;	// 28 = 0x1c
	EKCalendar *_defaultCalendarForNewEvents;	// 32 = 0x20
	EKCalendar *_defaultCalendarForNewReminders;	// 36 = 0x24
	EKDaemonConnection *_database;	// 40 = 0x28
	double _lastDatabaseNotificationTimestamp;	// 44 = 0x2c
	unsigned long _flags;	// 52 = 0x34
	NSTimeZone *_timeZone;	// 56 = 0x38
	NSMutableDictionary *_calendars;	// 60 = 0x3c
	NSMutableDictionary *_sources;	// 64 = 0x40
	NSMutableSet *_objectsPendingCommit;	// 68 = 0x44
	NSObject<OS_dispatch_queue> *_calendarQueue;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_registeredQueue;	// 76 = 0x4c
	NSObject<OS_dispatch_queue> *_unsavedChangesQueue;	// 80 = 0x50
	NSObject<OS_dispatch_queue> *_dbChangedQueue;	// 84 = 0x54
	NSMutableDictionary *_cachedValidatedEmails;	// 88 = 0x58
}
@property(retain, nonatomic) NSMutableDictionary *_cachedValidatedEmails;	// G=0x34f221e5; S=0x34f221f5; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_calendars;	// G=0x34f22105; S=0x34f22115; @synthesize
@property(retain, nonatomic) EKCalendar *_defaultCalendarForNewEvents;	// G=0x34f22079; S=0x34ed9349; @synthesize
@property(retain, nonatomic) EKCalendar *_defaultCalendarForNewReminders;	// G=0x34f22089; S=0x34ee2121; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_sources;	// G=0x34f22125; S=0x34f22135; @synthesize
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *calendarQueue;	// G=0x34f22165; S=0x34f22175; @synthesize=_calendarQueue
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x34f1a801; 
@property(retain, nonatomic) EKDaemonConnection *database;	// G=0x34f22099; S=0x34f220a9; @synthesize=_database
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue;	// G=0x34f221c5; S=0x34f221d5; @synthesize=_dbChangedQueue
@property(retain, nonatomic) NSNumber *defaultAllDayAlarmOffset;	// G=0x34ee92ad; S=0x34f21ec9; @synthesize=_defaultAllDayAlarmOffset
@property(readonly, assign, nonatomic) EKCalendar *defaultCalendarForNewEvents;	// G=0x34ed90c9; 
@property(retain) EKCalendar *defaultCalendarForNewReminders;	// G=0x34ee1db5; S=0x34f1cd4d; converted property
@property(retain, nonatomic) NSNumber *defaultTimedAlarmOffset;	// G=0x34ee7389; S=0x34f21e85; @synthesize=_defaultTimedAlarmOffset
@property(assign, nonatomic) NSMutableSet *deletedObjects;	// G=0x34f22039; S=0x34f22049; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSString *eventStoreIdentifier;	// G=0x34f1a25d; 
@property(assign, nonatomic) unsigned long flags;	// G=0x34f220e5; S=0x34f220f5; @synthesize=_flags
@property(assign, nonatomic) NSMutableSet *insertedObjects;	// G=0x34f22019; S=0x34f22029; @synthesize=_insertedObjects
@property(assign, nonatomic) double lastDatabaseNotificationTimestamp;	// G=0x34f220b9; S=0x34f220d1; @synthesize=_lastDatabaseNotificationTimestamp
@property(assign, nonatomic) NSMutableSet *objectsPendingCommit;	// G=0x34f22145; S=0x34f22155; @synthesize=_objectsPendingCommit
@property(assign, nonatomic) NSMutableDictionary *publicRegisteredObjects;	// G=0x34f21ff9; S=0x34f22009; @synthesize=_publicRegisteredObjects
@property(assign, nonatomic) NSMutableDictionary *registeredObjects;	// G=0x34f21fd9; S=0x34f21fe9; @synthesize=_registeredObjects
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *registeredQueue;	// G=0x34f22185; S=0x34f22195; @synthesize=_registeredQueue
@property(readonly, retain) NSMutableDictionary *sources;	// G=0x34ed7e59; converted property
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x34ed935d; S=0x34ed4501; @synthesize=_timeZone
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue;	// G=0x34f221a5; S=0x34f221b5; @synthesize=_unsavedChangesQueue
@property(assign, nonatomic) NSMutableSet *updatedObjects;	// G=0x34f22059; S=0x34f22069; @synthesize=_updatedObjects
+ (BOOL)_isAuthorizationRestrictedForService:(CFStringRef)service;	// 0x34f18df9
+ (int)authorizationStatusForEntityType:(unsigned)entityType;	// 0x34ed42b5
+ (Class)classForEntityName:(id)entityName;	// 0x34ed53c9
+ (Class)publicClassForEntityName:(id)entityName;	// 0x34ee05c1
- (id)init;	// 0x34f1880d
- (id)initWithOptions:(unsigned long)options path:(id)path;	// 0x34f18821
- (void)_accessStatusChanged;	// 0x34f18fe5
- (id)_addFetchedObjectWithID:(id)anId;	// 0x34ed5109
- (void)_addObjectToPendingCommits:(id)pendingCommits;	// 0x34eeea69
- (id)_allCalendars;	// 0x34ed474d
// declared property getter: - (id)_cachedValidatedEmails;	// 0x34f221e5
- (BOOL)_calendar:(id)calendar supportsEntityType:(unsigned)type;	// 0x34ed8f5d
- (id)_calendarItemsMatchingPredicate:(id)predicate;	// 0x34f1d405
- (id)_calendarWithID:(id)anId;	// 0x34ed9221
// declared property getter: - (id)_calendars;	// 0x34f22105
- (void)_databaseChangedExternally;	// 0x34ef0801
// declared property getter: - (id)_defaultCalendarForNewEvents;	// 0x34f22079
// declared property getter: - (id)_defaultCalendarForNewReminders;	// 0x34f22089
- (void)_deleteObject:(id)object;	// 0x34f1fb9d
- (id)_eventWithURI:(id)uri checkValid:(BOOL)valid;	// 0x34f1b871
- (void)_forgetRegisteredObjects;	// 0x34f1f2d5
- (void)_insertObject:(id)object;	// 0x34eebc5d
- (BOOL)_parseURI:(id)uri expectedScheme:(id)scheme identifier:(id *)identifier options:(id *)options;	// 0x34f1b531
- (void)_performServerFunction:(id)function replyHandler:(id)handler;	// 0x34f1c179
- (id)_predicateForRemindersWithDate:(id)date useAsCompletionDate:(BOOL)date2 calendars:(id)calendars limitToCompletedOrIncomplete:(BOOL)completedOrIncomplete completed:(BOOL)completed includeDatesBefore:(BOOL)before sortOrder:(int)order;	// 0x34ee23a1
- (void)_protectedDataDidBecomeAvailable;	// 0x34f21e7d
- (void)_protectedDataWillBecomeUnavailable;	// 0x34f21e79
- (void)_refreshDASource:(id)source isUserRequested:(BOOL)requested;	// 0x34f1ee91
- (void)_refreshDASubscribedCalendar:(id)calendar isUserRequested:(BOOL)requested;	// 0x34f1ec21
- (void)_refreshSource:(id)source accountsManager:(id)manager isUserRequested:(BOOL)requested;	// 0x34ee3e3d
- (void)_refreshSubscribedCalendar:(id)calendar accountsManager:(id)manager isUserRequested:(BOOL)requested;	// 0x34f1ed5d
- (void)_registerObject:(id)object;	// 0x34ee6f65
- (void)_registerObjectImmediate:(id)immediate;	// 0x34ed5825
- (void)_requestAccessForEntityType:(unsigned)entityType;	// 0x34f18e5d
- (void)_reregisterObject:(id)object oldID:(id)anId;	// 0x34ef0235
- (void)_saveWithoutNotify;	// 0x34f1a2bd
// declared property getter: - (id)_sources;	// 0x34f22125
- (void)_trackModifiedObject:(id)object;	// 0x34f1f885
- (void)_unregisterObject:(id)object;	// 0x34ee723d
- (void)_validateObjectIDs:(id)ids completion:(id)completion;	// 0x34ef09e5
- (void)alarmOccurrencesBetweenStartDate:(id)date endDate:(id)date2 completion:(id)completion;	// 0x34f215c9
- (id)alarmWithUUID:(id)uuid;	// 0x34f214dd
- (void)cacheValidationStatusForEmail:(id)email status:(int)status;	// 0x34f21f0d
- (id)calendarItemWithIdentifier:(id)identifier;	// 0x34f1d181
- (id)calendarItemsWithExternalIdentifier:(id)externalIdentifier;	// 0x34f1d2a1
// declared property getter: - (id)calendarQueue;	// 0x34f22165
- (id)calendarWithExternalURI:(id)externalURI;	// 0x34f1e0dd
- (id)calendarWithID:(id)anId;	// 0x34edf785
- (id)calendarWithIdentifier:(id)identifier;	// 0x34ed8939
// declared property getter: - (id)calendars;	// 0x34f1a801
- (id)calendarsForEntityType:(unsigned)entityType;	// 0x34ed4549
- (void)cancelFetchRequest:(id)request;	// 0x34f21481
- (id)changesSinceSequenceNumber:(int)number;	// 0x34f19099
- (id)closestCachedOccurrenceToDate:(double)date forEventUID:(int)eventUID;	// 0x34f1dff1
- (BOOL)commit:(id *)commit;	// 0x34eeead9
- (id)connection;	// 0x34edbf49
- (CGColorRef)copyCGColorForNewCalendar;	// 0x34f1c91d
- (int)countOfRemindersMatchingPredicate:(id)remindersMatchingPredicate;	// 0x34ee25f9
- (void)daemonRestarted;	// 0x34f1a211
// declared property getter: - (id)database;	// 0x34f22099
// declared property getter: - (id)dbChangedQueue;	// 0x34f221c5
- (void)dealloc;	// 0x34f18b09
- (id)defaultAllDayAlarm;	// 0x34ee9239
// declared property getter: - (id)defaultAllDayAlarmOffset;	// 0x34ee92ad
// declared property getter: - (id)defaultCalendarForNewEvents;	// 0x34ed90c9
// converted property getter: - (id)defaultCalendarForNewReminders;	// 0x34ee1db5
- (id)defaultTimedAlarm;	// 0x34ee7315
// declared property getter: - (id)defaultTimedAlarmOffset;	// 0x34ee7389
- (BOOL)deleteCalendar:(id)calendar forEntityType:(int)entityType error:(id *)error;	// 0x34f1b309
// declared property getter: - (id)deletedObjects;	// 0x34f22039
- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)date timeZone:(id)zone;	// 0x34f1e489
- (int)emailAddressValidationStatus:(id)status;	// 0x34f21fa1
- (void)enumerateEventsMatchingPredicate:(id)predicate usingBlock:(id)block;	// 0x34f21215
- (id)eventForUID:(id)uid occurrenceDate:(id)date;	// 0x34f1ba9d
- (id)eventForUID:(id)uid occurrenceDate:(id)date checkValid:(BOOL)valid;	// 0x34ee1ca9
// declared property getter: - (id)eventStoreIdentifier;	// 0x34f1a25d
- (id)eventWithIdentifier:(id)identifier;	// 0x34f1b439
- (id)eventWithUUID:(id)uuid;	// 0x34f1df01
- (id)eventWithUniqueId:(id)uniqueId;	// 0x34f1bac5
- (id)eventsMatchingPredicate:(id)predicate;	// 0x34edb505
- (id)fetchEventsMatchingPredicate:(id)predicate resultHandler:(id)handler;	// 0x34edb6c1
- (BOOL)fetchProperties:(id)properties forReminders:(id)reminders;	// 0x34f1dbf1
- (id)fetchRemindersMatchingPredicate:(id)predicate completion:(id)completion;	// 0x34f1d685
// declared property getter: - (unsigned long)flags;	// 0x34f220e5
- (BOOL)hideCalendarsFromNotificationCenter:(id)notificationCenter error:(id *)error;	// 0x34f1a94d
- (id)importICS:(id)ics intoCalendar:(id)calendar options:(unsigned)options;	// 0x34f1c09d
- (id)importICSData:(id)data intoCalendar:(id)calendar options:(unsigned)options;	// 0x34f1c6d9
- (void)importICSData:(id)data intoCalendar:(id)calendar options:(unsigned)options completion:(id)completion;	// 0x34f1c275
- (id)insertNewEvent;	// 0x34f1e1bd
- (id)insertNewExceptionDateWithDate:(id)date;	// 0x34f1e219
- (id)insertNewReminder;	// 0x34f1d5c5
// declared property getter: - (id)insertedObjects;	// 0x34f22019
- (id)inviteReplyNotifications;	// 0x34edeb19
- (int)inviteReplyNotificationsCount;	// 0x34f1e821
- (BOOL)isDataProtected;	// 0x34edd421
// declared property getter: - (double)lastDatabaseNotificationTimestamp;	// 0x34f220b9
- (id)localSource;	// 0x34f1a5f1
- (void)locationBasedAlarmOccurrencesWithCompletion:(id)completion;	// 0x34f218d1
- (BOOL)markCalendarAlerted:(id)alerted;	// 0x34f1ab15
- (void)markEventAlerted:(id)alerted;	// 0x34f1c019
- (BOOL)markInviteReplyNotificationAlerted:(id)alerted;	// 0x34f1e999
- (void)markNotificationsAlertedAndSave:(id)save;	// 0x34f1e25d
- (BOOL)markResourceChangeAlerted:(id)alerted error:(id *)error;	// 0x34f1e589
- (int)notifiableEventCount;	// 0x34f1e45d
- (id)objectWithObjectID:(id)objectID;	// 0x34ee1f09
// declared property getter: - (id)objectsPendingCommit;	// 0x34f22145
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)calendars;	// 0x34ee13b1
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)calendars onDay:(double)day;	// 0x34ee19e5
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;	// 0x34ee18f9
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)allRemindersDueBeforeOrOnDueDate calendars:(id)calendars;	// 0x34f1d9dd
- (id)predicateForAllRemindersWithDueDate:(id)dueDate calendars:(id)calendars;	// 0x34f1d9a9
- (id)predicateForCompletedRemindersWithCalendars:(id)calendars;	// 0x34f1da71
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)completionDateStarting ending:(id)ending calendars:(id)calendars;	// 0x34f1d889
- (id)predicateForCompletedRemindersWithDueDate:(id)dueDate calendars:(id)calendars sortOrder:(int)order;	// 0x34ee2ff9
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)dueDateOrCompletionDate calendars:(id)calendars sortOrder:(int)order;	// 0x34f1d971
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date calendars:(id)calendars;	// 0x34f21bb5
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date calendars:(id)calendars loadDefaultProperties:(BOOL)properties;	// 0x34edb001
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date eventUUID:(id)uuid calendars:(id)calendars;	// 0x34f21cc5
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)incompleteRemindersDueBeforeOrOnDueDate calendars:(id)calendars sortOrder:(int)order;	// 0x34f1d93d
- (id)predicateForIncompleteRemindersWithDueDate:(id)dueDate calendars:(id)calendars sortOrder:(int)order;	// 0x34ee2365
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)dueDateStarting ending:(id)ending calendars:(id)calendars;	// 0x34f1d7d9
- (id)predicateForNotifiableEvents;	// 0x34ede8b5
- (id)predicateForNotificationCenterVisibleEvents;	// 0x34f21e09
- (id)predicateForRemindersInCalendars:(id)calendars;	// 0x34f1d791
- (id)predicateForRemindersWithSearchTerm:(id)searchTerm;	// 0x34f1da95
- (id)predicateForRemindersWithTitle:(id)title calendars:(id)calendars;	// 0x34f1da15
- (id)predicateForRemindersWithTitle:(id)title listTitle:(id)title2 limitToCompletedOrIncomplete:(BOOL)completedOrIncomplete completed:(BOOL)completed dueAfter:(id)after dueBefore:(id)before searchTerm:(id)term sortOrder:(int)order;	// 0x34f1dad5
- (id)predicateForRemindersWithTitle:(id)title listTitle:(id)title2 limitToCompletedOrIncomplete:(BOOL)completedOrIncomplete completed:(BOOL)completed dueAfter:(id)after dueBefore:(id)before searchTerm:(id)term sortOrder:(int)order maxResults:(unsigned)results;	// 0x34f1db11
- (id)predicateForUnacknowledgedEvents;	// 0x34f21e25
- (id)predicateForUnalertedEvents;	// 0x34f21e41
- (id)predicateForUpcomingEventsWithLimit:(int)limit;	// 0x34f21e5d
- (id)publicObjectWithObjectID:(id)objectID;	// 0x34f1f599
- (id)publicObjectWithPersistentObject:(id)persistentObject;	// 0x34ed74c9
// declared property getter: - (id)publicRegisteredObjects;	// 0x34f21ff9
- (int)readWriteCalendarCountForEntityType:(unsigned)entityType;	// 0x34ed8e61
- (id)readWriteCalendarsForEntityType:(unsigned)entityType;	// 0x34f1af85
- (void)refreshSourcesIfNecessary;	// 0x34f1f0d1
- (void)refreshSourcesIfNecessary:(BOOL)necessary;	// 0x34ee3b81
- (id)registerFetchedObjectWithID:(id)anId;	// 0x34ed6145
- (id)registerFetchedObjectWithID:(id)anId defaultLoadedProperties:(id)properties;	// 0x34ed4fa9
// declared property getter: - (id)registeredObjects;	// 0x34f21fd9
// declared property getter: - (id)registeredQueue;	// 0x34f22185
- (oneway void)release;	// 0x34ed8d81
- (id)reminderWithExternalURI:(id)externalURI;	// 0x34f1d045
- (id)remindersMatchingPredicate:(id)predicate;	// 0x34ee3031
- (BOOL)removeCalendar:(id)calendar commit:(BOOL)commit error:(id *)error;	// 0x34f1b24d
- (BOOL)removeCalendar:(id)calendar error:(id *)error;	// 0x34f1b159
- (BOOL)removeEvent:(id)event span:(int)span commit:(BOOL)commit error:(id *)error;	// 0x34f1bbdd
- (BOOL)removeEvent:(id)event span:(int)span error:(id *)error;	// 0x34f1bbb5
- (BOOL)removeInviteReplyNotification:(id)notification error:(id *)error;	// 0x34f1ea89
- (BOOL)removeInviteReplyNotifications:(id)notifications error:(id *)error;	// 0x34f1eac5
- (BOOL)removeReminder:(id)reminder commit:(BOOL)commit error:(id *)error;	// 0x34f1cf6d
- (BOOL)removeReminder:(id)reminder error:(id *)error;	// 0x34f1cf4d
- (BOOL)removeResourceChange:(id)change error:(id *)error;	// 0x34f1e689
- (BOOL)removeResourceChanges:(id)changes error:(id *)error;	// 0x34f1e6c5
- (BOOL)removeSource:(id)source error:(id *)error;	// 0x34f1a779
- (void)requestAccessToEntityType:(unsigned)entityType completion:(id)completion;	// 0x34f18f31
- (void)reset;	// 0x34f201b1
- (id)resourceChangesForEntityTypes:(unsigned)entityTypes;	// 0x34eded7d
- (void)rollback;	// 0x34f1feb1
- (BOOL)saveCalendar:(id)calendar commit:(BOOL)commit error:(id *)error;	// 0x34f1b179
- (BOOL)saveCalendar:(id)calendar error:(id *)error;	// 0x34f1b139
- (BOOL)saveEvent:(id)event span:(int)span commit:(BOOL)commit error:(id *)error;	// 0x34eeabb1
- (BOOL)saveEvent:(id)event span:(int)span error:(id *)error;	// 0x34eeab89
- (BOOL)saveReminder:(id)reminder commit:(BOOL)commit error:(id *)error;	// 0x34f1ce79
- (BOOL)saveReminder:(id)reminder error:(id *)error;	// 0x34f1ce59
- (BOOL)saveSource:(id)source error:(id *)error;	// 0x34f1a6d1
- (int)sequenceNumber;	// 0x34f19041
- (unsigned)serverPort;	// 0x34ed48dd
// declared property setter: - (void)setCalendarQueue:(id)queue;	// 0x34f22175
// declared property setter: - (void)setDatabase:(id)database;	// 0x34f220a9
// declared property setter: - (void)setDbChangedQueue:(id)queue;	// 0x34f221d5
// declared property setter: - (void)setDefaultAllDayAlarmOffset:(id)offset;	// 0x34f21ec9
- (void)setDefaultCalendarForNewEvents:(id)newEvents;	// 0x34f1cb51
// converted property setter: - (void)setDefaultCalendarForNewReminders:(id)newReminders;	// 0x34f1cd4d
// declared property setter: - (void)setDefaultTimedAlarmOffset:(id)offset;	// 0x34f21e85
// declared property setter: - (void)setDeletedObjects:(id)objects;	// 0x34f22049
// declared property setter: - (void)setFlags:(unsigned long)flags;	// 0x34f220f5
// declared property setter: - (void)setInsertedObjects:(id)objects;	// 0x34f22029
- (BOOL)setInvitationStatus:(unsigned)status forEvent:(id)event error:(id *)error;	// 0x34f1bcb1
- (BOOL)setInvitationStatus:(unsigned)status forEvents:(id)events error:(id *)error;	// 0x34f1bdd5
// declared property setter: - (void)setLastDatabaseNotificationTimestamp:(double)timestamp;	// 0x34f220d1
// declared property setter: - (void)setObjectsPendingCommit:(id)commit;	// 0x34f22155
// declared property setter: - (void)setPublicRegisteredObjects:(id)objects;	// 0x34f22009
// declared property setter: - (void)setRegisteredObjects:(id)objects;	// 0x34f21fe9
// declared property setter: - (void)setRegisteredQueue:(id)queue;	// 0x34f22195
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x34ed4501
// declared property setter: - (void)setUnsavedChangesQueue:(id)queue;	// 0x34f221b5
// declared property setter: - (void)setUpdatedObjects:(id)objects;	// 0x34f22069
// declared property setter: - (void)set_cachedValidatedEmails:(id)emails;	// 0x34f221f5
// declared property setter: - (void)set_calendars:(id)calendars;	// 0x34f22115
// declared property setter: - (void)set_defaultCalendarForNewEvents:(id)newEvents;	// 0x34ed9349
// declared property setter: - (void)set_defaultCalendarForNewReminders:(id)newReminders;	// 0x34ee2121
// declared property setter: - (void)set_sources:(id)sources;	// 0x34f22135
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned)entityTypes;	// 0x34ed8a99
- (id)sourceWithIdentifier:(id)identifier;	// 0x34ed7d6d
// converted property getter: - (id)sources;	// 0x34ed7e59
// declared property getter: - (id)timeZone;	// 0x34ed935d
- (int)unacknowledgedEventCount;	// 0x34f1e431
// declared property getter: - (id)unsavedChangesQueue;	// 0x34f221a5
// declared property getter: - (id)updatedObjects;	// 0x34f22059
@end

