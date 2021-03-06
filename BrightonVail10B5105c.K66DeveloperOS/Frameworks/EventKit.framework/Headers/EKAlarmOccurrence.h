/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSTimeZone, EKObjectID;

@interface EKAlarmOccurrence : NSObject {
	EKObjectID *_alarmID;	// 4 = 0x4
	EKObjectID *_ownerID;	// 8 = 0x8
	NSDate *_ownerDate;	// 12 = 0xc
	NSTimeZone *_ownerTimeZone;	// 16 = 0x10
	NSDate *_fireDate;	// 20 = 0x14
	NSString *_externalID;	// 24 = 0x18
	NSDate *_acknowledgedDate;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSDate *acknowledgedDate;	// G=0x35b8ad01; @synthesize=_acknowledgedDate
@property(readonly, assign, nonatomic) EKObjectID *alarmID;	// G=0x35b8aca1; @synthesize=_alarmID
@property(readonly, assign, nonatomic) NSString *externalID;	// G=0x35b8acf1; @synthesize=_externalID
@property(readonly, assign, nonatomic) NSDate *fireDate;	// G=0x35b8ace1; @synthesize=_fireDate
@property(readonly, assign, nonatomic) NSDate *ownerDate;	// G=0x35b8acc1; @synthesize=_ownerDate
@property(readonly, assign, nonatomic) EKObjectID *ownerID;	// G=0x35b8acb1; @synthesize=_ownerID
@property(readonly, assign, nonatomic) NSTimeZone *ownerTimeZone;	// G=0x35b8acd1; @synthesize=_ownerTimeZone
+ (id)alarmOccurrenceWithAlarmID:(id)alarmID ownerID:(id)anId ownerDate:(id)date ownerTimeZone:(id)zone fireDate:(id)date5 externalID:(id)anId6 acknowledgedDate:(id)date7;	// 0x35b8a49d
- (id)initWithAlarmID:(id)alarmID ownerID:(id)anId ownerDate:(id)date ownerTimeZone:(id)zone fireDate:(id)date5 externalID:(id)anId6 acknowledgedDate:(id)date7;	// 0x35b8a4fd
- (id)initWithCoder:(id)coder;	// 0x35b8a6b5
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x35b8a911
// declared property getter: - (id)acknowledgedDate;	// 0x35b8ad01
// declared property getter: - (id)alarmID;	// 0x35b8aca1
- (void)dealloc;	// 0x35b8a5ed
- (id)dictionaryRepresentation;	// 0x35b8ab0d
- (void)encodeWithCoder:(id)coder;	// 0x35b8a819
// declared property getter: - (id)externalID;	// 0x35b8acf1
// declared property getter: - (id)fireDate;	// 0x35b8ace1
// declared property getter: - (id)ownerDate;	// 0x35b8acc1
// declared property getter: - (id)ownerID;	// 0x35b8acb1
// declared property getter: - (id)ownerTimeZone;	// 0x35b8acd1
@end

