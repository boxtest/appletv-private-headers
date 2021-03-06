/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxDeleteMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
}
@property(readonly, retain) NSString *messageID;	// G=0x35e42a6d; converted property
- (id)initRequestWithMessageID:(id)messageID;	// 0x35e42a09
- (void)dealloc;	// 0x35e42b85
- (id)description;	// 0x35e42b1d
- (unsigned)hash;	// 0x35e42a7d
- (BOOL)isEqual:(id)equal;	// 0x35e42a9d
// converted property getter: - (id)messageID;	// 0x35e42a6d
@end

