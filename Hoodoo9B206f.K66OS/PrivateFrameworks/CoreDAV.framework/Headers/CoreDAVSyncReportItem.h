/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVMultiStatusItem.h"

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
	NSString *_syncToken;	// 32 = 0x20
}
@property(readonly, assign) NSString *syncToken;	// G=0x33a081b9; @synthesize=_syncToken
- (void)_setSyncTokenItem:(id)item;	// 0x33a08161
- (id)copyParseRules;	// 0x33a07fe9
- (void)dealloc;	// 0x33a07ee9
- (id)description;	// 0x33a07f35
// declared property getter: - (id)syncToken;	// 0x33a081b9
@end
