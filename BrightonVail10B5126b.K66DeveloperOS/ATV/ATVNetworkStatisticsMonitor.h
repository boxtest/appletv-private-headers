/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVRouteDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVNetworkStatisticsMonitor : XXUnknownSuperclass <ATVRouteDelegate> {
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
	NSMutableArray *_addedRoutes;	// 52 = 0x34
	NStatManager *_statManager;	// 56 = 0x38
}
@property(readonly, assign) int bytesReceived;	// G=0x21b999; @synthesize=_bytesReceived
@property(readonly, assign) int bytesSent;	// G=0x21b9ad; @synthesize=_bytesSent
@property(readonly, assign) int inputErrors;	// G=0x21b95d; @synthesize=_inputErrors
@property(readonly, retain) NSDictionary *interfaceStatistics;	// G=0x21b4dd; converted property
@property(readonly, retain) NSDictionary *ipStatistics;	// G=0x21b4cd; converted property
@property(readonly, assign) int outputErrors;	// G=0x21b985; @synthesize=_outputErrors
@property(readonly, assign) int packetsDropped;	// G=0x21b9c1; @synthesize=_packetsDropped
@property(readonly, assign) int packetsReceived;	// G=0x21b949; @synthesize=_packetsReceived
@property(readonly, assign) int packetsSent;	// G=0x21b971; @synthesize=_packetsSent
@property(assign) BOOL shouldIncludeIPStats;	// G=0x21b8e9; S=0x21b901; @synthesize=_shouldIncludeIPStats
@property(assign) BOOL shouldIncludeInterfaceStats;	// G=0x21b919; S=0x21b931; @synthesize=_shouldIncludeInterfaceStats
@property(readonly, retain) NSDictionary *tcpStatistics;	// G=0x21b4bd; converted property
- (id)init;	// 0x21b3dd
- (id)_defaultRoutes;	// 0x21c225
- (void)_gatherIPStatistics;	// 0x21bf11
- (void)_gatherInterfaceStatistics;	// 0x21c0a9
- (void)_gatherNetStatistics;	// 0x21b9d5
- (void)_gatherTCPStatistics;	// 0x21ba39
- (id)_outboundRoutes;	// 0x21c325
- (void)_routeAdded:(NStatSource *)added;	// 0x21c4f1
- (void)_startRouteMonitoring;	// 0x21c375
- (void)_stopRouteMonitoring;	// 0x21c4cd
- (id)activeDefaultRouteStatistics;	// 0x21b5bd
- (id)activeRouteStatistics;	// 0x21b55d
// declared property getter: - (int)bytesReceived;	// 0x21b999
// declared property getter: - (int)bytesSent;	// 0x21b9ad
- (id)cumulativeDefaultRouteStatistics;	// 0x21b61d
- (id)cumulativeRouteStatistics;	// 0x21b67d
- (void)dealloc;	// 0x21b351
- (void)gatherStats;	// 0x21b7a9
// declared property getter: - (int)inputErrors;	// 0x21b95d
// converted property getter: - (id)interfaceStatistics;	// 0x21b4dd
// converted property getter: - (id)ipStatistics;	// 0x21b4cd
// declared property getter: - (int)outputErrors;	// 0x21b985
// declared property getter: - (int)packetsDropped;	// 0x21b9c1
// declared property getter: - (int)packetsReceived;	// 0x21b949
// declared property getter: - (int)packetsSent;	// 0x21b971
- (void)resetStats;	// 0x21b7b9
- (void)routeRemoved:(id)removed;	// 0x21c631
- (id)routeStatisticsForHost:(id)host;	// 0x21b6dd
// declared property setter: - (void)setShouldIncludeIPStats:(BOOL)includeIPStats;	// 0x21b901
// declared property setter: - (void)setShouldIncludeInterfaceStats:(BOOL)includeInterfaceStats;	// 0x21b931
// declared property getter: - (BOOL)shouldIncludeIPStats;	// 0x21b8e9
// declared property getter: - (BOOL)shouldIncludeInterfaceStats;	// 0x21b919
- (void)startMonitoring;	// 0x21b701
- (void)startRouteMonitoring;	// 0x21b6e1
- (void)stopMonitoring;	// 0x21b775
- (void)stopRouteMonitoring;	// 0x21b6f1
// converted property getter: - (id)tcpStatistics;	// 0x21b4bd
- (void)updateRouteCounts;	// 0x21b4ed
- (void)updateRouteCountsForDefaultRoute;	// 0x21b50d
- (void)updateRouteCountsForRoutes:(id)routes;	// 0x21b53d
@end

