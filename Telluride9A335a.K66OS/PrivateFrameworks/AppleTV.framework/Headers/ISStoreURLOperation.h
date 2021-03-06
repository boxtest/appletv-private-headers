/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISStoreURLOperation : ISURLOperation {
@private
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x34339531; S=0x34339545; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x34337de9; S=0x34337e25; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x34339569; S=0x34339579; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x34339589; S=0x34339599; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x343395a9; S=0x343395b9; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x343395c9; S=0x343395d9; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x343384cd
+ (id)_restrictionsHeaderValue;	// 0x34338905
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x3433797d
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x343379bd
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x34337ac5
+ (id)pingOperationWithUrl:(id)url;	// 0x34337c5d
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x34337d0d
- (id)init;	// 0x343378dd
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x34338c25
- (BOOL)_authenticateReturningError:(id *)error;	// 0x34338e7d
- (BOOL)_canSendTokenToURL:(id)url;	// 0x34338f55
- (id)_copyAuthenticationContext;	// 0x34337ea9
- (id)_copyURLBagContext;	// 0x34338fb9
- (void)_runURLOperation;	// 0x343390d5
- (id)_storeFrontIdentifier;	// 0x343393fd
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x343394d1
- (id)authenticatedAccountDSID;	// 0x34337e65
// declared property getter: - (id)authenticatedDSID;	// 0x34339531
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x34337de9
- (void)dealloc;	// 0x34337929
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x34338015
- (void)handleResponse:(id)response;	// 0x34338085
// declared property getter: - (BOOL)needsAuthentication;	// 0x34339569
// declared property getter: - (BOOL)needsURLBag;	// 0x34339589
- (id)newRequestWithURL:(id)url;	// 0x343380f5
- (void)run;	// 0x343382c1
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x34339545
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x34337e25
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x34339579
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x34339599
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x343395b9
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x343395d9
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x343383ed
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x343395a9
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x343395c9
@end

