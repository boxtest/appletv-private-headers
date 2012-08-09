/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKObject.h"
#import "EventKit-Structs.h"

@class NSURL, NSString;

@interface EKParticipant : EKObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x31fb0f75; 
@property(retain) id address;	// G=0x31fb0f2d; S=0x31fb0f49; converted property
@property(retain) id emailAddress;	// G=0x31fb0ef5; S=0x31fb0f11; converted property
@property(readonly, assign, nonatomic) BOOL isCurrentUser;	// G=0x31fb0f71; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31fb0ebd; 
@property(readonly, assign, nonatomic) int participantRole;	// G=0x31fb0f6d; 
@property(readonly, assign, nonatomic) int participantStatus;	// G=0x31fb0f69; 
@property(readonly, assign, nonatomic) int participantType;	// G=0x31fb0f65; 
- (void *)ABRecordWithAddressBook:(void *)addressBook;	// 0x31fb107d
// declared property getter: - (id)URL;	// 0x31fb0f75
- (id)UUID;	// 0x31fb0e95
- (id)_persistentItem;	// 0x31fb0e85
// converted property getter: - (id)address;	// 0x31fb0f2d
- (id)copyWithZone:(NSZone *)zone;	// 0x31fb0e49
// converted property getter: - (id)emailAddress;	// 0x31fb0ef5
// declared property getter: - (BOOL)isCurrentUser;	// 0x31fb0f71
- (BOOL)isEqualToParticipant:(id)participant;	// 0x31fb0ff5
// declared property getter: - (id)name;	// 0x31fb0ebd
// declared property getter: - (int)participantRole;	// 0x31fb0f6d
// declared property getter: - (int)participantStatus;	// 0x31fb0f69
// declared property getter: - (int)participantType;	// 0x31fb0f65
// converted property setter: - (void)setAddress:(id)address;	// 0x31fb0f49
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x31fb0f11
- (void)setName:(id)name;	// 0x31fb0ed9
@end
