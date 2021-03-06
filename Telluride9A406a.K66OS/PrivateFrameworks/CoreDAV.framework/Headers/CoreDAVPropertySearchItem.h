/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSString, CoreDAVLeafItem;

@interface CoreDAVPropertySearchItem : CoreDAVItem {
	CoreDAVLeafItem *_prop;	// 24 = 0x18
	NSString *_match;	// 28 = 0x1c
	NSString *_matchTypeAttribute;	// 32 = 0x20
}
@property(retain) NSString *match;	// G=0x31c5d2b5; S=0x31c5d2c9; @synthesize=_match
@property(retain) NSString *matchTypeAttribute;	// G=0x31c5d2ed; S=0x31c5d301; @synthesize=_matchTypeAttribute
@property(retain) CoreDAVLeafItem *prop;	// G=0x31c5d27d; S=0x31c5d291; @synthesize=_prop
- (id)init;	// 0x31c5cead
- (id)initWithSearchPropertyNameSpace:(id)searchPropertyNameSpace andName:(id)name;	// 0x31c5ced9
- (void)dealloc;	// 0x31c5cf39
- (id)description;	// 0x31c5cfad
// declared property getter: - (id)match;	// 0x31c5d2b5
// declared property getter: - (id)matchTypeAttribute;	// 0x31c5d2ed
// declared property getter: - (id)prop;	// 0x31c5d27d
// declared property setter: - (void)setMatch:(id)match;	// 0x31c5d2c9
// declared property setter: - (void)setMatchTypeAttribute:(id)attribute;	// 0x31c5d301
// declared property setter: - (void)setProp:(id)prop;	// 0x31c5d291
- (void)write:(id)write;	// 0x31c5d0ad
@end

