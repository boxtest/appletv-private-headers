/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSGetGeniusItemsRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID seedID:(unsigned long long)anId numberOfItems:(unsigned)items;	// 0x340dcb71
- (id)initWithDatabaseID:(unsigned)databaseID seedID:(unsigned long long)anId numberOfItems:(unsigned)items;	// 0x340dcaad
- (id)canonicalResponseForResponse:(id)response;	// 0x340dcbc9
@end
