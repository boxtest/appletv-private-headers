/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "CalDAVCalendar.h"
#import "DACalDAV-Structs.h"

@class NSTimeZone, NSArray, NSString, NSMutableArray, MobileCalDAVPrincipal, NSSet, NSURL, NSMutableDictionary, NSDictionary, NSMutableSet;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {
	MobileCalDAVPrincipal *_principal;	// 4 = 0x4
	NSString *_calGUID;	// 8 = 0x8
	NSURL *_calendarURL;	// 12 = 0xc
	BOOL _isDirty;	// 16 = 0x10
	BOOL _isTaskContainer;	// 17 = 0x11
	BOOL _isEventContainer;	// 18 = 0x12
	BOOL _isSubscribed;	// 19 = 0x13
	BOOL _isScheduleInbox;	// 20 = 0x14
	BOOL _isScheduleOutbox;	// 21 = 0x15
	BOOL _isNotification;	// 22 = 0x16
	BOOL _isEditable;	// 23 = 0x17
	BOOL _isRenameable;	// 24 = 0x18
	BOOL _isEnabled;	// 25 = 0x19
	BOOL _isAffectingAvailability;	// 26 = 0x1a
	BOOL _canBePublished;	// 27 = 0x1b
	NSString *_pushKey;	// 28 = 0x1c
	NSURL *_publishURL;	// 32 = 0x20
	NSString *_syncToken;	// 36 = 0x24
	NSMutableDictionary *_uniqueIdentifierToLocalUIDMap;	// 40 = 0x28
	NSMutableDictionary *_URLToLocalUIDMap;	// 44 = 0x2c
	NSMutableDictionary *_URLToEtagMap;	// 48 = 0x30
	void *_calCalendar;	// 52 = 0x34
	int _mostRecentEventChangeIndex;	// 56 = 0x38
	int _mostRecentTaskChangeIndex;	// 60 = 0x3c
	int _mostRecentAlarmChangeIndex;	// 64 = 0x40
	int _mostRecentAttendeeChangeIndex;	// 68 = 0x44
	int _mostRecentAttachmentChangeIndex;	// 72 = 0x48
	int _mostRecentRecurChangeIndex;	// 76 = 0x4c
	int _mostRecentEventActionChangeIndex;	// 80 = 0x50
	NSArray *_syncActions;	// 84 = 0x54
	NSDictionary *_hrefsToModDeleteActions;	// 88 = 0x58
	NSDictionary *_uuidsToAddActions;	// 92 = 0x5c
	NSMutableSet *_eventUIDsNeedingAttendeeFixup;	// 96 = 0x60
	NSMutableArray *_outstandingTaskGroups;	// 100 = 0x64
	id _syncActionCompletionBlock;	// 104 = 0x68
@private
	BOOL _wasModifiedLocally;	// 108 = 0x6c
}
@property(readonly, assign) NSString *accountID;	// G=0x3022d9e1; 
@property(readonly, assign) NSSet *allEventURLs;	// G=0x3022c8b1; 
@property(retain) NSDictionary *bulkRequests;	// G=0x3022c211; S=0x3022c245; 
@property(retain) NSURL *calendarURL;	// G=0x3022bb99; S=0x3022bba9; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x3022c4cd; S=0x3022c4ed; 
@property(assign) BOOL canBePublished;	// G=0x302323e1; S=0x302323f1; @synthesize=_canBePublished
@property(retain) NSString *color;	// G=0x3022c13d; S=0x3022c191; 
@property(retain) NSString *ctag;	// G=0x3022c7c5; S=0x3022c83d; 
@property(readonly, assign) NSString *displayColor;	// G=0x3022d9bd; 
@property(retain) NSString *guid;	// G=0x3022bab1; S=0x3022bac1; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x30230b45; 
@property(assign) BOOL isAffectingAvailability;	// G=0x302323c1; S=0x302323d1; @synthesize=_isAffectingAvailability
@property(assign) BOOL isDirty;	// G=0x302323a1; S=0x302323b1; @synthesize=_isDirty
@property(assign) BOOL isEditable;	// G=0x3022c735; S=0x3022c761; 
@property(assign) BOOL isEnabled;	// G=0x30232381; S=0x30232391; @synthesize=_isEnabled
@property(assign) BOOL isEventContainer;	// G=0x3022be41; S=0x3022be65; 
@property(readonly, assign) BOOL isHidden;	// G=0x3022d999; 
@property(assign) BOOL isNotification;	// G=0x30232341; S=0x30232351; @synthesize=_isNotification
@property(assign) BOOL isRenameable;	// G=0x30232361; S=0x30232371; @synthesize=_isRenameable
@property(assign) BOOL isScheduleInbox;	// G=0x3022bec1; S=0x3022bec5; 
@property(assign) BOOL isScheduleOutbox;	// G=0x30232321; S=0x30232331; @synthesize=_isScheduleOutbox
@property(assign) BOOL isSubscribed;	// G=0x30232301; S=0x30232311; @synthesize=_isSubscribed
@property(assign) BOOL isTaskContainer;	// G=0x3022bdc1; S=0x3022bde5; 
@property(retain) NSString *notes;	// G=0x3022c00d; S=0x3022c041; 
@property(assign) int order;	// G=0x3022c615; S=0x3022c641; 
@property(retain) NSURL *owner;	// G=0x3022c341; S=0x3022c39d; 
@property(retain) NSString *ownerDisplayName;	// G=0x3022c421; S=0x3022c459; 
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x30232281; @synthesize=_principal
@property(retain) NSURL *publishURL;	// G=0x302322c9; S=0x302322dd; @synthesize=_publishURL
@property(retain) NSString *pushKey;	// G=0x30232291; S=0x302322a5; @synthesize=_pushKey
@property(assign) int sharingStatus;	// G=0x3022c695; S=0x3022c6d1; 
@property(readonly, assign) NSArray *syncActions;	// G=0x30230b25; 
@property(retain) NSString *syncToken;	// G=0x30232401; S=0x30232415; @synthesize=_syncToken
@property(retain) NSTimeZone *timeZone;	// G=0x3022c5f5; S=0x3022c611; 
@property(retain) NSString *title;	// G=0x3022bec9; S=0x3022bf01; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x30230b35; 
@property(assign) BOOL wasModifiedLocally;	// G=0x30232439; S=0x30232449; @synthesize=_wasModifiedLocally
+ (int)addedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3022e29d
+ (BOOL)clearCalendarChangesToIndex:(int)index inPrincipal:(id)principal;	// 0x3022ebc1
+ (int)deletedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3022e9b5
+ (int)modifiedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3022e69d
- (void *)initCalCalendarWithTitle:(id)title;	// 0x3022da19
- (id)initNotificationCollectionWithPrincipal:(id)principal;	// 0x3022b7a9
- (id)initWithCalendarURL:(id)calendarURL calCalendar:(void *)calendar principal:(id)principal;	// 0x3022b6ed
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal;	// 0x3022b785
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x3022b489
- (int)_addAddedItemsOfType:(int)type toArray:(id)array;	// 0x3022f20d
- (void)_addCalendarItemWithRowID:(int)rowID toArrayIfNeeded:(id)arrayIfNeeded;	// 0x3022f08d
- (id)_calExternalRep;	// 0x3022e239
- (void *)_copyCalItemWithExternalID:(id)externalID;	// 0x3022cd71
- (void *)_copyCalItemWithUniqueIdentifier:(id)uniqueIdentifier inCalendar:(void *)calendar orStore:(void *)store;	// 0x3022cce1
- (id)_copyDeletedEventActions;	// 0x3022ff7d
- (id)_createActionsForItems:(id)items withAction:(int)action alreadySentItems:(id)items3 shouldSave:(BOOL *)save;	// 0x30230571
- (void)_dropCalStoreContext;	// 0x3022e1d5
- (void)_fixUpAttendees;	// 0x30230b55
- (int)_gatherDeletedChanges:(/*function-pointer*/ void *)changes inDictionary:(id)dictionary;	// 0x3022fb39
- (int)_gatherModifiedEventsInArray:(id)array;	// 0x3022f609
- (int)_gatherModifiedItemsFromCalChangesCall:(/*function-pointer*/ void *)calChangesCall inArray:(id)array;	// 0x3022f4e9
- (int)_gatherModifiedTasksInArray:(id)array;	// 0x3022f865
- (id)_itemPropertyDictForItemAtIndex:(int)index withChangedIDs:(CFArrayRef)changedIDs withExternalIDs:(CFArrayRef)externalIDs uniqueIdentifiers:(CFArrayRef)identifiers significantAttributeChanges:(CFArrayRef)changes oldCalendarIDs:(CFArrayRef)ids;	// 0x3022ec45
- (BOOL)_removeCalendarItemWithURL:(id)url;	// 0x3022d6f5
- (void)_setSupportsEvents:(BOOL)events supportsTodos:(BOOL)todos;	// 0x3022bd81
// declared property getter: - (id)accountID;	// 0x3022d9e1
// declared property getter: - (id)allEventURLs;	// 0x3022c8b1
- (Class)appSpecificCalendarItemClass;	// 0x30232265
// declared property getter: - (id)bulkRequests;	// 0x3022c211
// declared property getter: - (id)calendarURL;	// 0x3022bb99
// declared property getter: - (id)calendarUserAddresses;	// 0x3022c4cd
// declared property getter: - (BOOL)canBePublished;	// 0x302323e1
- (void)clearEventChanges;	// 0x302301e9
// declared property getter: - (id)color;	// 0x3022c13d
- (id)copyAddedItems;	// 0x3022f3c5
- (id)copyAllItems;	// 0x3022ee2d
- (id)copyDeletedItems;	// 0x30230179
- (id)copyModifiedItems;	// 0x3022fa21
// declared property getter: - (id)ctag;	// 0x3022c7c5
- (void)dealloc;	// 0x3022b805
- (void)deleteCalendar;	// 0x3022b9e5
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x3022d889
- (id)description;	// 0x3022b955
// declared property getter: - (id)displayColor;	// 0x3022d9bd
- (id)etagsForEventURLs:(id)eventURLs;	// 0x3022cab5
- (void)flushCaches;	// 0x30232171
- (void *)getCalCalendar;	// 0x3022dec9
// declared property getter: - (id)guid;	// 0x3022bab1
- (BOOL)hasEvents;	// 0x3022d965
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x30230b45
// declared property getter: - (BOOL)isAffectingAvailability;	// 0x302323c1
// declared property getter: - (BOOL)isDirty;	// 0x302323a1
// declared property getter: - (BOOL)isEditable;	// 0x3022c735
// declared property getter: - (BOOL)isEnabled;	// 0x30232381
// declared property getter: - (BOOL)isEventContainer;	// 0x3022be41
// declared property getter: - (BOOL)isHidden;	// 0x3022d999
// declared property getter: - (BOOL)isNotification;	// 0x30232341
// declared property getter: - (BOOL)isRenameable;	// 0x30232361
// declared property getter: - (BOOL)isScheduleInbox;	// 0x3022bec1
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x30232321
// declared property getter: - (BOOL)isSubscribed;	// 0x30232301
// declared property getter: - (BOOL)isTaskContainer;	// 0x3022bdc1
- (int)localUIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x3022ce9d
// declared property getter: - (id)notes;	// 0x3022c00d
// declared property getter: - (int)order;	// 0x3022c615
// declared property getter: - (id)owner;	// 0x3022c341
// declared property getter: - (id)ownerDisplayName;	// 0x3022c421
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x30231b49
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x30230f5d
// declared property getter: - (id)principal;	// 0x30232281
// declared property getter: - (id)publishURL;	// 0x302322c9
// declared property getter: - (id)pushKey;	// 0x30232291
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3022d1d9
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x3022c245
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x3022bba9
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x3022c4ed
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x302323f1
// declared property setter: - (void)setColor:(id)color;	// 0x3022c191
// declared property setter: - (void)setCtag:(id)ctag;	// 0x3022c83d
- (BOOL)setEtag:(id)etag forEventAtURL:(id)url;	// 0x3022d039
// declared property setter: - (void)setGuid:(id)guid;	// 0x3022bac1
// declared property setter: - (void)setIsAffectingAvailability:(BOOL)availability;	// 0x302323d1
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x302323b1
// declared property setter: - (void)setIsEditable:(BOOL)editable;	// 0x3022c761
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x30232391
// declared property setter: - (void)setIsEventContainer:(BOOL)container;	// 0x3022be65
// declared property setter: - (void)setIsNotification:(BOOL)notification;	// 0x30232351
// declared property setter: - (void)setIsRenameable:(BOOL)renameable;	// 0x30232371
// declared property setter: - (void)setIsScheduleInbox:(BOOL)inbox;	// 0x3022bec5
// declared property setter: - (void)setIsScheduleOutbox:(BOOL)outbox;	// 0x30232331
// declared property setter: - (void)setIsSubscribed:(BOOL)subscribed;	// 0x30232311
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x3022bde5
// declared property setter: - (void)setNotes:(id)notes;	// 0x3022c041
// declared property setter: - (void)setOrder:(int)order;	// 0x3022c641
// declared property setter: - (void)setOwner:(id)owner;	// 0x3022c39d
// declared property setter: - (void)setOwnerDisplayName:(id)name;	// 0x3022c459
// declared property setter: - (void)setPublishURL:(id)url;	// 0x302322dd
// declared property setter: - (void)setPushKey:(id)key;	// 0x302322a5
- (BOOL)setScheduleTag:(id)tag forEventAtURL:(id)url;	// 0x3022d125
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x3022c6d1
// declared property setter: - (void)setSyncToken:(id)token;	// 0x30232415
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3022c611
// declared property setter: - (void)setTitle:(id)title;	// 0x3022bf01
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;	// 0x3022cedd
- (void)setUniqueIdentifier:(id)identifier forLocalUID:(int)localUID;	// 0x3022ce31
// declared property setter: - (void)setWasModifiedLocally:(BOOL)locally;	// 0x30232449
// declared property getter: - (int)sharingStatus;	// 0x3022c695
// declared property getter: - (id)syncActions;	// 0x30230b25
- (void)syncDidFinishWithError:(id)sync;	// 0x30232255
// declared property getter: - (id)syncToken;	// 0x30232401
// declared property getter: - (id)timeZone;	// 0x3022c5f5
// declared property getter: - (id)title;	// 0x3022bec9
- (BOOL)updateResourcesFromServer:(id)server;	// 0x3022d399
// declared property getter: - (id)uuidsToAddActions;	// 0x30230b35
// declared property getter: - (BOOL)wasModifiedLocally;	// 0x30232439
@end

