/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKParticipant.h"
#import "EventKit-Structs.h"


@interface EKAttendee : EKParticipant {
}
@property(assign) int participantRole;	// G=0x33233805; S=0x33233881; converted property
@property(assign) int participantStatus;	// G=0x33233711; S=0x3323378d; converted property
@property(assign) int participantType;	// G=0x33233985; S=0x33233a01; converted property
@property(assign) int pendingStatus;	// G=0x332338c5; S=0x33233941; converted property
+ (id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x33233221
+ (id)attendeeWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x332331d9
- (id)init;	// 0x33233311
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x332332c9
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x33233261
- (id)_persistentAttendee;	// 0x33233701
- (id)copyWithZone:(NSZone *)zone;	// 0x3323337d
- (id)description;	// 0x332334c5
- (unsigned)hash;	// 0x33233615
- (BOOL)isEqual:(id)equal;	// 0x3323359d
- (id)lazyLoadRelationForKey:(id)key;	// 0x3323363d
- (id)owner;	// 0x332336cd
// converted property getter: - (int)participantRole;	// 0x33233805
// converted property getter: - (int)participantStatus;	// 0x33233711
// converted property getter: - (int)participantType;	// 0x33233985
// converted property getter: - (int)pendingStatus;	// 0x332338c5
// converted property setter: - (void)setParticipantRole:(int)role;	// 0x33233881
// converted property setter: - (void)setParticipantStatus:(int)status;	// 0x3323378d
// converted property setter: - (void)setParticipantType:(int)type;	// 0x33233a01
// converted property setter: - (void)setPendingStatus:(int)status;	// 0x33233941
@end

