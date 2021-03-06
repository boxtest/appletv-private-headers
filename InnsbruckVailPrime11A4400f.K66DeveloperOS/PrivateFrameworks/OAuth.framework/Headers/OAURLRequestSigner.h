/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

#import </libobjc.A.h>

@class OACredential;

@interface OAURLRequestSigner : NSObject {
	OACredential *_credential;	// 4 = 0x4
	int _signatureMethod;	// 8 = 0x8
}
@property(assign, nonatomic) int signatureMethod;	// G=0x316a4441; S=0x316a4451; @synthesize=_signatureMethod
- (id)initWithCredential:(id)credential;	// 0x316a30d5
- (id)applyApplicationID:(id)anId toRequest:(id)request containsMultiPartData:(BOOL)data;	// 0x316a3721
- (void)dealloc;	// 0x316a3139
- (id)oauthAuthorizationHeaderWithSignature:(id)signature nonce:(id)nonce timestamp:(id)timestamp;	// 0x316a349d
- (id)oauthNonce;	// 0x316a3255
- (id)oauthParametersWithNonce:(id)nonce timeStamp:(id)stamp;	// 0x316a3301
// declared property setter: - (void)setSignatureMethod:(int)method;	// 0x316a4451
// declared property getter: - (int)signatureMethod;	// 0x316a4441
- (id)signatureMethodString;	// 0x316a3185
- (id)signedURLRequestWithRequest:(id)request;	// 0x316a4421
- (id)signedURLRequestWithRequest:(id)request applicationID:(id)anId timestamp:(id)timestamp;	// 0x316a3a09
- (Class)signer;	// 0x316a31e5
- (id)timestamp:(id)timestamp;	// 0x316a3295
@end

