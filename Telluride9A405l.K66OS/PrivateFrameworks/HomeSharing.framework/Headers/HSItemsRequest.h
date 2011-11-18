/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSItemsRequest : HSRequest {
@private
	BOOL _shouldParseResponse;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL shouldParseResponse;	// G=0x3518b949; S=0x3518b959; @synthesize=_shouldParseResponse
+ (id)requestWithDatabaseID:(unsigned)databaseID;	// 0x3518b7f9
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x3518b889
- (id)initWithAction:(id)action;	// 0x3518b771
- (id)initWithDatabaseID:(unsigned)databaseID;	// 0x3518b7b1
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x3518b835
- (id)canonicalResponseForResponse:(id)response;	// 0x3518b8c9
// declared property setter: - (void)setShouldParseResponse:(BOOL)parseResponse;	// 0x3518b959
// declared property getter: - (BOOL)shouldParseResponse;	// 0x3518b949
@end

