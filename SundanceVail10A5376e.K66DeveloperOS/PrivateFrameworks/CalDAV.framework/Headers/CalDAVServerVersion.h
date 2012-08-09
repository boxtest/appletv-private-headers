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
@property(retain, nonatomic) NSSet *complianceClasses;	// G=0x33811ddd; S=0x33811ded; @synthesize=_complianceClasses
@property(copy, nonatomic) NSString *serverHeader;	// G=0x33811dfd; S=0x33811e11; @synthesize=_serverHeader
@property(copy, nonatomic) NSString *supportedCalendarComponentSets;	// G=0x33811e81; S=0x33811e95; @synthesize=_supportedCalendarComponentSets
@property(assign, nonatomic) BOOL supportsAutoSchedule;	// G=0x33811cbd; S=0x33811ccd; @synthesize=_supportsAutoSchedule
@property(assign, nonatomic) BOOL supportsCalendarProxy;	// G=0x33811d3d; S=0x33811d4d; @synthesize=_supportsCalendarProxy
@property(assign, nonatomic) BOOL supportsExtendedCalendarQuery;	// G=0x33811e21; S=0x33811e31; @synthesize=_supportsExtendedCalendarQuery
@property(assign, nonatomic) BOOL supportsInboxAvailability;	// G=0x33811d5d; S=0x33811d6d; @synthesize=_supportsInboxAvailability
@property(assign, nonatomic) BOOL supportsManagedAttachments;	// G=0x33811e61; S=0x33811e71; @synthesize=_supportsManagedAttachments
@property(assign, nonatomic) BOOL supportsPrincipalPropertySearch;	// G=0x33811dbd; S=0x33811dcd; @synthesize=_supportsPrincipalPropertySearch
@property(assign, nonatomic) BOOL supportsPrivateComments;	// G=0x33811cdd; S=0x33811ced; @synthesize=_supportsPrivateComments
@property(assign, nonatomic) BOOL supportsPrivateEvents;	// G=0x33811d7d; S=0x33811d8d; @synthesize=_supportsPrivateEvents
@property(assign, nonatomic) BOOL supportsRequestCompression;	// G=0x33811e41; S=0x33811e51; @synthesize=_supportsRequestCompression
@property(assign, nonatomic) BOOL supportsSharing;	// G=0x33811cfd; S=0x33811d0d; @synthesize=_supportsSharing
@property(assign, nonatomic) BOOL supportsSharingNoScheduling;	// G=0x33811d1d; S=0x33811d2d; @synthesize=_supportsSharingNoScheduling
@property(assign, nonatomic) BOOL supportsSubscriptionCalendars;	// G=0x33811d9d; S=0x33811dad; @synthesize=_supportsSubscriptionCalendars
@property(assign, nonatomic) BOOL supportsTimeRangeFilter;	// G=0x33811c3d; S=0x33811c4d; @synthesize=_supportsTimeRangeFilter
@property(assign, nonatomic) BOOL supportsTimeRangeFilterOnInbox;	// G=0x33811c9d; S=0x33811cad; @synthesize=_supportsTimeRangeFilterOnInbox
@property(assign, nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate;	// G=0x33811c7d; S=0x33811c8d; @synthesize=_supportsTimeRangeFilterWithoutEndDate
@property(assign, nonatomic) BOOL supportsTodoTimeRangeFilter;	// G=0x33811c5d; S=0x33811c6d; @synthesize=_supportsTodoTimeRangeFilter
@property(readonly, assign, nonatomic) NSString *type;	// G=0x33811511; 
@property(assign, nonatomic) double version;	// G=0x33811c11; S=0x33811c29; @synthesize=_version
+ (id)_prototypeMatchingServerHeaders:(id)headers;	// 0x33810779
+ (id)versionWithHTTPHeaders:(id)httpheaders;	// 0x33810ddd
+ (id)versionWithPropertyValue:(id)propertyValue;	// 0x33811521
- (id)init;	// 0x33810f35
- (id)_additionalFlagKeys;	// 0x33810b49
- (id)_allFlagKeys;	// 0x33810ba1
- (id)_propertiesToComplianceClasses;	// 0x33810995
- (void)_setPropertiesFromComplianceClasses:(id)complianceClasses;	// 0x33810c81
// declared property getter: - (id)complianceClasses;	// 0x33811ddd
- (id)copyWithZone:(NSZone *)zone;	// 0x33810fc9
- (void)dealloc;	// 0x33810701
- (id)description;	// 0x33811389
- (unsigned)hash;	// 0x3381117d
- (BOOL)isEqual:(id)equal;	// 0x338111dd
- (id)propertyValue;	// 0x33811961
// declared property getter: - (id)serverHeader;	// 0x33811dfd
// declared property setter: - (void)setComplianceClasses:(id)classes;	// 0x33811ded
// declared property setter: - (void)setServerHeader:(id)header;	// 0x33811e11
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x33811e95
// declared property setter: - (void)setSupportsAutoSchedule:(BOOL)schedule;	// 0x33811ccd
// declared property setter: - (void)setSupportsCalendarProxy:(BOOL)proxy;	// 0x33811d4d
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x33811e31
// declared property setter: - (void)setSupportsInboxAvailability:(BOOL)availability;	// 0x33811d6d
// declared property setter: - (void)setSupportsManagedAttachments:(BOOL)attachments;	// 0x33811e71
// declared property setter: - (void)setSupportsPrincipalPropertySearch:(BOOL)search;	// 0x33811dcd
// declared property setter: - (void)setSupportsPrivateComments:(BOOL)comments;	// 0x33811ced
// declared property setter: - (void)setSupportsPrivateEvents:(BOOL)events;	// 0x33811d8d
// declared property setter: - (void)setSupportsRequestCompression:(BOOL)compression;	// 0x33811e51
// declared property setter: - (void)setSupportsSharing:(BOOL)sharing;	// 0x33811d0d
// declared property setter: - (void)setSupportsSharingNoScheduling:(BOOL)scheduling;	// 0x33811d2d
// declared property setter: - (void)setSupportsSubscriptionCalendars:(BOOL)calendars;	// 0x33811dad
// declared property setter: - (void)setSupportsTimeRangeFilter:(BOOL)filter;	// 0x33811c4d
// declared property setter: - (void)setSupportsTimeRangeFilterOnInbox:(BOOL)inbox;	// 0x33811cad
// declared property setter: - (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)date;	// 0x33811c8d
// declared property setter: - (void)setSupportsTodoTimeRangeFilter:(BOOL)filter;	// 0x33811c6d
// declared property setter: - (void)setVersion:(double)version;	// 0x33811c29
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x33811e81
// declared property getter: - (BOOL)supportsAutoSchedule;	// 0x33811cbd
// declared property getter: - (BOOL)supportsCalendarProxy;	// 0x33811d3d
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x33811e21
// declared property getter: - (BOOL)supportsInboxAvailability;	// 0x33811d5d
// declared property getter: - (BOOL)supportsManagedAttachments;	// 0x33811e61
// declared property getter: - (BOOL)supportsPrincipalPropertySearch;	// 0x33811dbd
// declared property getter: - (BOOL)supportsPrivateComments;	// 0x33811cdd
// declared property getter: - (BOOL)supportsPrivateEvents;	// 0x33811d7d
// declared property getter: - (BOOL)supportsRequestCompression;	// 0x33811e41
// declared property getter: - (BOOL)supportsSharing;	// 0x33811cfd
// declared property getter: - (BOOL)supportsSharingNoScheduling;	// 0x33811d1d
// declared property getter: - (BOOL)supportsSubscriptionCalendars;	// 0x33811d9d
// declared property getter: - (BOOL)supportsTimeRangeFilter;	// 0x33811c3d
// declared property getter: - (BOOL)supportsTimeRangeFilterOnInbox;	// 0x33811c9d
// declared property getter: - (BOOL)supportsTimeRangeFilterWithoutEndDate;	// 0x33811c7d
// declared property getter: - (BOOL)supportsTodoTimeRangeFilter;	// 0x33811c5d
// declared property getter: - (id)type;	// 0x33811511
// declared property getter: - (double)version;	// 0x33811c11
@end
