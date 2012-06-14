/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class SSURLRequestProperties, NSURLRequest;
@protocol SSURLConnectionRequestDelegate;

@interface SSURLConnectionRequest : SSRequest <SSCoding> {
@private
	SSURLRequestProperties *_requestProperties;	// 36 = 0x24
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x36505759; 
@property(assign, nonatomic) id<SSURLConnectionRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSURLRequestProperties *requestProperties;	// G=0x36505721; 
- (id)init;	// 0x36505429
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3650565d
- (id)initWithRequestProperties:(id)requestProperties;	// 0x3650543d
- (id)initWithURLRequest:(id)urlrequest;	// 0x365054c9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x365056e5
// declared property getter: - (id)URLRequest;	// 0x36505759
- (id)copyPropertyListEncoding;	// 0x365055b1
- (void *)copyXPCEncoding;	// 0x36505629
- (void)dealloc;	// 0x36505565
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x36505791
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x36505865
// declared property getter: - (id)requestProperties;	// 0x36505721
@end
