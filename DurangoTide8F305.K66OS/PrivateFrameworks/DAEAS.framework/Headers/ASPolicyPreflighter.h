/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, ASTaskManager, ASPolicy, NSString;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSString *_originalKey;	// 8 = 0x8
	NSString *_newKey;	// 12 = 0xc
	id<ASPolicyPreflighterDelegate> _delegate;	// 16 = 0x10
	ASPolicy *_policy;	// 20 = 0x14
	ASPolicy *_acknowledgedPolicy;	// 24 = 0x18
	ASTaskManager *_taskManager;	// 28 = 0x1c
	id _contextInfo;	// 32 = 0x20
	BOOL _invalidated;	// 36 = 0x24
}
@property(readonly, retain) ASAccount *account;	// G=0x30332e09; converted property
@property(retain) id contextInfo;	// G=0x30332df9; S=0x30333145; converted property
@property(assign) id delegate;	// G=0x30332de9; S=0x30332dd9; converted property
- (id)initWithAccount:(id)account policyKey:(id)key;	// 0x303331b9
- (id)_acknowledgedPolicy;	// 0x30332e19
- (void)_invalidate;	// 0x30333115
- (id)_originalKey;	// 0x30332e29
- (void)_setAcknowledgedPolicy:(id)policy;	// 0x3033309d
- (void)_setPolicy:(id)policy;	// 0x303330d9
// converted property getter: - (id)account;	// 0x30332e09
- (void)acknowledgeIntentionToRemoteWipe;	// 0x30332e71
- (void)acknowledgePolicyCompliance;	// 0x30332f21
- (void)cancelPendingPreflightRequest;	// 0x30332e41
// converted property getter: - (id)contextInfo;	// 0x30332df9
- (void)dealloc;	// 0x30333265
// converted property getter: - (id)delegate;	// 0x30332de9
- (void)invalidate;	// 0x3033317d
- (void)provisionTask:(id)task failedWithError:(id)error;	// 0x30333079
- (void)provisionTask:(id)task wipeRequested:(BOOL)requested policies:(id)policies status:(int)status;	// 0x30333381
// converted property setter: - (void)setContextInfo:(id)info;	// 0x30333145
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30332dd9
- (void)startPreflight;	// 0x30332fe1
@end
