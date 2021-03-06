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
@property(retain) NSString *cachedParentFolderId;	// G=0x36e62f19; S=0x36e62f2d; @synthesize=_cachedParentFolderId
@property(retain) NSString *cachedParentServerId;	// G=0x36e62f3d; S=0x36e62f51; @synthesize=_cachedParentServerId
@property(retain) id exceptionDate;	// G=0x36e6289d; S=0x36e628ad; converted property
@property(retain) NSNumber *instanceType;	// G=0x36e62e79; S=0x36e62e8d; @synthesize=_instanceType
@property(assign) int meetingClassType;	// G=0x36e62ec1; S=0x36e62ed5; @synthesize=_meetingClassType
@property(assign) int meetingMessageType;	// G=0x36e62eed; S=0x36e62f01; @synthesize=_meetingMessageType
@property(retain) NSDate *recurrenceId;	// G=0x36e62e9d; S=0x36e62eb1; @synthesize=_recurrenceId
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e609d9
+ (id)asParseRules;	// 0x36e60c3d
+ (BOOL)frontingBasicTypes;	// 0x36e60ad5
+ (BOOL)notifyOfUnknownTokens;	// 0x36e60b29
+ (BOOL)parsingLeafNode;	// 0x36e60a2d
+ (BOOL)parsingWithSubItems;	// 0x36e60a81
- (id)init;	// 0x36e6234d
- (id)initWithCoder:(id)coder;	// 0x36e62929
- (BOOL)_bailIfNotNewestDataForAccount:(id)account;	// 0x36e61979
- (void)_determineSelfnessWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x36e6108d
- (void)_setReminderSecsBefore:(id)before;	// 0x36e6244d
- (void)applyPlaceHolder;	// 0x36e60b7d
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)account;	// 0x36e62cb1
// declared property getter: - (id)cachedParentFolderId;	// 0x36e62f19
// declared property getter: - (id)cachedParentServerId;	// 0x36e62f3d
- (void)clearPlaceHolder;	// 0x36e60b9d
- (void)dealloc;	// 0x36e623ad
- (id)delegateICSRepresentationForAccount:(id)account;	// 0x36e62ced
- (id)description;	// 0x36e622dd
- (void)encodeWithCoder:(id)coder;	// 0x36e62b15
// converted property getter: - (id)exceptionDate;	// 0x36e6289d
// declared property getter: - (id)instanceType;	// 0x36e62e79
// declared property getter: - (int)meetingClassType;	// 0x36e62ec1
// declared property getter: - (int)meetingMessageType;	// 0x36e62eed
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36e62235
- (void)postProcessApplicationData;	// 0x36e61131
// declared property getter: - (id)recurrenceId;	// 0x36e62e9d
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36e619cd
// declared property setter: - (void)setCachedParentFolderId:(id)anId;	// 0x36e62f2d
// declared property setter: - (void)setCachedParentServerId:(id)anId;	// 0x36e62f51
- (void)setDTStamp:(id)stamp;	// 0x36e628bd
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x36e628ad
// declared property setter: - (void)setInstanceType:(id)type;	// 0x36e62e8d
// declared property setter: - (void)setMeetingClassType:(int)type;	// 0x36e62ed5
// declared property setter: - (void)setMeetingMessageType:(int)type;	// 0x36e62f01
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x36e60bc9
- (void)setOrganizer:(id)organizer;	// 0x36e62801
// declared property setter: - (void)setRecurrenceId:(id)anId;	// 0x36e62eb1
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;	// 0x36e61ea9
- (void)takeValuesFromParentEmailForAccount:(id)account;	// 0x36e624b5
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)calDBCreateAsRejected defaultCalendar:(void *)calendar account:(id)account;	// 0x36e61ee1
@end

