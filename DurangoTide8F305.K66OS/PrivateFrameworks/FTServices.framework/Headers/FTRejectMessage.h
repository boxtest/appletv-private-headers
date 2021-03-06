/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRejectMessage : FTMessage {
	NSData *_peerPushToken;	// 24 = 0x18
	NSData *_selfPushToken;	// 28 = 0x1c
	NSString *_peerID;	// 32 = 0x20
	NSNumber *_reason;	// 36 = 0x24
}
@property(copy) NSString *peerID;	// G=0x31c15059; S=0x31c150d9; @synthesize=_peerID
@property(copy) NSData *peerPushToken;	// G=0x31c15041; S=0x31c150b1; @synthesize=_peerPushToken
@property(copy) NSNumber *reason;	// G=0x31c15071; S=0x31c15101; @synthesize=_reason
@property(copy) NSData *selfPushToken;	// G=0x31c15029; S=0x31c15089; @synthesize=_selfPushToken
- (id)bagKey;	// 0x31c14c9d
- (void)dealloc;	// 0x31c14d3d
- (id)messageBody;	// 0x31c14dbd
// declared property getter: - (id)peerID;	// 0x31c15059
// declared property getter: - (id)peerPushToken;	// 0x31c15041
// declared property getter: - (id)reason;	// 0x31c15071
- (id)requiredKeys;	// 0x31c14ca9
// declared property getter: - (id)selfPushToken;	// 0x31c15029
// declared property setter: - (void)setPeerID:(id)anId;	// 0x31c150d9
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x31c150b1
// declared property setter: - (void)setReason:(id)reason;	// 0x31c15101
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x31c15089
@end

