/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSecureKeyLoader.h"

@protocol ATVJSContextProvider;

__attribute__((visibility("hidden")))
@interface ATVSecureKeyJavascriptLoader : ATVSecureKeyLoader {
	id<ATVJSContextProvider> _provider;	// 4 = 0x4
}
@property(retain, nonatomic) id<ATVJSContextProvider> provider;	// G=0x1fe545; S=0x1fe555; @synthesize=_provider
- (id)initWithJavascriptContextProvider:(id)javascriptContextProvider;	// 0x1fd4ad
- (void).cxx_destruct;	// 0x1fe569
- (void)_callFunctionWithName:(id)name withData:(id)data request:(id)request successHandler:(id)handler;	// 0x1fd785
- (int)_errorCodeForFailureOfFunctionWithName:(id)name;	// 0x1fd641
- (unsigned)_numberOfArgumentsForSuccessCallbackForFunctionWithName:(id)name;	// 0x1fd505
// declared property getter: - (id)provider;	// 0x1fe545
// declared property setter: - (void)setProvider:(id)provider;	// 0x1fe555
- (void)startLoadingCertificateDataForRequest:(id)request;	// 0x1fdbf5
- (void)startLoadingContentIdentifierDataForRequest:(id)request;	// 0x1fde71
- (void)startLoadingKeyResponseDataForRequest:(id)request;	// 0x1fe2a1
@end

