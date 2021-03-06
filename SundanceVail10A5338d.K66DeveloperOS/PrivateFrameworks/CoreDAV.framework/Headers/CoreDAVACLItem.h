/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet *_accessControlEntities;	// 28 = 0x1c
}
@property(retain) NSMutableSet *accessControlEntities;	// G=0x34c14a81; S=0x34c14a95; @synthesize=_accessControlEntities
+ (id)copyParseRules;	// 0x34c1426d
- (id)init;	// 0x34c14131
// declared property getter: - (id)accessControlEntities;	// 0x34c14a81
- (void)addACE:(id)ace;	// 0x34c143fd
- (void)dealloc;	// 0x34c1415d
- (id)description;	// 0x34c141a9
- (id)liveACEs;	// 0x34c14a0d
- (id)notGrantedSubsetOfACEs:(id)aces;	// 0x34c14495
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x34c14a95
@end

