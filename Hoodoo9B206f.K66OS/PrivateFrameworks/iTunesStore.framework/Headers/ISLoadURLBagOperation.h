/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"
#import "iTunesStore-Structs.h"

@class SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x30103c71; @synthesize=_context
- (id)init;	// 0x301027dd
- (id)initWithBagContext:(id)bagContext;	// 0x30102851
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x30103181
- (id)_copyBootstrapURLs;	// 0x3010329d
- (id)_copyProductionBootstrapURLs;	// 0x301032e9
- (id)_copySandboxBootstrapURLs;	// 0x30103449
- (id)_copyURLBagFromDiskCache;	// 0x30103579
- (CFStringRef)_diskCacheExpirationTimeKey;	// 0x301036a5
- (id)_diskCachePath;	// 0x301036fd
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x30102c39
- (void)_loadURLBagFromURL:(id)url;	// 0x30103855
- (void)_writeURLBagToDiskCache:(id)diskCache;	// 0x30103aa9
// declared property getter: - (id)context;	// 0x30103c71
- (void)dealloc;	// 0x301028a5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x30102da9
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x3010308d
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x301030c9
- (void)run;	// 0x301028f9
- (id)uniqueKey;	// 0x30102be9
@end

