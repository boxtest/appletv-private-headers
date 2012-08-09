/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
	NSMutableSet *_principalSearchProperties;	// 28 = 0x1c
}
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x30497771; S=0x30497785; @synthesize=_principalSearchProperties
+ (id)copyParseRules;	// 0x30497549
- (id)init;	// 0x3049740d
- (void)addPrincipalSearchProperty:(id)property;	// 0x304976d9
- (void)dealloc;	// 0x30497439
- (id)description;	// 0x30497485
// declared property getter: - (id)principalSearchProperties;	// 0x30497771
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x30497785
@end
