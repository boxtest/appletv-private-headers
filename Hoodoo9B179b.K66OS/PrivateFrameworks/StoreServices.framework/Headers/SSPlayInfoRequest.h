/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSCoding> {
@private
	SSPlayInfoRequestContext *_context;	// 36 = 0x24
	SSPlayInfoResponse *_response;	// 40 = 0x28
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign, nonatomic) SSPlayInfoRequestContext *playInfoContext;	// G=0x33c9f905; 
@property(readonly, assign, nonatomic) SSPlayInfoResponse *playInfoResponse;	// G=0x33c9f93d; 
- (id)init;	// 0x33c9f7cd
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x33c9f7e1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33c9fa69
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x33c9fb49
- (void)_sendResponseToDelegate:(id)delegate;	// 0x33c9fd8d
- (id)copyPropertyListEncoding;	// 0x33c9f975
- (void *)copyXPCEncoding;	// 0x33c9fa35
- (void)dealloc;	// 0x33c9f8a5
- (id)handleFailureResponse:(id)response;	// 0x33c9fb85
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x33c9fc59
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x33c9fd65
// declared property getter: - (id)playInfoContext;	// 0x33c9f905
// declared property getter: - (id)playInfoResponse;	// 0x33c9f93d
@end

