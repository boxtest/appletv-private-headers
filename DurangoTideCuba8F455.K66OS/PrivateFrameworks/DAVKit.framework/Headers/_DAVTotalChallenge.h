/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVChallenge.h"
#import "DAVKit-Structs.h"

@class NSString;

@interface _DAVTotalChallenge : DAVChallenge {
	CFHTTPMessageRef badAuthResponse;	// 4 = 0x4
	NSString *username;	// 8 = 0x8
	NSString *password;	// 12 = 0xc
	BOOL supportsDigest;	// 16 = 0x10
}
- (id)initWithBadAuthResponse:(CFHTTPMessageRef)badAuthResponse username:(id)username password:(id)password supportsDigest:(BOOL)digest;	// 0x314d0a49
- (BOOL)addAuthHeaderToMessage:(CFHTTPMessageRef)message;	// 0x314d0c01
- (void)dealloc;	// 0x314d0b95
- (void)finalize;	// 0x314d0b59
@end

