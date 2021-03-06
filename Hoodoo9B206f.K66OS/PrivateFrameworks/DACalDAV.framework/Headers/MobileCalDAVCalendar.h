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
@property(readonly, assign) NSString *accountID;	// G=0x3314f865; 
@property(readonly, assign) NSSet *allEventURLs;	// G=0x3314e735; 
@property(retain) NSDictionary *bulkRequests;	// G=0x3314e095; S=0x3314e0c9; 
@property(retain) NSURL *calendarURL;	// G=0x3314da1d; S=0x3314da2d; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x3314e351; S=0x3314e371; 
@property(assign) BOOL canBePublished;	// G=0x33154265; S=0x33154275; @synthesize=_canBePublished
@property(retain) NSString *color;	// G=0x3314dfc1; S=0x3314e015; 
@property(retain) NSString *ctag;	// G=0x3314e649; S=0x3314e6c1; 
@property(readonly, assign) NSString *displayColor;	// G=0x3314f841; 
@property(retain) NSString *guid;	// G=0x3314d935; S=0x3314d945; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x331529c9; 
@property(assign) BOOL isAffectingAvailability;	// G=0x33154245; S=0x33154255; @synthesize=_isAffectingAvailability
@property(assign) BOOL isDirty;	// G=0x33154225; S=0x33154235; @synthesize=_isDirty
@property(assign) BOOL isEditable;	// G=0x3314e5b9; S=0x3314e5e5; 
@property(assign) BOOL isEnabled;	// G=0x33154205; S=0x33154215; @synthesize=_isEnabled
@property(assign) BOOL isEventContainer;	// G=0x3314dcc5; S=0x3314dce9; 
@property(readonly, assign) BOOL isHidden;	// G=0x3314f81d; 
@property(assign) BOOL isNotification;	// G=0x331541c5; S=0x331541d5; @synthesize=_isNotification
@property(assign) BOOL isRenameable;	// G=0x331541e5; S=0x331541f5; @synthesize=_isRenameable
@property(assign) BOOL isScheduleInbox;	// G=0x3314dd45; S=0x3314dd49; 
@property(assign) BOOL isScheduleOutbox;	// G=0x331541a5; S=0x331541b5; @synthesize=_isScheduleOutbox
@property(assign) BOOL isSubscribed;	// G=0x33154185; S=0x33154195; @synthesize=_isSubscribed
@property(assign) BOOL isTaskContainer;	// G=0x3314dc45; S=0x3314dc69; 
@property(retain) NSString *notes;	// G=0x3314de91; S=0x3314dec5; 
@property(assign) int order;	// G=0x3314e499; S=0x3314e4c5; 
@property(retain) NSURL *owner;	// G=0x3314e1c5; S=0x3314e221; 
@property(retain) NSString *ownerDisplayName;	// G=0x3314e2a5; S=0x3314e2dd; 
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x33154105; @synthesize=_principal
@property(retain) NSURL *publishURL;	// G=0x3315414d; S=0x33154161; @synthesize=_publishURL
@property(retain) NSString *pushKey;	// G=0x33154115; S=0x33154129; @synthesize=_pushKey
@property(assign) int sharingStatus;	// G=0x3314e519; S=0x3314e555; 
@property(readonly, assign) NSArray *syncActions;	// G=0x331529a9; 
@property(retain) NSString *syncToken;	// G=0x33154285; S=0x33154299; @synthesize=_syncToken
@property(retain) NSTimeZone *timeZone;	// G=0x3314e479; S=0x3314e495; 
@property(retain) NSString *title;	// G=0x3314dd4d; S=0x3314dd85; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x331529b9; 
@property(assign) BOOL wasModifiedLocally;	// G=0x331542bd; S=0x331542cd; @synthesize=_wasModifiedLocally
+ (int)addedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x33150121
+ (BOOL)clearCalendarChangesToIndex:(int)index inPrincipal:(id)principal;	// 0x33150a45
+ (int)deletedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x33150839
+ (int)modifiedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x33150521
- (void *)initCalCalendarWithTitle:(id)title;	// 0x3314f89d
- (id)initNotificationCollectionWithPrincipal:(id)principal;	// 0x3314d62d
- (id)initWithCalendarURL:(id)calendarURL calCalendar:(void *)calendar principal:(id)principal;	// 0x3314d571
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal;	// 0x3314d609
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x3314d30d
- (int)_addAddedItemsOfType:(int)type toArray:(id)array;	// 0x33151091
- (void)_addCalendarItemWithRowID:(int)rowID toArrayIfNeeded:(id)arrayIfNeeded;	// 0x33150f11
- (id)_calExternalRep;	// 0x331500bd
- (void *)_copyCalItemWithExternalID:(id)externalID;	// 0x3314ebf5
- (void *)_copyCalItemWithUniqueIdentifier:(id)uniqueIdentifier inCalendar:(void *)calendar orStore:(void *)store;	// 0x3314eb65
- (id)_copyDeletedEventActions;	// 0x33151e01
- (id)_createActionsForItems:(id)items withAction:(int)action alreadySentItems:(id)items3 shouldSave:(BOOL *)save;	// 0x331523f5
- (void)_dropCalStoreContext;	// 0x33150059
- (void)_fixUpAttendees;	// 0x331529d9
- (int)_gatherDeletedChanges:(/*function-pointer*/ void *)changes inDictionary:(id)dictionary;	// 0x331519bd
- (int)_gatherModifiedEventsInArray:(id)array;	// 0x3315148d
- (int)_gatherModifiedItemsFromCalChangesCall:(/*function-pointer*/ void *)calChangesCall inArray:(id)array;	// 0x3315136d
- (int)_gatherModifiedTasksInArray:(id)array;	// 0x331516e9
- (id)_itemPropertyDictForItemAtIndex:(int)index withChangedIDs:(CFArrayRef)changedIDs withExternalIDs:(CFArrayRef)externalIDs uniqueIdentifiers:(CFArrayRef)identifiers significantAttributeChanges:(CFArrayRef)changes oldCalendarIDs:(CFArrayRef)ids;	// 0x33150ac9
- (BOOL)_removeCalendarItemWithURL:(id)url;	// 0x3314f579
- (void)_setSupportsEvents:(BOOL)events supportsTodos:(BOOL)todos;	// 0x3314dc05
// declared property getter: - (id)accountID;	// 0x3314f865
// declared property getter: - (id)allEventURLs;	// 0x3314e735
- (Class)appSpecificCalendarItemClass;	// 0x331540e9
// declared property getter: - (id)bulkRequests;	// 0x3314e095
// declared property getter: - (id)calendarURL;	// 0x3314da1d
// declared property getter: - (id)calendarUserAddresses;	// 0x3314e351
// declared property getter: - (BOOL)canBePublished;	// 0x33154265
- (void)clearEventChanges;	// 0x3315206d
// declared property getter: - (id)color;	// 0x3314dfc1
- (id)copyAddedItems;	// 0x33151249
- (id)copyAllItems;	// 0x33150cb1
- (id)copyDeletedItems;	// 0x33151ffd
- (id)copyModifiedItems;	// 0x331518a5
// declared property getter: - (id)ctag;	// 0x3314e649
- (void)dealloc;	// 0x3314d689
- (void)deleteCalendar;	// 0x3314d869
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x3314f70d
- (id)description;	// 0x3314d7d9
// declared property getter: - (id)displayColor;	// 0x3314f841
- (id)etagsForEventURLs:(id)eventURLs;	// 0x3314e939
- (void)flushCaches;	// 0x33153ff5
- (void *)getCalCalendar;	// 0x3314fd4d
// declared property getter: - (id)guid;	// 0x3314d935
- (BOOL)hasEvents;	// 0x3314f7e9
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x331529c9
// declared property getter: - (BOOL)isAffectingAvailability;	// 0x33154245
// declared property getter: - (BOOL)isDirty;	// 0x33154225
// declared property getter: - (BOOL)isEditable;	// 0x3314e5b9
// declared property getter: - (BOOL)isEnabled;	// 0x33154205
// declared property getter: - (BOOL)isEventContainer;	// 0x3314dcc5
// declared property getter: - (BOOL)isHidden;	// 0x3314f81d
// declared property getter: - (BOOL)isNotification;	// 0x331541c5
// declared property getter: - (BOOL)isRenameable;	// 0x331541e5
// declared property getter: - (BOOL)isScheduleInbox;	// 0x3314dd45
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x331541a5
// declared property getter: - (BOOL)isSubscribed;	// 0x33154185
// declared property getter: - (BOOL)isTaskContainer;	// 0x3314dc45
- (int)localUIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x3314ed21
// declared property getter: - (id)notes;	// 0x3314de91
// declared property getter: - (int)order;	// 0x3314e499
// declared property getter: - (id)owner;	// 0x3314e1c5
// declared property getter: - (id)ownerDisplayName;	// 0x3314e2a5
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x331539cd
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x33152de1
// declared property getter: - (id)principal;	// 0x33154105
// declared property getter: - (id)publishURL;	// 0x3315414d
// declared property getter: - (id)pushKey;	// 0x33154115
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3314f05d
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x3314e0c9
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x3314da2d
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x3314e371
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x33154275
// declared property setter: - (void)setColor:(id)color;	// 0x3314e015
// declared property setter: - (void)setCtag:(id)ctag;	// 0x3314e6c1
- (BOOL)setEtag:(id)etag forEventAtURL:(id)url;	// 0x3314eebd
// declared property setter: - (void)setGuid:(id)guid;	// 0x3314d945
// declared property setter: - (void)setIsAffectingAvailability:(BOOL)availability;	// 0x33154255
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x33154235
// declared property setter: - (void)setIsEditable:(BOOL)editable;	// 0x3314e5e5
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x33154215
// declared property setter: - (void)setIsEventContainer:(BOOL)container;	// 0x3314dce9
// declared property setter: - (void)setIsNotification:(BOOL)notification;	// 0x331541d5
// declared property setter: - (void)setIsRenameable:(BOOL)renameable;	// 0x331541f5
// declared property setter: - (void)setIsScheduleInbox:(BOOL)inbox;	// 0x3314dd49
// declared property setter: - (void)setIsScheduleOutbox:(BOOL)outbox;	// 0x331541b5
// declared property setter: - (void)setIsSubscribed:(BOOL)subscribed;	// 0x33154195
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x3314dc69
// declared property setter: - (void)setNotes:(id)notes;	// 0x3314dec5
// declared property setter: - (void)setOrder:(int)order;	// 0x3314e4c5
// declared property setter: - (void)setOwner:(id)owner;	// 0x3314e221
// declared property setter: - (void)setOwnerDisplayName:(id)name;	// 0x3314e2dd
// declared property setter: - (void)setPublishURL:(id)url;	// 0x33154161
// declared property setter: - (void)setPushKey:(id)key;	// 0x33154129
- (BOOL)setScheduleTag:(id)tag forEventAtURL:(id)url;	// 0x3314efa9
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x3314e555
// declared property setter: - (void)setSyncToken:(id)token;	// 0x33154299
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3314e495
// declared property setter: - (void)setTitle:(id)title;	// 0x3314dd85
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;	// 0x3314ed61
- (void)setUniqueIdentifier:(id)identifier forLocalUID:(int)localUID;	// 0x3314ecb5
// declared property setter: - (void)setWasModifiedLocally:(BOOL)locally;	// 0x331542cd
// declared property getter: - (int)sharingStatus;	// 0x3314e519
// declared property getter: - (id)syncActions;	// 0x331529a9
- (void)syncDidFinishWithError:(id)sync;	// 0x331540d9
// declared property getter: - (id)syncToken;	// 0x33154285
// declared property getter: - (id)timeZone;	// 0x3314e479
// declared property getter: - (id)title;	// 0x3314dd4d
- (BOOL)updateResourcesFromServer:(id)server;	// 0x3314f21d
// declared property getter: - (id)uuidsToAddActions;	// 0x331529b9
// declared property getter: - (BOOL)wasModifiedLocally;	// 0x331542bd
@end

