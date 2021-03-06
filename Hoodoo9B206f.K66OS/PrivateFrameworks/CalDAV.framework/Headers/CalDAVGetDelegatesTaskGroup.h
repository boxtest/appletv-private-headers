/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	NSMutableArray *_nestedGroupPrincipalURLs;	// 72 = 0x48
}
@property(retain) NSMutableArray *nestedGroupPrincipalURLs;	// G=0x302e7785; S=0x302e7761; @synthesize=_nestedGroupPrincipalURLs
@property(assign) int state;	// G=0x302e72c1; S=0x302e72d1; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x302e7de9
- (void)_expandProperties;	// 0x302e72e1
- (void)_finishWithError:(id)error state:(int)state;	// 0x302e7d89
- (void)_getChildProperties;	// 0x302e75d1
- (void)_getGroupMembershipForURL:(id)url state:(int)state;	// 0x302e7445
- (void)dealloc;	// 0x302e7715
// declared property getter: - (id)nestedGroupPrincipalURLs;	// 0x302e7785
// declared property setter: - (void)setNestedGroupPrincipalURLs:(id)urls;	// 0x302e7761
// declared property setter: - (void)setState:(int)state;	// 0x302e72d1
- (void)startTaskGroup;	// 0x302e76b9
// declared property getter: - (int)state;	// 0x302e72c1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x302e7889
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x302e779d
@end

