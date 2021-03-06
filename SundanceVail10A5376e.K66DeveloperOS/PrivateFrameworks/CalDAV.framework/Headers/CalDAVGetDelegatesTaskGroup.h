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
@property(retain) NSMutableArray *nestedGroupPrincipalURLs;	// G=0x3380ce0d; S=0x3380ce21; @synthesize=_nestedGroupPrincipalURLs
@property(assign) int state;	// G=0x3380cde1; S=0x3380cdf5; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x3380c2d9
- (void)_expandProperties;	// 0x3380c3bd
- (void)_finishWithError:(id)error state:(int)state;	// 0x3380c359
- (void)_getChildProperties;	// 0x3380c6a5
- (void)_getGroupMembershipForURL:(id)url state:(int)state;	// 0x3380c51d
- (void)dealloc;	// 0x3380c28d
// declared property getter: - (id)nestedGroupPrincipalURLs;	// 0x3380ce0d
// declared property setter: - (void)setNestedGroupPrincipalURLs:(id)urls;	// 0x3380ce21
// declared property setter: - (void)setState:(int)state;	// 0x3380cdf5
- (void)startTaskGroup;	// 0x3380c7a1
// declared property getter: - (int)state;	// 0x3380cde1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3380c801
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x3380ccf1
@end

