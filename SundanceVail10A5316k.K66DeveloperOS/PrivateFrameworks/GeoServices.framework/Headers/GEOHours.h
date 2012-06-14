/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOHours : PBCodable {
@private
	XXStruct_WmZAAA _days;	// 4 = 0x4
	NSMutableArray *_timeRanges;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int *days;	// G=0x34b762c9; 
@property(readonly, assign, nonatomic) unsigned daysCount;	// G=0x34b762b5; 
@property(retain, nonatomic) NSMutableArray *timeRanges;	// G=0x34b76d2d; S=0x34b76d3d; @synthesize=_timeRanges
- (void)addDay:(int)day;	// 0x34b762ed
- (void)addTimeRange:(id)range;	// 0x34b763dd
- (void)clearDays;	// 0x34b762d9
- (void)clearTimeRanges;	// 0x34b763bd
- (void)copyTo:(id)to;	// 0x34b76b75
- (int)dayAtIndex:(unsigned)index;	// 0x34b76301
// declared property getter: - (int *)days;	// 0x34b762c9
// declared property getter: - (unsigned)daysCount;	// 0x34b762b5
- (void)dealloc;	// 0x34b76261
- (id)description;	// 0x34b76489
- (id)dictionaryRepresentation;	// 0x34b764f9
- (unsigned)hash;	// 0x34b76cf1
- (BOOL)isEqual:(id)equal;	// 0x34b76c61
- (BOOL)readFrom:(id)from;	// 0x34b769dd
- (void)setDays:(int *)days count:(unsigned)count;	// 0x34b763a5
// declared property setter: - (void)setTimeRanges:(id)ranges;	// 0x34b76d3d
- (id)timeRangeAtIndex:(unsigned)index;	// 0x34b76469
// declared property getter: - (id)timeRanges;	// 0x34b76d2d
- (unsigned)timeRangesCount;	// 0x34b76449
- (void)writeTo:(id)to;	// 0x34b769e9
@end
