/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "SKProductsRequestDelegate.h"

@class SKProductsRequest, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSSKProductsRequest : NSObject <SKProductsRequestDelegate> {
@private
	SKProductsRequest *_skRequest;	// 4 = 0x4
	ATVJSContext *_atvContext;	// 8 = 0x8
	OpaqueJSValue *_object;	// 12 = 0xc
	BOOL _isJSObjectProtected;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *atvContext;	// G=0x32b0c725; S=0x32b0c735; @synthesize=_atvContext
@property(assign, nonatomic) BOOL isJSObjectProtected;	// G=0x32b0c779; S=0x32b0c789; @synthesize=_isJSObjectProtected
@property(assign, nonatomic) OpaqueJSValue *object;	// G=0x32b0c759; S=0x32b0c769; @synthesize=_object
@property(retain, nonatomic) SKProductsRequest *skRequest;	// G=0x32b0c6f1; S=0x32b0c701; @synthesize=_skRequest
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x32b0be65
// declared property getter: - (id)atvContext;	// 0x32b0c725
- (void)dealloc;	// 0x32b0c379
// declared property getter: - (BOOL)isJSObjectProtected;	// 0x32b0c779
// declared property getter: - (OpaqueJSValue *)object;	// 0x32b0c759
- (void)productsRequest:(id)request didReceiveResponse:(id)response;	// 0x32b0c3f5
- (void)request:(id)request didFailWithError:(id)error;	// 0x32b0c5cd
- (void)requestDidFinish:(id)request;	// 0x32b0c4e5
// declared property setter: - (void)setAtvContext:(id)context;	// 0x32b0c735
// declared property setter: - (void)setIsJSObjectProtected:(BOOL)aProtected;	// 0x32b0c789
// declared property setter: - (void)setObject:(OpaqueJSValue *)object;	// 0x32b0c769
// declared property setter: - (void)setSkRequest:(id)request;	// 0x32b0c701
// declared property getter: - (id)skRequest;	// 0x32b0c6f1
@end
