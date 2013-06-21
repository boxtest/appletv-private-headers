/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CalDAV-Structs.h"

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {
	double _version;	// 4 = 0x4
	BOOL _supportsTimeRangeFilter;	// 12 = 0xc
	BOOL _supportsTodoTimeRangeFilter;	// 13 = 0xd
	BOOL _supportsTimeRangeFilterWithoutEndDate;	// 14 = 0xe
	BOOL _supportsTimeRangeFilterOnInbox;	// 15 = 0xf
	BOOL _supportsAutoSchedule;	// 16 = 0x10
	BOOL _supportsPrivateComments;	// 17 = 0x11
	BOOL _supportsSharing;	// 18 = 0x12
	BOOL _supportsSharingNoScheduling;	// 19 = 0x13
	BOOL _supportsCalendarProxy;	// 20 = 0x14
	BOOL _supportsInboxAvailability;	// 21 = 0x15
	BOOL _supportsPrivateEvents;	// 22 = 0x16
	BOOL _supportsSubscriptionCalendars;	// 23 = 0x17
	BOOL _supportsPrincipalPropertySearch;	// 24 = 0x18
	BOOL _supportsExtendedCalendarQuery;	// 25 = 0x19
	BOOL _supportsRequestCompression;	// 26 = 0x1a
	BOOL _supportsManagedAttachments;	// 27 = 0x1b
	NSString *_supportedCalendarComponentSets;	// 28 = 0x1c
	NSSet *_complianceClasses;	// 32 = 0x20
	NSString *_serverHeader;	// 36 = 0x24
}
@property(retain, nonatomic) NSSet *complianceClasses;	// G=0x335a5dd5; S=0x335a5de5; @synthesize=_complianceClasses
@property(copy, nonatomic) NSString *serverHeader;	// G=0x335a5df5; S=0x335a5e09; @synthesize=_serverHeader
@property(copy, nonatomic) NSString *supportedCalendarComponentSets;	// G=0x335a5e79; S=0x335a5e8d; @synthesize=_supportedCalendarComponentSets
@property(assign, nonatomic) BOOL supportsAutoSchedule;	// G=0x335a5cb5; S=0x335a5cc5; @synthesize=_supportsAutoSchedule
@property(assign, nonatomic) BOOL supportsCalendarProxy;	// G=0x335a5d35; S=0x335a5d45; @synthesize=_supportsCalendarProxy
@property(assign, nonatomic) BOOL supportsExtendedCalendarQuery;	// G=0x335a5e19; S=0x335a5e29; @synthesize=_supportsExtendedCalendarQuery
@property(assign, nonatomic) BOOL supportsInboxAvailability;	// G=0x335a5d55; S=0x335a5d65; @synthesize=_supportsInboxAvailability
@property(assign, nonatomic) BOOL supportsManagedAttachments;	// G=0x335a5e59; S=0x335a5e69; @synthesize=_supportsManagedAttachments
@property(assign, nonatomic) BOOL supportsPrincipalPropertySearch;	// G=0x335a5db5; S=0x335a5dc5; @synthesize=_supportsPrincipalPropertySearch
@property(assign, nonatomic) BOOL supportsPrivateComments;	// G=0x335a5cd5; S=0x335a5ce5; @synthesize=_supportsPrivateComments
@property(assign, nonatomic) BOOL supportsPrivateEvents;	// G=0x335a5d75; S=0x335a5d85; @synthesize=_supportsPrivateEvents
@property(assign, nonatomic) BOOL supportsRequestCompression;	// G=0x335a5e39; S=0x335a5e49; @synthesize=_supportsRequestCompression
@property(assign, nonatomic) BOOL supportsSharing;	// G=0x335a5cf5; S=0x335a5d05; @synthesize=_supportsSharing
@property(assign, nonatomic) BOOL supportsSharingNoScheduling;	// G=0x335a5d15; S=0x335a5d25; @synthesize=_supportsSharingNoScheduling
@property(assign, nonatomic) BOOL supportsSubscriptionCalendars;	// G=0x335a5d95; S=0x335a5da5; @synthesize=_supportsSubscriptionCalendars
@property(assign, nonatomic) BOOL supportsTimeRangeFilter;	// G=0x335a5c35; S=0x335a5c45; @synthesize=_supportsTimeRangeFilter
@property(assign, nonatomic) BOOL supportsTimeRangeFilterOnInbox;	// G=0x335a5c95; S=0x335a5ca5; @synthesize=_supportsTimeRangeFilterOnInbox
@property(assign, nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate;	// G=0x335a5c75; S=0x335a5c85; @synthesize=_supportsTimeRangeFilterWithoutEndDate
@property(assign, nonatomic) BOOL supportsTodoTimeRangeFilter;	// G=0x335a5c55; S=0x335a5c65; @synthesize=_supportsTodoTimeRangeFilter
@property(readonly, assign, nonatomic) NSString *type;	// G=0x335a5509; 
@property(assign, nonatomic) double version;	// G=0x335a5c09; S=0x335a5c21; @synthesize=_version
+ (id)_prototypeMatchingServerHeaders:(id)headers;	// 0x335a4771
+ (id)versionWithHTTPHeaders:(id)httpheaders;	// 0x335a4dd5
+ (id)versionWithPropertyValue:(id)propertyValue;	// 0x335a5519
- (id)init;	// 0x335a4f2d
- (id)_additionalFlagKeys;	// 0x335a4b41
- (id)_allFlagKeys;	// 0x335a4b99
- (id)_propertiesToComplianceClasses;	// 0x335a498d
- (void)_setPropertiesFromComplianceClasses:(id)complianceClasses;	// 0x335a4c79
// declared property getter: - (id)complianceClasses;	// 0x335a5dd5
- (id)copyWithZone:(NSZone *)zone;	// 0x335a4fc1
- (void)dealloc;	// 0x335a46f9
- (id)description;	// 0x335a5381
- (unsigned)hash;	// 0x335a5175
- (BOOL)isEqual:(id)equal;	// 0x335a51d5
- (id)propertyValue;	// 0x335a5959
// declared property getter: - (id)serverHeader;	// 0x335a5df5
// declared property setter: - (void)setComplianceClasses:(id)classes;	// 0x335a5de5
// declared property setter: - (void)setServerHeader:(id)header;	// 0x335a5e09
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x335a5e8d
// declared property setter: - (void)setSupportsAutoSchedule:(BOOL)schedule;	// 0x335a5cc5
// declared property setter: - (void)setSupportsCalendarProxy:(BOOL)proxy;	// 0x335a5d45
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x335a5e29
// declared property setter: - (void)setSupportsInboxAvailability:(BOOL)availability;	// 0x335a5d65
// declared property setter: - (void)setSupportsManagedAttachments:(BOOL)attachments;	// 0x335a5e69
// declared property setter: - (void)setSupportsPrincipalPropertySearch:(BOOL)search;	// 0x335a5dc5
// declared property setter: - (void)setSupportsPrivateComments:(BOOL)comments;	// 0x335a5ce5
// declared property setter: - (void)setSupportsPrivateEvents:(BOOL)events;	// 0x335a5d85
// declared property setter: - (void)setSupportsRequestCompression:(BOOL)compression;	// 0x335a5e49
// declared property setter: - (void)setSupportsSharing:(BOOL)sharing;	// 0x335a5d05
// declared property setter: - (void)setSupportsSharingNoScheduling:(BOOL)scheduling;	// 0x335a5d25
// declared property setter: - (void)setSupportsSubscriptionCalendars:(BOOL)calendars;	// 0x335a5da5
// declared property setter: - (void)setSupportsTimeRangeFilter:(BOOL)filter;	// 0x335a5c45
// declared property setter: - (void)setSupportsTimeRangeFilterOnInbox:(BOOL)inbox;	// 0x335a5ca5
// declared property setter: - (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)date;	// 0x335a5c85
// declared property setter: - (void)setSupportsTodoTimeRangeFilter:(BOOL)filter;	// 0x335a5c65
// declared property setter: - (void)setVersion:(double)version;	// 0x335a5c21
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x335a5e79
// declared property getter: - (BOOL)supportsAutoSchedule;	// 0x335a5cb5
// declared property getter: - (BOOL)supportsCalendarProxy;	// 0x335a5d35
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x335a5e19
// declared property getter: - (BOOL)supportsInboxAvailability;	// 0x335a5d55
// declared property getter: - (BOOL)supportsManagedAttachments;	// 0x335a5e59
// declared property getter: - (BOOL)supportsPrincipalPropertySearch;	// 0x335a5db5
// declared property getter: - (BOOL)supportsPrivateComments;	// 0x335a5cd5
// declared property getter: - (BOOL)supportsPrivateEvents;	// 0x335a5d75
// declared property getter: - (BOOL)supportsRequestCompression;	// 0x335a5e39
// declared property getter: - (BOOL)supportsSharing;	// 0x335a5cf5
// declared property getter: - (BOOL)supportsSharingNoScheduling;	// 0x335a5d15
// declared property getter: - (BOOL)supportsSubscriptionCalendars;	// 0x335a5d95
// declared property getter: - (BOOL)supportsTimeRangeFilter;	// 0x335a5c35
// declared property getter: - (BOOL)supportsTimeRangeFilterOnInbox;	// 0x335a5c95
// declared property getter: - (BOOL)supportsTimeRangeFilterWithoutEndDate;	// 0x335a5c75
// declared property getter: - (BOOL)supportsTodoTimeRangeFilter;	// 0x335a5c55
// declared property getter: - (id)type;	// 0x335a5509
// declared property getter: - (double)version;	// 0x335a5c09
@end
