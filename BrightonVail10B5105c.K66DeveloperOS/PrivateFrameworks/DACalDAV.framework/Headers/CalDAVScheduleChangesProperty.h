/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, CalDAVOccurrenceChange, NSString;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x3176c0bd; S=0x3176c0d1; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x3176c0e9; S=0x3176c0fd; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x3176c099; S=0x3176c0ad; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x3176c10d; S=0x3176c121; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x3176bb65
+ (void)initialize;	// 0x3176b9d9
+ (id)propertyWithItem:(id)item;	// 0x3176bc2d
- (id)init;	// 0x3176ba21
// declared property getter: - (int)actionType;	// 0x3176c0bd
- (void)addOccurrenceChange:(id)change;	// 0x3176bec1
- (id)allChanges;	// 0x3176bf81
// declared property getter: - (id)attendeeAddress;	// 0x3176c0e9
- (id)changeForOccurrence:(id)occurrence;	// 0x3176c045
// declared property getter: - (id)dateStamp;	// 0x3176c099
- (void)dealloc;	// 0x3176badd
- (BOOL)isCancel;	// 0x3176bbb1
- (BOOL)isCreate;	// 0x3176bc11
- (BOOL)isReply;	// 0x3176bbd1
- (BOOL)isUpdate;	// 0x3176bbf1
// declared property getter: - (id)masterChange;	// 0x3176c10d
- (id)recurrenceIDs;	// 0x3176c001
// declared property setter: - (void)setActionType:(int)type;	// 0x3176c0d1
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x3176c0fd
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x3176c0ad
// declared property setter: - (void)setMasterChange:(id)change;	// 0x3176c121
@end

