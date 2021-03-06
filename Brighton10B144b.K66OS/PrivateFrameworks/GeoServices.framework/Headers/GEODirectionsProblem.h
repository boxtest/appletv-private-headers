/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSData;

@interface GEODirectionsProblem : PBCodable {
	unsigned long long _problematicEventIndex;	// 4 = 0x4
	NSMutableArray *_directionsRequests;	// 12 = 0xc
	NSMutableArray *_directionsResponses;	// 16 = 0x10
@private
	NSMutableArray *_events;	// 20 = 0x14
@protected
	NSData *_overviewScreenshotImageData;	// 24 = 0x18
	unsigned _problematicResponseIndex;	// 28 = 0x1c
	NSData *_problematicRouteID;	// 32 = 0x20
	unsigned _problematicStepIndex;	// 36 = 0x24
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 40 = 0x28
}
@property(retain, nonatomic) NSMutableArray *directionsRequests;	// G=0x3401a4c5; S=0x3401a4d5; @synthesize=_directionsRequests
@property(retain, nonatomic) NSMutableArray *directionsResponses;	// G=0x3401a4e5; S=0x3401a4f5; @synthesize=_directionsResponses
@property(retain, nonatomic) NSMutableArray *events;	// G=0x3401a525; S=0x3401a535; @synthesize=_events
@property(readonly, assign, nonatomic) BOOL hasOverviewScreenshotImageData;	// G=0x34018d99; 
@property(assign, nonatomic) BOOL hasProblematicEventIndex;	// G=0x34018f9d; S=0x34018f81; 
@property(assign, nonatomic) BOOL hasProblematicResponseIndex;	// G=0x34018ec5; S=0x34018ea5; 
@property(readonly, assign, nonatomic) BOOL hasProblematicRouteID;	// G=0x34018ed9; 
@property(assign, nonatomic) BOOL hasProblematicStepIndex;	// G=0x34018f39; S=0x34018f19; 
@property(retain, nonatomic) NSData *overviewScreenshotImageData;	// G=0x3401a505; S=0x3401a515; @synthesize=_overviewScreenshotImageData
@property(assign, nonatomic) unsigned long long problematicEventIndex;	// G=0x3401a585; S=0x34018f4d; @synthesize=_problematicEventIndex
@property(assign, nonatomic) unsigned problematicResponseIndex;	// G=0x3401a545; S=0x34018e7d; @synthesize=_problematicResponseIndex
@property(retain, nonatomic) NSData *problematicRouteID;	// G=0x3401a555; S=0x3401a565; @synthesize=_problematicRouteID
@property(assign, nonatomic) unsigned problematicStepIndex;	// G=0x3401a575; S=0x34018ef1; @synthesize=_problematicStepIndex
- (void)addDirectionsRequests:(id)requests;	// 0x34018c21
- (void)addDirectionsResponses:(id)responses;	// 0x34018ced
- (void)addEvents:(id)events;	// 0x34018dd1
- (void)clearDirectionsRequests;	// 0x34018c01
- (void)clearDirectionsResponses;	// 0x34018ccd
- (void)clearEvents;	// 0x34018db1
- (void)copyTo:(id)to;	// 0x34019f01
- (void)dealloc;	// 0x34018b6d
- (id)description;	// 0x34018fb1
- (id)dictionaryRepresentation;	// 0x34019021
// declared property getter: - (id)directionsRequests;	// 0x3401a4c5
- (id)directionsRequestsAtIndex:(unsigned)index;	// 0x34018cad
- (unsigned)directionsRequestsCount;	// 0x34018c8d
// declared property getter: - (id)directionsResponses;	// 0x3401a4e5
- (id)directionsResponsesAtIndex:(unsigned)index;	// 0x34018d79
- (unsigned)directionsResponsesCount;	// 0x34018d59
// declared property getter: - (id)events;	// 0x3401a525
- (id)eventsAtIndex:(unsigned)index;	// 0x34018e5d
- (unsigned)eventsCount;	// 0x34018e3d
// declared property getter: - (BOOL)hasOverviewScreenshotImageData;	// 0x34018d99
// declared property getter: - (BOOL)hasProblematicEventIndex;	// 0x34018f9d
// declared property getter: - (BOOL)hasProblematicResponseIndex;	// 0x34018ec5
// declared property getter: - (BOOL)hasProblematicRouteID;	// 0x34018ed9
// declared property getter: - (BOOL)hasProblematicStepIndex;	// 0x34018f39
- (unsigned)hash;	// 0x3401a38d
- (BOOL)isEqual:(id)equal;	// 0x3401a199
// declared property getter: - (id)overviewScreenshotImageData;	// 0x3401a505
// declared property getter: - (unsigned long long)problematicEventIndex;	// 0x3401a585
// declared property getter: - (unsigned)problematicResponseIndex;	// 0x3401a545
// declared property getter: - (id)problematicRouteID;	// 0x3401a555
// declared property getter: - (unsigned)problematicStepIndex;	// 0x3401a575
- (BOOL)readFrom:(id)from;	// 0x34019ab9
// declared property setter: - (void)setDirectionsRequests:(id)requests;	// 0x3401a4d5
// declared property setter: - (void)setDirectionsResponses:(id)responses;	// 0x3401a4f5
// declared property setter: - (void)setEvents:(id)events;	// 0x3401a535
// declared property setter: - (void)setHasProblematicEventIndex:(BOOL)index;	// 0x34018f81
// declared property setter: - (void)setHasProblematicResponseIndex:(BOOL)index;	// 0x34018ea5
// declared property setter: - (void)setHasProblematicStepIndex:(BOOL)index;	// 0x34018f19
// declared property setter: - (void)setOverviewScreenshotImageData:(id)data;	// 0x3401a515
// declared property setter: - (void)setProblematicEventIndex:(unsigned long long)index;	// 0x34018f4d
// declared property setter: - (void)setProblematicResponseIndex:(unsigned)index;	// 0x34018e7d
// declared property setter: - (void)setProblematicRouteID:(id)anId;	// 0x3401a565
// declared property setter: - (void)setProblematicStepIndex:(unsigned)index;	// 0x34018ef1
- (void)writeTo:(id)to;	// 0x34019ac5
@end

