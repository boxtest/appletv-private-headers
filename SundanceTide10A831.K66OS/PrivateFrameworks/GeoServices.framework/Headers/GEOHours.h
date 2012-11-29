/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray;

@interface GEOHours : PBCodable {
	XXStruct_WmZAAA _days;	// 4 = 0x4
	NSMutableArray *_timeRanges;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int *days;	// G=0x302c3621; 
@property(readonly, assign, nonatomic) unsigned daysCount;	// G=0x302c360d; 
@property(retain, nonatomic) NSMutableArray *timeRanges;	// G=0x302c4085; S=0x302c4095; @synthesize=_timeRanges
- (void)addDay:(int)day;	// 0x302c3645
- (void)addTimeRange:(id)range;	// 0x302c3735
- (void)clearDays;	// 0x302c3631
- (void)clearTimeRanges;	// 0x302c3715
- (void)copyTo:(id)to;	// 0x302c3ecd
- (int)dayAtIndex:(unsigned)index;	// 0x302c3659
// declared property getter: - (int *)days;	// 0x302c3621
// declared property getter: - (unsigned)daysCount;	// 0x302c360d
- (void)dealloc;	// 0x302c35b9
- (id)description;	// 0x302c37e1
- (id)dictionaryRepresentation;	// 0x302c3851
- (unsigned)hash;	// 0x302c4049
- (BOOL)isEqual:(id)equal;	// 0x302c3fb9
- (BOOL)readFrom:(id)from;	// 0x302c3d35
- (void)setDays:(int *)days count:(unsigned)count;	// 0x302c36fd
// declared property setter: - (void)setTimeRanges:(id)ranges;	// 0x302c4095
- (id)timeRangeAtIndex:(unsigned)index;	// 0x302c37c1
// declared property getter: - (id)timeRanges;	// 0x302c4085
- (unsigned)timeRangesCount;	// 0x302c37a1
- (void)writeTo:(id)to;	// 0x302c3d41
@end
