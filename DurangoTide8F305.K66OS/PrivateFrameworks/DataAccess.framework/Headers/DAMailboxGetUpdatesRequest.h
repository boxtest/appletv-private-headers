/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"


@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {
	int _maxSize;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
}
@property(readonly, assign) int bodyFormat;	// G=0x30232055; converted property
@property(readonly, assign) int maxSize;	// G=0x30232045; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withBodySizeLimit:(int)bodySizeLimit;	// 0x30232155
// converted property getter: - (int)bodyFormat;	// 0x30232055
// converted property getter: - (int)maxSize;	// 0x30232045
@end

