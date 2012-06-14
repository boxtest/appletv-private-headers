/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSDictionary;

@interface ATVNetworkStatisticsMonitor : NSObject {
@private
	NSDictionary *_tcpStatistics;	// 4 = 0x4
	NSDictionary *_ipStatistics;	// 8 = 0x8
	NSDictionary *_interfaceStatistics;	// 12 = 0xc
	NSTimer *_monitorTimer;	// 16 = 0x10
	int _packetsReceived;	// 20 = 0x14
	int _inputErrors;	// 24 = 0x18
	int _packetsSent;	// 28 = 0x1c
	int _outputErrors;	// 32 = 0x20
	int _bytesReceived;	// 36 = 0x24
	int _bytesSent;	// 40 = 0x28
	int _packetsDropped;	// 44 = 0x2c
	BOOL _shouldIncludeIPStats;	// 48 = 0x30
	BOOL _shouldIncludeInterfaceStats;	// 49 = 0x31
}
@property(readonly, assign) int bytesReceived;	// G=0x35d72735; @synthesize=_bytesReceived
@property(readonly, assign) int bytesSent;	// G=0x35d72745; @synthesize=_bytesSent
@property(readonly, assign) int inputErrors;	// G=0x35d72705; @synthesize=_inputErrors
@property(readonly, retain) NSDictionary *interfaceStatistics;	// G=0x35d724b9; converted property
@property(readonly, retain) NSDictionary *ipStatistics;	// G=0x35d724a9; converted property
@property(readonly, assign) int outputErrors;	// G=0x35d72725; @synthesize=_outputErrors
@property(readonly, assign) int packetsDropped;	// G=0x35d72755; @synthesize=_packetsDropped
@property(readonly, assign) int packetsReceived;	// G=0x35d726f5; @synthesize=_packetsReceived
@property(readonly, assign) int packetsSent;	// G=0x35d72715; @synthesize=_packetsSent
@property(assign) BOOL shouldIncludeIPStats;	// G=0x35d726b5; S=0x35d726c5; @synthesize=_shouldIncludeIPStats
@property(assign) BOOL shouldIncludeInterfaceStats;	// G=0x35d726d5; S=0x35d726e5; @synthesize=_shouldIncludeInterfaceStats
@property(readonly, retain) NSDictionary *tcpStatistics;	// G=0x35d72499; converted property
- (id)init;	// 0x35d723bd
- (void)_gatherIPStatistics;	// 0x35d72c75
- (void)_gatherInterfaceStatistics;	// 0x35d72dc9
- (void)_gatherNetStatistics;	// 0x35d72765
- (void)_gatherTCPStatistics;	// 0x35d727c9
// declared property getter: - (int)bytesReceived;	// 0x35d72735
// declared property getter: - (int)bytesSent;	// 0x35d72745
- (void)dealloc;	// 0x35d72349
- (void)gatherStats;	// 0x35d72585
// declared property getter: - (int)inputErrors;	// 0x35d72705
// converted property getter: - (id)interfaceStatistics;	// 0x35d724b9
// converted property getter: - (id)ipStatistics;	// 0x35d724a9
// declared property getter: - (int)outputErrors;	// 0x35d72725
// declared property getter: - (int)packetsDropped;	// 0x35d72755
// declared property getter: - (int)packetsReceived;	// 0x35d726f5
// declared property getter: - (int)packetsSent;	// 0x35d72715
- (void)resetStats;	// 0x35d72595
// declared property setter: - (void)setShouldIncludeIPStats:(BOOL)includeIPStats;	// 0x35d726c5
// declared property setter: - (void)setShouldIncludeInterfaceStats:(BOOL)includeInterfaceStats;	// 0x35d726e5
// declared property getter: - (BOOL)shouldIncludeIPStats;	// 0x35d726b5
// declared property getter: - (BOOL)shouldIncludeInterfaceStats;	// 0x35d726d5
- (void)startMonitoring;	// 0x35d724c9
- (void)stopMonitoring;	// 0x35d72551
// converted property getter: - (id)tcpStatistics;	// 0x35d72499
@end
