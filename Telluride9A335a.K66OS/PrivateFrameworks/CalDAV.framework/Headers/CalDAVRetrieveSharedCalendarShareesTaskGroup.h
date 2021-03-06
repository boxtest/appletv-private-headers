/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, NSSet;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	NSURL *_url;	// 44 = 0x2c
	NSSet *_sharees;	// 48 = 0x30
}
@property(retain) NSSet *sharees;	// G=0x3325ac85; S=0x3325ac61; @synthesize=_sharees
@property(retain) NSURL *url;	// G=0x3325ac49; S=0x3325ac25; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x3325ab75
- (id)initWithCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3325abbd
- (void)dealloc;	// 0x3325ac9d
// declared property setter: - (void)setSharees:(id)sharees;	// 0x3325ac61
// declared property setter: - (void)setUrl:(id)url;	// 0x3325ac25
// declared property getter: - (id)sharees;	// 0x3325ac85
- (void)startTaskGroup;	// 0x3325a991
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3325aaf9
// declared property getter: - (id)url;	// 0x3325ac49
@end

