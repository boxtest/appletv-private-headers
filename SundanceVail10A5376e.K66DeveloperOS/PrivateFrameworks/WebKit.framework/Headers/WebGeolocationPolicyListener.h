/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebAllowDenyPolicyListener.h"
#import <NSObject.h> // Unknown library


@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
	RefPtr<WebCore::Geolocation> _geolocation;	// 4 = 0x4
	id _denyCallback;	// 8 = 0x8
}
@property(copy, nonatomic) id denyCallback;	// G=0x323468b5; S=0x323468c9; @synthesize=_denyCallback
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x32346795
- (id).cxx_construct;	// 0x32346905
- (void).cxx_destruct;	// 0x323468d9
- (void)allow;	// 0x32346801
- (void)dealloc;	// 0x32346751
- (void)deny;	// 0x32346815
// declared property getter: - (id)denyCallback;	// 0x323468b5
- (void)denyOnlyThisRequest;	// 0x32346849
// declared property setter: - (void)setDenyCallback:(id)callback;	// 0x323468c9
- (BOOL)shouldClearCache;	// 0x32346879
@end

