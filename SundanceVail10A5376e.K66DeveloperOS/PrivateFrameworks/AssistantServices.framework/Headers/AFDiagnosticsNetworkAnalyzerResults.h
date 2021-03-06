/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSNumber;

@interface AFDiagnosticsNetworkAnalyzerResults : NSObject {
	NSNumber *_knownURLLoadDuration;	// 4 = 0x4
	BOOL _forUserRequest;	// 8 = 0x8
	NSNumber *_sendBufferBytesRemaining;	// 12 = 0xc
	NSNumber *_siriSaltURLLoadDuration;	// 16 = 0x10
	BOOL _wwanPreferred;	// 20 = 0x14
	NSNumber *_siriURLLoadDuration;	// 24 = 0x18
	BOOL _analyzedSuccessfulRetry;	// 28 = 0x1c
	NSNumber *_gatewayPingDuration;	// 32 = 0x20
	int _gatewayStatus;	// 36 = 0x24
	NSNumber *_connectionInterface;	// 40 = 0x28
	NSNumber *_gatewayPingsDropped;	// 44 = 0x2c
	NSNumber *_gatewayPingsSent;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL analyzedSuccessfulRetry;	// G=0x34624681; S=0x34624691; @synthesize=_analyzedSuccessfulRetry
@property(copy, nonatomic) NSNumber *connectionInterface;	// G=0x346246e5; S=0x346246f9; @synthesize=_connectionInterface
@property(assign, nonatomic, getter=isForUserRequest) BOOL forUserRequest;	// G=0x346245d5; S=0x346245e5; @synthesize=_forUserRequest
@property(copy, nonatomic) NSNumber *gatewayPingDuration;	// G=0x346246a1; S=0x346246b5; @synthesize=_gatewayPingDuration
@property(copy, nonatomic) NSNumber *gatewayPingsDropped;	// G=0x34624709; S=0x3462471d; @synthesize=_gatewayPingsDropped
@property(copy, nonatomic) NSNumber *gatewayPingsSent;	// G=0x3462472d; S=0x34624741; @synthesize=_gatewayPingsSent
@property(assign, nonatomic) int gatewayStatus;	// G=0x346246c5; S=0x346246d5; @synthesize=_gatewayStatus
@property(copy, nonatomic) NSNumber *knownURLLoadDuration;	// G=0x346245b1; S=0x346245c5; @synthesize=_knownURLLoadDuration
@property(copy, nonatomic) NSNumber *sendBufferBytesRemaining;	// G=0x346245f5; S=0x34624609; @synthesize=_sendBufferBytesRemaining
@property(copy, nonatomic) NSNumber *siriSaltURLLoadDuration;	// G=0x34624619; S=0x3462462d; @synthesize=_siriSaltURLLoadDuration
@property(copy, nonatomic) NSNumber *siriURLLoadDuration;	// G=0x3462465d; S=0x34624671; @synthesize=_siriURLLoadDuration
@property(assign, nonatomic) BOOL wwanPreferred;	// G=0x3462463d; S=0x3462464d; @synthesize=_wwanPreferred
- (void).cxx_destruct;	// 0x34624751
- (unsigned long long)_durationInMillisecondsForDuration:(id)duration;	// 0x34624bd1
// declared property getter: - (BOOL)analyzedSuccessfulRetry;	// 0x34624681
// declared property getter: - (id)connectionInterface;	// 0x346246e5
// declared property getter: - (id)gatewayPingDuration;	// 0x346246a1
// declared property getter: - (id)gatewayPingsDropped;	// 0x34624709
// declared property getter: - (id)gatewayPingsSent;	// 0x3462472d
// declared property getter: - (int)gatewayStatus;	// 0x346246c5
// declared property getter: - (BOOL)isForUserRequest;	// 0x346245d5
// declared property getter: - (id)knownURLLoadDuration;	// 0x346245b1
- (id)metricValue;	// 0x346247fd
// declared property getter: - (id)sendBufferBytesRemaining;	// 0x346245f5
// declared property setter: - (void)setAnalyzedSuccessfulRetry:(BOOL)retry;	// 0x34624691
// declared property setter: - (void)setConnectionInterface:(id)interface;	// 0x346246f9
// declared property setter: - (void)setForUserRequest:(BOOL)userRequest;	// 0x346245e5
// declared property setter: - (void)setGatewayPingDuration:(id)duration;	// 0x346246b5
// declared property setter: - (void)setGatewayPingsDropped:(id)dropped;	// 0x3462471d
// declared property setter: - (void)setGatewayPingsSent:(id)sent;	// 0x34624741
// declared property setter: - (void)setGatewayStatus:(int)status;	// 0x346246d5
// declared property setter: - (void)setKnownURLLoadDuration:(id)duration;	// 0x346245c5
// declared property setter: - (void)setSendBufferBytesRemaining:(id)remaining;	// 0x34624609
// declared property setter: - (void)setSiriSaltURLLoadDuration:(id)duration;	// 0x3462462d
// declared property setter: - (void)setSiriURLLoadDuration:(id)duration;	// 0x34624671
// declared property setter: - (void)setWwanPreferred:(BOOL)preferred;	// 0x3462464d
// declared property getter: - (id)siriSaltURLLoadDuration;	// 0x34624619
// declared property getter: - (id)siriURLLoadDuration;	// 0x3462465d
// declared property getter: - (BOOL)wwanPreferred;	// 0x3462463d
@end

