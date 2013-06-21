/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSURLRequest, SSURLRequestProperties;
@protocol SSURLConnectionRequestDelegate;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
	SSURLRequestProperties *_requestProperties;	// 28 = 0x1c
	BOOL _shouldMescalSign;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x354c37e1; 
@property(assign, nonatomic) id<SSURLConnectionRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSURLRequestProperties *requestProperties;	// G=0x354c33d5; 
@property(assign) BOOL shouldMescalSign;	// G=0x354c3491; S=0x354c340d; 
- (id)init;	// 0x354c324d
- (id)initWithRequestProperties:(id)requestProperties;	// 0x354c3261
- (id)initWithURLRequest:(id)urlrequest;	// 0x354c32ed
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c3ac9
// declared property getter: - (id)URLRequest;	// 0x354c37e1
- (id)copyXPCEncoding;	// 0x354c3a69
- (void)dealloc;	// 0x354c3389
// declared property getter: - (id)requestProperties;	// 0x354c33d5
// declared property setter: - (void)setShouldMescalSign:(BOOL)mescalSign;	// 0x354c340d
// declared property getter: - (BOOL)shouldMescalSign;	// 0x354c3491
- (BOOL)start;	// 0x354c3819
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354c39f1
- (void)startWithConnectionResponseBlock:(id)connectionResponseBlock;	// 0x354c3565
@end
