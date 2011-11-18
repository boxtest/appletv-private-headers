/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


__attribute__((visibility("hidden")))
@interface EKSourceConstraints : NSObject {
@private
	int _maxAlarms;	// 4 = 0x4
	int _maxRecurrences;	// 8 = 0x8
	XXStruct_$OjjlA _flags;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;	// G=0x331d5081; S=0x33235061; 
@property(assign, nonatomic) BOOL allowsCalendarAddDeleteModify;	// G=0x3323521d; S=0x33235231; 
@property(assign, nonatomic) BOOL allowsEvents;	// G=0x331d2d15; S=0x3323526d; 
@property(assign, nonatomic) BOOL allowsTasks;	// G=0x331cc889; S=0x3323524d; 
@property(assign, nonatomic) BOOL canSetAvailability;	// G=0x331d0f99; S=0x33235145; 
@property(assign, nonatomic) BOOL declinedStatusChangeRequiresNoPendingStatus;	// G=0x3323501d; S=0x33235031; 
@property(assign, nonatomic) BOOL deliverySourceOrExternalIDRequiredForResponse;	// G=0x33234fc5; S=0x33234fd9; 
@property(assign, nonatomic) BOOL eventAvalabilityLimited;	// G=0x3323515d; S=0x33235175; 
@property(assign, nonatomic) BOOL eventDurationConstrainedToRecurrenceInterval;	// G=0x331d506d; S=0x33235049; 
@property(assign, nonatomic) XXStruct_$OjjlA flags;	// G=0x332352ed; S=0x33235309; @synthesize=_flags
@property(assign, nonatomic) BOOL futureStartDateLimitedToOccurrenceCacheBounds;	// G=0x331d7369; S=0x33235091; 
@property(assign, nonatomic) BOOL inviteesCanSeeAttendeeStatuses;	// G=0x331d0e59; S=0x33234ecd; 
@property(assign, nonatomic) int maxAlarmsAllowed;	// G=0x331d2d45; S=0x332352cd; @synthesize=_maxAlarms
@property(assign, nonatomic) int maxRecurrencesAllowed;	// G=0x331d2a05; S=0x332352dd; @synthesize=_maxRecurrences
@property(assign, nonatomic) BOOL mustAcknowledgeMasterEvent;	// G=0x33235119; S=0x3323512d; 
@property(assign, nonatomic) BOOL occurrencesMustOccurOnSeparateDays;	// G=0x331d737d; S=0x33235079; 
@property(assign, nonatomic) BOOL organizerCanSeeAttendeeStatuses;	// G=0x33234ea1; S=0x33234eb5; 
@property(assign, nonatomic) BOOL proposedStatusRequiredForResponse;	// G=0x33234ff1; S=0x33235005; 
@property(assign, nonatomic) BOOL recurrencesShouldPinToMonthDays;	// G=0x331e08d9; S=0x332350d5; 
@property(assign, nonatomic) BOOL requiresAttendeeSearchInSingleAccount;	// G=0x332350ed; S=0x33235101; 
@property(assign, nonatomic) BOOL requiresMSFormattedUID;	// G=0x331dabd5; S=0x3323518d; 
@property(assign, nonatomic) BOOL requiresOutgoingInvitationsInDefaultCalendar;	// G=0x33234f41; S=0x33234f55; 
@property(assign, nonatomic) BOOL shouldCancelDeletedEvents;	// G=0x331dd1e1; S=0x332351a5; 
@property(assign, nonatomic) BOOL statusesAreAccurate;	// G=0x331d1505; S=0x33234ee5; 
@property(assign, nonatomic) BOOL supportsAlarmProximity;	// G=0x331d6e45; S=0x33235205; 
@property(assign, nonatomic) BOOL supportsAlarmTriggerDates;	// G=0x331daa7d; S=0x33234e89; 
@property(assign, nonatomic) BOOL supportsAlarmTriggerIntervals;	// G=0x331d74ad; S=0x33234e71; 
@property(assign, nonatomic) BOOL supportsAllDayDueDates;	// G=0x331dddcd; S=0x332352ad; 
@property(assign, nonatomic) BOOL supportsIncomingInvitations;	// G=0x33234efd; S=0x33234f11; 
@property(assign, nonatomic) BOOL supportsInvitationModifications;	// G=0x33234f6d; S=0x33234f81; 
@property(assign, nonatomic) BOOL supportsOutgoingInvitations;	// G=0x331d2c21; S=0x33234f29; 
@property(assign, nonatomic) BOOL supportsRecurrencesOnDetachedEvents;	// G=0x332350a9; S=0x332350bd; 
@property(assign, nonatomic) BOOL supportsReminderActions;	// G=0x331deb99; S=0x332351d5; 
@property(assign, nonatomic) BOOL supportsReminderLocations;	// G=0x331deb85; S=0x332351ed; 
@property(assign, nonatomic) BOOL supportsResponseComments;	// G=0x33234f99; S=0x33234fad; 
@property(assign, nonatomic) BOOL supportsStructuredLocations;	// G=0x331d6b99; S=0x332351bd; 
@property(assign, nonatomic) BOOL supportsURLField;	// G=0x331d2d2d; S=0x3323528d; 
- (id)init;	// 0x331cc83d
- (id)initWithMaxAlarms:(int)maxAlarms maxRecurrences:(int)recurrences constraintFlags:(unsigned long long)flags;	// 0x331cc611
// declared property getter: - (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;	// 0x331d5081
// declared property getter: - (BOOL)allowsCalendarAddDeleteModify;	// 0x3323521d
// declared property getter: - (BOOL)allowsEvents;	// 0x331d2d15
// declared property getter: - (BOOL)allowsTasks;	// 0x331cc889
// declared property getter: - (BOOL)canSetAvailability;	// 0x331d0f99
// declared property getter: - (BOOL)declinedStatusChangeRequiresNoPendingStatus;	// 0x3323501d
// declared property getter: - (BOOL)deliverySourceOrExternalIDRequiredForResponse;	// 0x33234fc5
// declared property getter: - (BOOL)eventAvalabilityLimited;	// 0x3323515d
// declared property getter: - (BOOL)eventDurationConstrainedToRecurrenceInterval;	// 0x331d506d
// declared property getter: - (XXStruct_$OjjlA)flags;	// 0x332352ed
// declared property getter: - (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;	// 0x331d7369
// declared property getter: - (BOOL)inviteesCanSeeAttendeeStatuses;	// 0x331d0e59
// declared property getter: - (int)maxAlarmsAllowed;	// 0x331d2d45
// declared property getter: - (int)maxRecurrencesAllowed;	// 0x331d2a05
// declared property getter: - (BOOL)mustAcknowledgeMasterEvent;	// 0x33235119
// declared property getter: - (BOOL)occurrencesMustOccurOnSeparateDays;	// 0x331d737d
// declared property getter: - (BOOL)organizerCanSeeAttendeeStatuses;	// 0x33234ea1
// declared property getter: - (BOOL)proposedStatusRequiredForResponse;	// 0x33234ff1
// declared property getter: - (BOOL)recurrencesShouldPinToMonthDays;	// 0x331e08d9
// declared property getter: - (BOOL)requiresAttendeeSearchInSingleAccount;	// 0x332350ed
// declared property getter: - (BOOL)requiresMSFormattedUID;	// 0x331dabd5
// declared property getter: - (BOOL)requiresOutgoingInvitationsInDefaultCalendar;	// 0x33234f41
// declared property setter: - (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x33235061
// declared property setter: - (void)setAllowsCalendarAddDeleteModify:(BOOL)modify;	// 0x33235231
// declared property setter: - (void)setAllowsEvents:(BOOL)events;	// 0x3323526d
// declared property setter: - (void)setAllowsTasks:(BOOL)tasks;	// 0x3323524d
// declared property setter: - (void)setCanSetAvailability:(BOOL)availability;	// 0x33235145
// declared property setter: - (void)setDeclinedStatusChangeRequiresNoPendingStatus:(BOOL)status;	// 0x33235031
// declared property setter: - (void)setDeliverySourceOrExternalIDRequiredForResponse:(BOOL)response;	// 0x33234fd9
// declared property setter: - (void)setEventAvalabilityLimited:(BOOL)limited;	// 0x33235175
// declared property setter: - (void)setEventDurationConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x33235049
// declared property setter: - (void)setFlags:(XXStruct_$OjjlA)flags;	// 0x33235309
// declared property setter: - (void)setFutureStartDateLimitedToOccurrenceCacheBounds:(BOOL)occurrenceCacheBounds;	// 0x33235091
// declared property setter: - (void)setInviteesCanSeeAttendeeStatuses:(BOOL)statuses;	// 0x33234ecd
// declared property setter: - (void)setMaxAlarmsAllowed:(int)allowed;	// 0x332352cd
// declared property setter: - (void)setMaxRecurrencesAllowed:(int)allowed;	// 0x332352dd
// declared property setter: - (void)setMustAcknowledgeMasterEvent:(BOOL)event;	// 0x3323512d
// declared property setter: - (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)days;	// 0x33235079
// declared property setter: - (void)setOrganizerCanSeeAttendeeStatuses:(BOOL)statuses;	// 0x33234eb5
// declared property setter: - (void)setProposedStatusRequiredForResponse:(BOOL)response;	// 0x33235005
// declared property setter: - (void)setRecurrencesShouldPinToMonthDays:(BOOL)pinToMonthDays;	// 0x332350d5
// declared property setter: - (void)setRequiresAttendeeSearchInSingleAccount:(BOOL)singleAccount;	// 0x33235101
// declared property setter: - (void)setRequiresMSFormattedUID:(BOOL)uid;	// 0x3323518d
// declared property setter: - (void)setRequiresOutgoingInvitationsInDefaultCalendar:(BOOL)defaultCalendar;	// 0x33234f55
// declared property setter: - (void)setShouldCancelDeletedEvents:(BOOL)cancelDeletedEvents;	// 0x332351a5
// declared property setter: - (void)setStatusesAreAccurate:(BOOL)accurate;	// 0x33234ee5
// declared property setter: - (void)setSupportsAlarmProximity:(BOOL)proximity;	// 0x33235205
// declared property setter: - (void)setSupportsAlarmTriggerDates:(BOOL)dates;	// 0x33234e89
// declared property setter: - (void)setSupportsAlarmTriggerIntervals:(BOOL)intervals;	// 0x33234e71
// declared property setter: - (void)setSupportsAllDayDueDates:(BOOL)dates;	// 0x332352ad
// declared property setter: - (void)setSupportsIncomingInvitations:(BOOL)invitations;	// 0x33234f11
// declared property setter: - (void)setSupportsInvitationModifications:(BOOL)modifications;	// 0x33234f81
// declared property setter: - (void)setSupportsOutgoingInvitations:(BOOL)invitations;	// 0x33234f29
// declared property setter: - (void)setSupportsRecurrencesOnDetachedEvents:(BOOL)events;	// 0x332350bd
// declared property setter: - (void)setSupportsReminderActions:(BOOL)actions;	// 0x332351d5
// declared property setter: - (void)setSupportsReminderLocations:(BOOL)locations;	// 0x332351ed
// declared property setter: - (void)setSupportsResponseComments:(BOOL)comments;	// 0x33234fad
// declared property setter: - (void)setSupportsStructuredLocations:(BOOL)locations;	// 0x332351bd
// declared property setter: - (void)setSupportsURLField:(BOOL)field;	// 0x3323528d
// declared property getter: - (BOOL)shouldCancelDeletedEvents;	// 0x331dd1e1
// declared property getter: - (BOOL)statusesAreAccurate;	// 0x331d1505
// declared property getter: - (BOOL)supportsAlarmProximity;	// 0x331d6e45
// declared property getter: - (BOOL)supportsAlarmTriggerDates;	// 0x331daa7d
// declared property getter: - (BOOL)supportsAlarmTriggerIntervals;	// 0x331d74ad
// declared property getter: - (BOOL)supportsAllDayDueDates;	// 0x331dddcd
// declared property getter: - (BOOL)supportsIncomingInvitations;	// 0x33234efd
// declared property getter: - (BOOL)supportsInvitationModifications;	// 0x33234f6d
// declared property getter: - (BOOL)supportsOutgoingInvitations;	// 0x331d2c21
// declared property getter: - (BOOL)supportsRecurrencesOnDetachedEvents;	// 0x332350a9
// declared property getter: - (BOOL)supportsReminderActions;	// 0x331deb99
// declared property getter: - (BOOL)supportsReminderLocations;	// 0x331deb85
// declared property getter: - (BOOL)supportsResponseComments;	// 0x33234f99
// declared property getter: - (BOOL)supportsStructuredLocations;	// 0x331d6b99
// declared property getter: - (BOOL)supportsURLField;	// 0x331d2d2d
@end

