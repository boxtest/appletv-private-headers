/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOTimeRange : PBCodable {
@private
	unsigned _from;	// 4 = 0x4
	unsigned _to;	// 8 = 0x8
	BOOL _allDay;	// 12 = 0xc
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL allDay;	// G=0x34b775f5; S=0x34b76e2d; @synthesize=_allDay
@property(assign, nonatomic) unsigned from;	// G=0x34b775d5; S=0x34b76d79; @synthesize=_from
@property(assign, nonatomic) BOOL hasAllDay;	// G=0x34b76e75; S=0x34b76e55; 
@property(assign, nonatomic) BOOL hasFrom;	// G=0x34b76dbd; S=0x34b76da1; 
@property(assign, nonatomic) BOOL hasTo;	// G=0x34b76e19; S=0x34b76df9; 
@property(assign, nonatomic) unsigned to;	// G=0x34b775e5; S=0x34b76dd1; @synthesize=_to
// declared property getter: - (BOOL)allDay;	// 0x34b775f5
- (void)copyTo:(id)to;	// 0x34b77399
- (void)dealloc;	// 0x34b76d4d
- (id)description;	// 0x34b76e89
- (id)dictionaryRepresentation;	// 0x34b76ef9
// declared property getter: - (unsigned)from;	// 0x34b775d5
// declared property getter: - (BOOL)hasAllDay;	// 0x34b76e75
// declared property getter: - (BOOL)hasFrom;	// 0x34b76dbd
// declared property getter: - (BOOL)hasTo;	// 0x34b76e19
- (unsigned)hash;	// 0x34b77539
- (BOOL)isEqual:(id)equal;	// 0x34b77461
- (BOOL)readFrom:(id)from;	// 0x34b772f1
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34b76e2d
// declared property setter: - (void)setFrom:(unsigned)from;	// 0x34b76d79
// declared property setter: - (void)setHasAllDay:(BOOL)day;	// 0x34b76e55
// declared property setter: - (void)setHasFrom:(BOOL)from;	// 0x34b76da1
// declared property setter: - (void)setHasTo:(BOOL)to;	// 0x34b76df9
// declared property setter: - (void)setTo:(unsigned)to;	// 0x34b76dd1
// declared property getter: - (unsigned)to;	// 0x34b775e5
- (void)writeTo:(id)to;	// 0x34b772fd
@end
