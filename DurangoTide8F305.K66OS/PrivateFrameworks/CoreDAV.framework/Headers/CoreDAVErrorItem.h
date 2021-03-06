/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CoreDAVErrorItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_validSyncToken;	// 28 = 0x1c
}
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;	// G=0x3386ea9d; S=0x3386eacd; @synthesize=_numberOfMatchesWithinLimits
@property(retain) CoreDAVItemWithNoChildren *validSyncToken;	// G=0x3386eab5; S=0x3386eaf9; @synthesize=_validSyncToken
- (id)init;	// 0x3386e94d
- (id)copyParseRules;	// 0x3386e7f5
- (void)dealloc;	// 0x3386ea4d
- (id)description;	// 0x3386e979
// declared property getter: - (id)numberOfMatchesWithinLimits;	// 0x3386ea9d
// declared property setter: - (void)setNumberOfMatchesWithinLimits:(id)matchesWithinLimits;	// 0x3386eacd
// declared property setter: - (void)setValidSyncToken:(id)token;	// 0x3386eaf9
// declared property getter: - (id)validSyncToken;	// 0x3386eab5
@end

