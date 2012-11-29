/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest <SSXPCCoding> {
	BOOL _isBackgroundRequest;	// 28 = 0x1c
	NSArray *_purchases;	// 32 = 0x20
	BOOL _shouldValidatePurchases;	// 36 = 0x24
	BOOL _createsDownloads;	// 37 = 0x25
	BOOL _needsAuthentication;	// 38 = 0x26
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x3583e51d; S=0x3583e52d; @synthesize=_isBackgroundRequest
@property(assign, nonatomic) BOOL createsDownloads;	// G=0x3583e53d; S=0x3583e54d; @synthesize=_createsDownloads
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x3583e55d; S=0x3583e56d; @synthesize=_needsAuthentication
@property(readonly, assign) NSArray *purchases;	// G=0x3583d6e1; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x3583e57d; S=0x3583e58d; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x3583d5a9
- (id)initWithPurchases:(id)purchases;	// 0x3583d5bd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3583e245
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x3583e435
- (id)copyXPCEncoding;	// 0x3583e045
// declared property getter: - (BOOL)createsDownloads;	// 0x3583e53d
- (void)dealloc;	// 0x3583d63d
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x3583e51d
// declared property getter: - (BOOL)needsAuthentication;	// 0x3583e55d
// declared property getter: - (id)purchases;	// 0x3583d6e1
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x3583e52d
// declared property setter: - (void)setCreatesDownloads:(BOOL)downloads;	// 0x3583e54d
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x3583e56d
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x3583e58d
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x3583e57d
- (BOOL)start;	// 0x3583dce1
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3583dfd1
- (void)startWithPurchaseBlock:(id)purchaseBlock completionBlock:(id)block;	// 0x3583d719
- (void)startWithPurchaseResponseBlock:(id)purchaseResponseBlock completionBlock:(id)block;	// 0x3583d811
@end
