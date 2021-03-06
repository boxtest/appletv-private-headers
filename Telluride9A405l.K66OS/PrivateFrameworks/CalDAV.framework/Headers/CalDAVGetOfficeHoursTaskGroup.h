/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, CoreDAVPropFindTask, ICSDocument;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	NSURL *_inboxURL;	// 44 = 0x2c
	CoreDAVPropFindTask *_fetchTask;	// 48 = 0x30
	ICSDocument *_calendarAvailability;	// 52 = 0x34
}
@property(retain) ICSDocument *calendarAvailability;	// G=0x3515d711; S=0x3515d6ed; @synthesize=_calendarAvailability
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CoreDAVPropFindTask *fetchTask;	// G=0x3515d74d; S=0x3515d729; @synthesize=_fetchTask
@property(retain) NSURL *inboxURL;	// G=0x3515d6d5; S=0x3515d6b1; @synthesize=_inboxURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider inboxURL:(id)url taskManager:(id)manager;	// 0x3515d765
- (void)_finishWithError:(id)error;	// 0x3515d51d
// declared property getter: - (id)calendarAvailability;	// 0x3515d711
- (void)dealloc;	// 0x3515d649
// declared property getter: - (id)fetchTask;	// 0x3515d74d
// declared property getter: - (id)inboxURL;	// 0x3515d6d5
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3515d52d
// declared property setter: - (void)setCalendarAvailability:(id)availability;	// 0x3515d6ed
// declared property setter: - (void)setFetchTask:(id)task;	// 0x3515d729
// declared property setter: - (void)setInboxURL:(id)url;	// 0x3515d6b1
- (void)startTaskGroup;	// 0x3515d345
@end

