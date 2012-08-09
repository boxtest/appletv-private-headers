/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOUIActionCapture : PBCodable {
	double _duration;	// 4 = 0x4
	int _actionType;	// 12 = 0xc
	int _sequenceNumber;	// 16 = 0x10
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 20 = 0x14
}
@property(assign, nonatomic) int actionType;	// G=0x37a691a9; S=0x37a008bd; @synthesize=_actionType
@property(assign, nonatomic) double duration;	// G=0x37a691b9; S=0x37a00889; @synthesize=_duration
@property(assign, nonatomic) BOOL hasActionType;	// G=0x37a6890d; S=0x37a688ed; 
@property(assign, nonatomic) BOOL hasDuration;	// G=0x37a68941; S=0x37a68925; 
@property(assign, nonatomic) BOOL hasSequenceNumber;	// G=0x37a68975; S=0x37a68955; 
@property(assign, nonatomic) int sequenceNumber;	// G=0x37a691d1; S=0x37a008e5; @synthesize=_sequenceNumber
// declared property getter: - (int)actionType;	// 0x37a691a9
- (void)copyTo:(id)to;	// 0x37a68ee1
- (void)dealloc;	// 0x37a688c1
- (id)description;	// 0x37a68989
- (id)dictionaryRepresentation;	// 0x37a689f9
// declared property getter: - (double)duration;	// 0x37a691b9
// declared property getter: - (BOOL)hasActionType;	// 0x37a6890d
// declared property getter: - (BOOL)hasDuration;	// 0x37a68941
// declared property getter: - (BOOL)hasSequenceNumber;	// 0x37a68975
- (unsigned)hash;	// 0x37a69091
- (BOOL)isEqual:(id)equal;	// 0x37a68fad
- (BOOL)readFrom:(id)from;	// 0x37a68e29
// declared property getter: - (int)sequenceNumber;	// 0x37a691d1
// declared property setter: - (void)setActionType:(int)type;	// 0x37a008bd
// declared property setter: - (void)setDuration:(double)duration;	// 0x37a00889
// declared property setter: - (void)setHasActionType:(BOOL)type;	// 0x37a688ed
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x37a68925
// declared property setter: - (void)setHasSequenceNumber:(BOOL)number;	// 0x37a68955
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x37a008e5
- (void)writeTo:(id)to;	// 0x37a68e35
@end
