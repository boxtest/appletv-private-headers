/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSPlayStatusUpdateRequest : HSRequest {
	unsigned _interfaceID;	// 40 = 0x28
	unsigned _revisionID;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) unsigned interfaceID;	// G=0x3108a1ad; @synthesize=_interfaceID
@property(readonly, assign, nonatomic) unsigned revisionID;	// G=0x3108a1bd; @synthesize=_revisionID
- (id)initWithInterfaceID:(unsigned)interfaceID revisionID:(unsigned)anId;	// 0x31089d85
- (id)canonicalResponseForResponse:(id)response;	// 0x31089e4d
// declared property getter: - (unsigned)interfaceID;	// 0x3108a1ad
- (BOOL)isConcurrent;	// 0x3108a175
// declared property getter: - (unsigned)revisionID;	// 0x3108a1bd
- (double)timeoutInterval;	// 0x3108a179
@end

