/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
	SSPlayInfoRequestContext *_context;	// 28 = 0x1c
	SSPlayInfoResponse *_response;	// 32 = 0x20
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSPlayInfoRequestContext *playInfoContext;	// G=0x312c4105; 
@property(readonly, assign) SSPlayInfoResponse *playInfoResponse;	// G=0x312c413d; 
- (id)init;	// 0x312c3fc9
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x312c3fdd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x312c4acd
- (id)copyXPCEncoding;	// 0x312c49d9
- (void)dealloc;	// 0x312c40a1
// declared property getter: - (id)playInfoContext;	// 0x312c4105
// declared property getter: - (id)playInfoResponse;	// 0x312c413d
- (BOOL)start;	// 0x312c4735
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x312c4961
- (void)startWithPlayInfoResponseBlock:(id)playInfoResponseBlock;	// 0x312c4301
@end
