/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class XPCClient, ClientIdentity, NSString;

__attribute__((visibility("hidden")))
@interface RequestQueueOperation : ISOperation {
@private
	XPCClient *_client;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _disconnected;	// 68 = 0x44
	NSString *_requestGroupIdentifier;	// 72 = 0x48
	NSString *_requestIdentifier;	// 76 = 0x4c
}
@property(retain) XPCClient *client;	// G=0x33370135; S=0x33370289; 
@property(assign, getter=isClientConnected) BOOL clientConnected;	// G=0x33370245; S=0x333702f1; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x33370339; S=0x3337034d; @synthesize=_clientIdentity
@property(retain) NSString *requestGroupIdentifier;	// G=0x33370371; S=0x33370385; @synthesize=_requestGroupIdentifier
@property(retain) NSString *requestIdentifier;	// G=0x333703a9; S=0x333703bd; @synthesize=_requestIdentifier
- (id)initWithRequest:(id)request;	// 0x33370021
// declared property getter: - (id)client;	// 0x33370135
// declared property getter: - (id)clientIdentity;	// 0x33370339
- (id)copyRequest;	// 0x33370195
- (id)copyResponseDictionary;	// 0x33370199
- (void)dealloc;	// 0x333700ad
// declared property getter: - (BOOL)isClientConnected;	// 0x33370245
// declared property getter: - (id)requestGroupIdentifier;	// 0x33370371
// declared property getter: - (id)requestIdentifier;	// 0x333703a9
// declared property setter: - (void)setClient:(id)client;	// 0x33370289
// declared property setter: - (void)setClientConnected:(BOOL)connected;	// 0x333702f1
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x3337034d
// declared property setter: - (void)setRequestGroupIdentifier:(id)identifier;	// 0x33370385
// declared property setter: - (void)setRequestIdentifier:(id)identifier;	// 0x333703bd
@end

