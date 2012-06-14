/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject {
@private
	double timestamp;	// 4 = 0x4
	addrinfo *addressInfo;	// 12 = 0xc
}
+ (id)addressInfoForHost:(id)host;	// 0x306b1ad1
+ (void)asyncResolveWithCallbackClient:(id)callbackClient;	// 0x306b1c0d
- (id)_initWithAddressInfo:(addrinfo *)addressInfo;	// 0x306b1d61
- (double)_timestamp;	// 0x306b1dc9
- (addrinfo *)addrinfo;	// 0x306b1db9
- (void)dealloc;	// 0x306b1de1
- (void)finalize;	// 0x306b1e25
@end
