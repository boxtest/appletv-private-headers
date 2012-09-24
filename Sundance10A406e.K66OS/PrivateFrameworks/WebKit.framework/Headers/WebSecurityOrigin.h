/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x3084cac1; S=0x3084cae1; converted property
- (id)initWithURL:(id)url;	// 0x3084bf65
- (SecurityOrigin *)_core;	// 0x3084c9f1
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x307f2415
- (id)applicationCacheQuotaManager;	// 0x3084ca01
- (id)databaseIdentifier;	// 0x3084c445
- (id)databaseQuotaManager;	// 0x3084ca51
- (void)dealloc;	// 0x307f2461
- (id)domain;	// 0x3084c859
- (void)finalize;	// 0x3084c8e9
- (id)host;	// 0x3084c2f5
- (BOOL)isEqual:(id)equal;	// 0x3084c87d
- (unsigned short)port;	// 0x3084c869
- (id)protocol;	// 0x3084c1a5
// converted property getter: - (unsigned long long)quota;	// 0x3084cac1
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x3084cae1
- (id)stringValue;	// 0x3084c6fd
- (id)toString;	// 0x3084c5a1
- (unsigned long long)usage;	// 0x3084caa1
@end
