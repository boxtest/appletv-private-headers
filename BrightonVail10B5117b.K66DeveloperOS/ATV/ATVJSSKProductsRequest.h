/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "SKProductsRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SKProductsRequest, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSSKProductsRequest : XXUnknownSuperclass <SKProductsRequestDelegate> {
	SKProductsRequest *_skRequest;	// 4 = 0x4
	ATVJSContext *_atvContext;	// 8 = 0x8
	OpaqueJSValue *_object;	// 12 = 0xc
	BOOL _isJSObjectProtected;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *atvContext;	// G=0x16fe21; S=0x16fe31; @synthesize=_atvContext
@property(assign, nonatomic) BOOL isJSObjectProtected;	// G=0x16fe61; S=0x16fe71; @synthesize=_isJSObjectProtected
@property(assign, nonatomic) OpaqueJSValue *object;	// G=0x16fe41; S=0x16fe51; @synthesize=_object
@property(retain, nonatomic) SKProductsRequest *skRequest;	// G=0x16fe01; S=0x16fe11; @synthesize=_skRequest
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x16f4c9
// declared property getter: - (id)atvContext;	// 0x16fe21
- (void)dealloc;	// 0x16fa55
// declared property getter: - (BOOL)isJSObjectProtected;	// 0x16fe61
// declared property getter: - (OpaqueJSValue *)object;	// 0x16fe41
- (void)productsRequest:(id)request didReceiveResponse:(id)response;	// 0x16fad1
- (void)request:(id)request didFailWithError:(id)error;	// 0x16fce5
- (void)requestDidFinish:(id)request;	// 0x16fc05
// declared property setter: - (void)setAtvContext:(id)context;	// 0x16fe31
// declared property setter: - (void)setIsJSObjectProtected:(BOOL)aProtected;	// 0x16fe71
// declared property setter: - (void)setObject:(OpaqueJSValue *)object;	// 0x16fe51
// declared property setter: - (void)setSkRequest:(id)request;	// 0x16fe11
// declared property getter: - (id)skRequest;	// 0x16fe01
@end
