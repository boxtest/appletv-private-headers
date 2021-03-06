/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASEvent.h"
#import "NSCoding.h"

@class ASEmailItem, NSNumber, NSString, NSMutableDictionary, NSDate;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber *_instanceType;	// 172 = 0xac
	NSDate *_recurrenceId;	// 176 = 0xb0
	NSMutableDictionary *_placeHolder;	// 180 = 0xb4
	int _meetingClassType;	// 184 = 0xb8
	int _meetingMessageType;	// 188 = 0xbc
	ASEmailItem *_parentEmailItem;	// 192 = 0xc0
	NSString *_cachedParentFolderId;	// 196 = 0xc4
	NSString *_cachedParentServerId;	// 200 = 0xc8
}
@property(retain) NSString *cachedParentFolderId;	// G=0x33c02c75; S=0x33c02c89; @synthesize=_cachedParentFolderId
@property(retain) NSString *cachedParentServerId;	// G=0x33c02c99; S=0x33c02cad; @synthesize=_cachedParentServerId
@property(retain) id exceptionDate;	// G=0x33c025f9; S=0x33c02609; converted property
@property(retain) NSNumber *instanceType;	// G=0x33c02bd5; S=0x33c02be9; @synthesize=_instanceType
@property(assign) int meetingClassType;	// G=0x33c02c1d; S=0x33c02c31; @synthesize=_meetingClassType
@property(assign) int meetingMessageType;	// G=0x33c02c49; S=0x33c02c5d; @synthesize=_meetingMessageType
@property(retain) NSDate *recurrenceId;	// G=0x33c02bf9; S=0x33c02c0d; @synthesize=_recurrenceId
+ (BOOL)acceptsTopLevelLeaves;	// 0x33c00735
+ (id)asParseRules;	// 0x33c00999
+ (BOOL)frontingBasicTypes;	// 0x33c00831
+ (BOOL)notifyOfUnknownTokens;	// 0x33c00885
+ (BOOL)parsingLeafNode;	// 0x33c00789
+ (BOOL)parsingWithSubItems;	// 0x33c007dd
- (id)init;	// 0x33c020a9
- (id)initWithCoder:(id)coder;	// 0x33c02685
- (BOOL)_bailIfNotNewestDataForAccount:(id)account;	// 0x33c016d5
- (void)_determineSelfnessWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x33c00de9
- (void)_setReminderSecsBefore:(id)before;	// 0x33c021a9
- (void)applyPlaceHolder;	// 0x33c008d9
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)account;	// 0x33c02a0d
// declared property getter: - (id)cachedParentFolderId;	// 0x33c02c75
// declared property getter: - (id)cachedParentServerId;	// 0x33c02c99
- (void)clearPlaceHolder;	// 0x33c008f9
- (void)dealloc;	// 0x33c02109
- (id)delegateICSRepresentationForAccount:(id)account;	// 0x33c02a49
- (id)description;	// 0x33c02039
- (void)encodeWithCoder:(id)coder;	// 0x33c02871
// converted property getter: - (id)exceptionDate;	// 0x33c025f9
// declared property getter: - (id)instanceType;	// 0x33c02bd5
// declared property getter: - (int)meetingClassType;	// 0x33c02c1d
// declared property getter: - (int)meetingMessageType;	// 0x33c02c49
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33c01f91
- (void)postProcessApplicationData;	// 0x33c00e8d
// declared property getter: - (id)recurrenceId;	// 0x33c02bf9
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x33c01729
// declared property setter: - (void)setCachedParentFolderId:(id)anId;	// 0x33c02c89
// declared property setter: - (void)setCachedParentServerId:(id)anId;	// 0x33c02cad
- (void)setDTStamp:(id)stamp;	// 0x33c02619
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x33c02609
// declared property setter: - (void)setInstanceType:(id)type;	// 0x33c02be9
// declared property setter: - (void)setMeetingClassType:(int)type;	// 0x33c02c31
// declared property setter: - (void)setMeetingMessageType:(int)type;	// 0x33c02c5d
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x33c00925
- (void)setOrganizer:(id)organizer;	// 0x33c0255d
// declared property setter: - (void)setRecurrenceId:(id)anId;	// 0x33c02c0d
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;	// 0x33c01c05
- (void)takeValuesFromParentEmailForAccount:(id)account;	// 0x33c02211
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)calDBCreateAsRejected defaultCalendar:(void *)calendar account:(id)account;	// 0x33c01c3d
@end

