/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAiCloudTermsAgreeRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
}
@property(retain, nonatomic) AAAccount *account;	// G=0x34e86f69; S=0x34e86f79; @synthesize=_account
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x34e86a51
- (void).cxx_destruct;	// 0x34e86fa1
// declared property getter: - (id)account;	// 0x34e86f69
// declared property setter: - (void)setAccount:(id)account;	// 0x34e86f79
- (id)urlRequest;	// 0x34e86ac5
@end
