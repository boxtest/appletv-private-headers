/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPostTaskDelegate.h"

@class NSURL, CalDAVCalendarServerInviteNotificationItem;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
	CalDAVCalendarServerInviteNotificationItem *_invitation;	// 44 = 0x2c
	BOOL _acceptInvitation;	// 48 = 0x30
	NSURL *_calendarHomeURL;	// 52 = 0x34
}
@property(assign) BOOL acceptInvitation;	// G=0x36e55a55; S=0x36e55a6d; @synthesize=_acceptInvitation
@property(retain) NSURL *calendarHomeURL;	// G=0x36e55a85; S=0x36e55a99; @synthesize=_calendarHomeURL
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CalDAVCalendarServerInviteNotificationItem *invitation;	// G=0x36e55a31; S=0x36e55a45; @synthesize=_invitation
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x36e5557d
- (id)initWithInvitation:(id)invitation acceptInvitation:(BOOL)invitation2 atCalendarHomeURL:(id)calendarHomeURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x36e555c5
// declared property getter: - (BOOL)acceptInvitation;	// 0x36e55a55
// declared property getter: - (id)calendarHomeURL;	// 0x36e55a85
- (void)dealloc;	// 0x36e55649
- (id)description;	// 0x36e556a1
- (id)generateReply;	// 0x36e557b5
// declared property getter: - (id)invitation;	// 0x36e55a31
// declared property setter: - (void)setAcceptInvitation:(BOOL)invitation;	// 0x36e55a6d
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x36e55a99
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x36e55a45
- (void)startTaskGroup;	// 0x36e556cd
- (void)task:(id)task didFinishWithError:(id)error;	// 0x36e55a1d
@end
