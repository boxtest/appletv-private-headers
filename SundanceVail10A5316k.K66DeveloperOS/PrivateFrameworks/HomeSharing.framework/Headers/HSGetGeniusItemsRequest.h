/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSGetGeniusItemsRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID seedID:(unsigned)anId numberOfItems:(unsigned)items;	// 0x308dcb15
- (id)initWithDatabaseID:(unsigned)databaseID seedID:(unsigned)anId numberOfItems:(unsigned)items;	// 0x308dca5d
- (id)canonicalResponseForResponse:(id)response;	// 0x308dcb69
@end

