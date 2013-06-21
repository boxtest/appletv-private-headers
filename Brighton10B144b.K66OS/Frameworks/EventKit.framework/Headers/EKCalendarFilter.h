/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKCalendarFilter : NSObject <NSCopying> {
	opaque_pthread_mutex_t _lock;	// 4 = 0x4
	NSMutableSet *_calendarUIDs;	// 48 = 0x30
	CalDatabase *_database;	// 52 = 0x34
	NSMutableDictionary *_queryCache;	// 56 = 0x38
	NSString *_searchTerm;	// 60 = 0x3c
	int _entityType;	// 64 = 0x40
}
@property(copy, nonatomic) NSString *searchTerm;	// G=0x318286a5; S=0x318286b9; @synthesize=_searchTerm
+ (void)_addCalendarUIDsFromPrefs:(id)prefs toSet:(id)set database:(CalDatabase *)database;	// 0x318279f5
+ (void)_addCalendarWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x318279a5
+ (void)_addCalendarsForStoreWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x31827af5
- (id)initFilteringAllWithDatabase:(CalDatabase *)database;	// 0x31826a2d
- (id)initWithDatabase:(CalDatabase *)database;	// 0x3182698d
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type;	// 0x318269ad
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type calendarUIDs:(id)uids;	// 0x31826bf1
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type showingCalendarsWithUIDs:(id)uids;	// 0x31826b3d
- (id)initWithDatabase:(CalDatabase *)database filteringCalendars:(id)calendars;	// 0x31826b95
- (id)initWithDatabase:(CalDatabase *)database showingCalendars:(id)calendars;	// 0x31826a85
- (id)initWithDatabase:(CalDatabase *)database showingCalendarsWithUIDs:(id)uids;	// 0x31826ae1
- (id)initWithPersistentIdentifier:(id)persistentIdentifier database:(CalDatabase *)database;	// 0x318269d1
- (id)_UIDAntiSetWithCalendars:(id)calendars;	// 0x31827005
- (id)_UIDSetWithCalendars:(id)calendars;	// 0x31826ee1
- (id)_addFilterToQuery:(id)query creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x318280f9
- (id)_calendarUIDsFromPersistentIdentifier:(id)persistentIdentifier;	// 0x31827bc1
- (void)_databaseChanged;	// 0x31826d9d
- (id)_generateUIDSetToFilterAllCalendars;	// 0x31827281
- (id)_generateUIDSetToFilterCalendars:(id)filterCalendars;	// 0x318271b9
- (id)_generateUIDSetToShowCalendarUIDs:(id)showCalendarUIDs;	// 0x318271fd
- (id)_generateUIDSetToShowCalendars:(id)showCalendars;	// 0x31827129
- (BOOL)_isFilteringAllWhileLocked;	// 0x31826e15
- (id)calendarIDClauseForQueryWithVariableName:(id)variableName;	// 0x3182841d
- (id)copyWithZone:(NSZone *)zone;	// 0x31827765
- (void)dealloc;	// 0x31826ce5
- (id)filterQueryForKey:(id)key prefix:(id)prefix whereClause:(id)clause creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x3182820d
- (id)filterQueryForQueryString:(id)queryString creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x31828195
- (id)filteredCalendars;	// 0x318272ed
- (BOOL)isCalendarUIDVisible:(id)visible;	// 0x318276f1
- (BOOL)isEqual:(id)equal;	// 0x318277cd
- (BOOL)isFilteringAll;	// 0x31826ea5
- (BOOL)isShowingAll;	// 0x31826de5
- (id)persistentIdentifier;	// 0x318278b5
- (void)removeCalendarWithUID:(id)uid;	// 0x31827745
// declared property getter: - (id)searchTerm;	// 0x318286a5
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x318286b9
- (void)validate;	// 0x31827f85
- (int)visibleCalendarCountWithOptions:(int)options;	// 0x318275a5
- (id)visibleCalendarsWithOptions:(int)options;	// 0x31827425
@end
