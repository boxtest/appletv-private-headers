/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x341d02bd; S=0x341d02d1; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x341ceb1d; S=0x341ceb59; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x341d02f5; S=0x341d0305; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x341d0315; S=0x341d0325; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x341d0335; S=0x341d0345; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x341d0355; S=0x341d0365; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x341cf22d
+ (id)_restrictionsHeaderValue;	// 0x341cf665
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x341ce6b1
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x341ce6f1
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x341ce7f9
+ (id)pingOperationWithUrl:(id)url;	// 0x341ce991
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x341cea41
- (id)init;	// 0x341ce611
- (id)_account;	// 0x341cf985
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x341cf9ed
- (BOOL)_authenticateReturningError:(id *)error;	// 0x341cfc45
- (BOOL)_canSendTokenToURL:(id)url;	// 0x341cfd1d
- (id)_copyAuthenticationContext;	// 0x341cebdd
- (id)_copyURLBagContext;	// 0x341cfd81
- (void)_runURLOperation;	// 0x341cfea5
- (id)_storeFrontIdentifier;	// 0x341d01cd
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x341d025d
- (id)authenticatedAccountDSID;	// 0x341ceb99
// declared property getter: - (id)authenticatedDSID;	// 0x341d02bd
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x341ceb1d
- (void)dealloc;	// 0x341ce65d
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x341ced49
- (void)handleResponse:(id)response;	// 0x341cedb9
// declared property getter: - (BOOL)needsAuthentication;	// 0x341d02f5
// declared property getter: - (BOOL)needsURLBag;	// 0x341d0315
- (id)newRequestWithURL:(id)url;	// 0x341cee29
- (void)run;	// 0x341ceffd
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x341d02d1
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x341ceb59
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x341d0305
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x341d0325
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x341d0345
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x341d0365
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x341cf14d
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x341d0335
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x341d0355
@end

