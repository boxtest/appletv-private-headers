/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMWaypointFeedback : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 8 = 0x8
	NSString *_streetViewPanoId;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x30b71115; 
@property(assign, nonatomic) int status;	// G=0x30b71571; S=0x30b71581; @synthesize=_status
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x30b715c5; S=0x30b715d5; @synthesize=_streetViewPanoId
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x30b71591; S=0x30b715a1; @synthesize=_waypoints
- (void)addWaypoint:(id)waypoint;	// 0x30b71071
- (void)dealloc;	// 0x30b71019
- (id)description;	// 0x30b7112d
- (id)description;	// 0x30b5667d
- (id)dictionaryRepresentation;	// 0x30b7119d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x30b71115
- (BOOL)readFrom:(id)from;	// 0x30b71251
// declared property setter: - (void)setStatus:(int)status;	// 0x30b71581
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x30b715d5
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x30b715a1
// declared property getter: - (int)status;	// 0x30b71571
// declared property getter: - (id)streetViewPanoId;	// 0x30b715c5
- (id)waypointAtIndex:(unsigned)index;	// 0x30b710f5
// declared property getter: - (id)waypoints;	// 0x30b71591
- (unsigned)waypointsCount;	// 0x30b710d5
- (void)writeTo:(id)to;	// 0x30b71415
@end
