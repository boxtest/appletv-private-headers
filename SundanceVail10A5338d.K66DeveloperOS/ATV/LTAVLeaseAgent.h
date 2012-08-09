/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRStateMachine.h"
#import "AppleTV-Structs.h"

@class ATVDataItem, NSNumber, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface LTAVLeaseAgent : BRStateMachine {
	ATVDataItem *_item;	// 24 = 0x18
	unsigned long _FPMediaKind;	// 28 = 0x1c
	NSString *_storeMediaKind;	// 32 = 0x20
	NSString *_leaseID;	// 36 = 0x24
	int _numRenewalRetries;	// 40 = 0x28
	NSNumber *_cloudID;	// 44 = 0x2c
	BOOL _drmSyncComplete;	// 48 = 0x30
	FPLeaseSyncOpaque_Ref _lease;	// 52 = 0x34
	NSTimer *renewTimer;	// 56 = 0x38
	double _leaseDuration;	// 60 = 0x3c
}
@property(assign, nonatomic) double leaseDuration;	// G=0x67cc5; S=0x67cdd; @synthesize=_leaseDuration
@property(assign, nonatomic) __weak NSTimer *renewTimer;	// G=0x67c91; S=0x67cb1; @synthesize
+ (id)_generateRequestForOperation:(id)operation clientData:(id)data leaseID:(id)anId storeMediaKind:(id)kind;	// 0x686cd
+ (void)initialize;	// 0x67465
+ (id)leaseAgentForMediaItem:(id)mediaItem player:(id)player;	// 0x67495
+ (void)stopAllLeases;	// 0x674f9
- (id)initWithMediaItem:(id)mediaItem player:(id)player;	// 0x67721
- (void).cxx_destruct;	// 0x67cf1
- (void)_assetDidChange:(id)_asset;	// 0x684cd
- (void)_augmentSagaMediaItemWithDownloadResponse:(id)downloadResponse;	// 0x6a941
- (void)_authenticationFailed:(id)failed;	// 0x68005
- (void)_authenticationSucceeded:(id)succeeded;	// 0x67f29
- (id)_decodeContent:(id)content;	// 0x67d5d
- (void)_delayedEventTimerFired:(id)fired;	// 0x6af61
- (void)_deviceWillSleep:(id)_device;	// 0x68665
- (void)_drmSyncCompleteWithError:(id)error wasCancelled:(BOOL)cancelled;	// 0x68a55
- (id)_dsidFromDownloadResponse:(id)downloadResponse;	// 0x6ad69
- (id)_errorFromDictionary:(id)dictionary;	// 0x67191
- (BOOL)_errorIsRecoverable:(int)recoverable;	// 0x6aee1
- (void)_initializeStateMachine:(id)machine;	// 0x68da5
- (id)_initiateLease;	// 0x6aadd
- (id)_invalidateAgentWithError:(id)error;	// 0x68c51
- (id)_invalidateAgentWithError:(id)error wasCancelled:(BOOL)cancelled;	// 0x68c65
- (void)_leaseAcquisitionLoaded:(id)loaded;	// 0x680e1
- (id)_leaseID;	// 0x68c25
- (void)_leaseRenewalLoaded:(id)loaded;	// 0x68269
- (void)_mediaDidNotResolve:(id)_media;	// 0x68645
- (void)_mediaResolved:(id)resolved;	// 0x68531
- (BOOL)_playerMediaIsLeasedItem:(id)item;	// 0x68d0d
- (void)_playerWillStop:(id)_player;	// 0x68469
- (void)_postDelayedEvent:(id)event;	// 0x6af01
- (void)_renewLease:(id)lease;	// 0x6a8d1
- (void)_stopLease;	// 0x6ad45
- (void)dealloc;	// 0x67bd1
// declared property getter: - (double)leaseDuration;	// 0x67cc5
// declared property getter: - (id)renewTimer;	// 0x67c91
// declared property setter: - (void)setLeaseDuration:(double)duration;	// 0x67cdd
// declared property setter: - (void)setRenewTimer:(id)timer;	// 0x67cb1
- (void)startLease;	// 0x67c51
- (void)stopLease;	// 0x67c71
@end
