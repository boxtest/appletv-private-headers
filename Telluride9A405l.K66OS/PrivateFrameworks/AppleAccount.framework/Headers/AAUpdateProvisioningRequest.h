/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x36f78459; S=0x36f78469; @synthesize=_account
+ (Class)responseClass;	// 0x36f78001
- (id)initWithAccount:(id)account;	// 0x36f7801d
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x36f78065
// declared property getter: - (id)account;	// 0x36f78459
- (void)dealloc;	// 0x36f780c5
// declared property setter: - (void)setAccount:(id)account;	// 0x36f78469
- (id)urlCredential;	// 0x36f78111
- (id)urlRequest;	// 0x36f781d1
- (id)urlString;	// 0x36f78189
@end

