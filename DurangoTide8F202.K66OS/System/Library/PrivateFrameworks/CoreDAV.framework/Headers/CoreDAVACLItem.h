/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet *_accessControlEntities;	// 24 = 0x18
}
@property(retain) NSMutableSet *accessControlEntities;	// G=0x317b2eb5; S=0x317b2ecd; @synthesize=_accessControlEntities
- (id)init;	// 0x317b2809
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x317b2931
// declared property getter: - (id)accessControlEntities;	// 0x317b2eb5
- (void)addACE:(id)ace;	// 0x317b26f1
- (id)copyParseRules;	// 0x317b2719
- (void)dealloc;	// 0x317b28f5
- (id)description;	// 0x317b2835
- (id)liveACEs;	// 0x317b268d
- (id)notGrantedSubsetOfACEs:(id)aces;	// 0x317b2995
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x317b2ecd
@end

