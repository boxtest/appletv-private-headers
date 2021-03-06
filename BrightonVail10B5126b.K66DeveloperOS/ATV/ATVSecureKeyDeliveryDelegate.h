/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AVAssetResourceLoaderDelegate.h"
#import "BRFailedURLHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;
@protocol ATVJSContextProvider;

__attribute__((visibility("hidden")))
@interface ATVSecureKeyDeliveryDelegate : XXUnknownSuperclass <AVAssetResourceLoaderDelegate, BRFailedURLHandling> {
	NSData *_certData;	// 4 = 0x4
	id<ATVJSContextProvider> _merchant;	// 8 = 0x8
}
- (void).cxx_destruct;	// 0x3df1f5
- (void)_didFailWithError:(id)error andLoadingRequest:(id)request;	// 0x3df229
- (void)_didLoadAssetID:(id)anId forRequest:(id)request needsBase64Decode:(BOOL)decode;	// 0x3df9e9
- (void)_didLoadCertData:(id)data forRequest:(id)request;	// 0x3df255
- (BOOL)handleFailedURLRequest:(id)request;	// 0x3de9b9
@end

