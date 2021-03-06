/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
@private
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x31c10125; S=0x31c0f931; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x31c100cd; S=0x31c0f98d; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x31c100e5; S=0x31c0f9e1; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x31c10115; S=0x31c0fa89; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x31c100fd; S=0x31c0fa35; @synthesize=_locationSpeed
- (id)init;	// 0x31c0f4d5
- (void)appendSimulatedLocation:(id)location;	// 0x31c0fb0d
- (id)availableScenarios;	// 0x31c0f63d
- (void)clearSimulatedCells;	// 0x31c0fe15
- (void)clearSimulatedLocations;	// 0x31c0fad5
- (void)flush;	// 0x31c10095
- (void)loadScenarioFromURL:(id)url;	// 0x31c0f7ed
- (id)localizedNameForScenario:(id)scenario;	// 0x31c0f765
// declared property getter: - (int)locationDeliveryBehavior;	// 0x31c10125
// declared property getter: - (double)locationDistance;	// 0x31c100cd
// declared property getter: - (double)locationInterval;	// 0x31c100e5
// declared property getter: - (int)locationRepeatBehavior;	// 0x31c10115
// declared property getter: - (double)locationSpeed;	// 0x31c100fd
- (id)scenariosPath;	// 0x31c0f565
- (void)selectScenario:(id)scenario;	// 0x31c0f769
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x31c0f931
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x31c0f98d
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x31c0f9e1
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x31c0fa89
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x31c0fa35
- (void)setSimulatedCell:(id)cell;	// 0x31c0fe4d
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x31c0ff55
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x31c10059
- (void)setWifiScanResults:(id)results;	// 0x31c0ff91
- (void)startCellSimulation;	// 0x31c0fee5
- (void)startLocationSimulation;	// 0x31c0fda5
- (void)startWifiSimulation;	// 0x31c0ffe9
- (void)stopCellSimulation;	// 0x31c0ff1d
- (void)stopLocationSimulation;	// 0x31c0fddd
- (void)stopWifiSimulation;	// 0x31c10021
@end

