/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
	id<CalDAVPrincipal> _principal;	// 44 = 0x2c
	BOOL _isCancellingTaskGroups;	// 48 = 0x30
	NSMutableSet *_outstandingTaskGroups;	// 52 = 0x34
}
@property(readonly, assign) NSMutableSet *outstandingTaskGroups;	// G=0x30277fd9; @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x30277fc5; @synthesize=_principal
- (id)init;	// 0x30277ba5
- (id)initWithPrincipal:(id)principal;	// 0x30277c21
- (void)_tearDownAllTaskGroupsWithBlock:(id)block;	// 0x30277db9
- (void)bailWithError:(id)error;	// 0x30277f1d
- (void)cancelTaskGroup;	// 0x30277ebd
- (void)dealloc;	// 0x30277cc9
// declared property getter: - (id)outstandingTaskGroups;	// 0x30277fd9
// declared property getter: - (id)principal;	// 0x30277fc5
@end

