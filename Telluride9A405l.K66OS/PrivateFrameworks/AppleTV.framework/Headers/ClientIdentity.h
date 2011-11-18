/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, BRMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject {
@private
	unsigned _applicationState;	// 4 = 0x4
	BOOL _appleSigned;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	int _clientType;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
	NSLock *_lock;	// 24 = 0x18
	int _pid;	// 28 = 0x1c
}
@property(readonly, assign, getter=isAppleSigned) BOOL appleSigned;	// G=0x35f4bc91; 
@property(assign) unsigned applicationState;	// G=0x35f4ba31; S=0x35f4bdc1; 
@property(readonly, assign) BOOL canReceiveMessages;	// G=0x35f4ba81; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x35f4bb5d; 
@property(readonly, assign) NSString *clientIdentifierHeader;	// G=0x35f4bbc9; 
@property(readonly, assign) int clientType;	// G=0x35f4bb0d; 
@property(assign, getter=isListening) BOOL listening;	// G=0x35f4bd29; S=0x35f4be0d; 
@property(readonly, assign, nonatomic) BRMerchant *merchant;	// G=0x35f700d5; 
@property(assign) int processIdentifier;	// G=0x35f4bd75; S=0x35f4be59; 
- (id)init;	// 0x35f4b7d5
- (id)initWithApplicationIdentifier:(id)applicationIdentifier isAppleSigned:(BOOL)aSigned;	// 0x35f4b8ed
- (id)initWithAuditToken:(XXStruct_kUSYWB *)auditToken;	// 0x35f4b7e9
- (id)initWithMerchant:(id)merchant;	// 0x35f6ff65
- (id)_initCommon;	// 0x35f4b745
- (unsigned)_ntsApplicationState;	// 0x35f4bf25
- (int)_ntsClientType;	// 0x35f4bf65
// declared property getter: - (unsigned)applicationState;	// 0x35f4ba31
// declared property getter: - (BOOL)canReceiveMessages;	// 0x35f4ba81
// declared property getter: - (id)clientIdentifier;	// 0x35f4bb5d
// declared property getter: - (id)clientIdentifierHeader;	// 0x35f4bbc9
// declared property getter: - (int)clientType;	// 0x35f4bb0d
- (void)dealloc;	// 0x35f4b9d1
// declared property getter: - (BOOL)isAppleSigned;	// 0x35f4bc91
- (BOOL)isEqual:(id)equal;	// 0x35f4bea5
// declared property getter: - (BOOL)isListening;	// 0x35f4bd29
// declared property getter: - (id)merchant;	// 0x35f700d5
// declared property getter: - (int)processIdentifier;	// 0x35f4bd75
// declared property setter: - (void)setApplicationState:(unsigned)state;	// 0x35f4bdc1
// declared property setter: - (void)setListening:(BOOL)listening;	// 0x35f4be0d
// declared property setter: - (void)setProcessIdentifier:(int)identifier;	// 0x35f4be59
@end

