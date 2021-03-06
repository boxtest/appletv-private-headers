/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 144 = 0x90
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x34c25bfd; S=0x34c25c11; @synthesize=_propertiesToExpand
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x34c25381
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x34c2540d
- (void)dealloc;	// 0x34c25335
- (id)description;	// 0x34c2548d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x34c25bb9
- (id)httpMethod;	// 0x34c25551
- (id)parseHints;	// 0x34c25875
// declared property getter: - (id)propertiesToExpand;	// 0x34c25bfd
- (id)requestBody;	// 0x34c2555d
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x34c25c11
@end

