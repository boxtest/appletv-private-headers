/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOIndexQueryNode : PBCodable {
	NSString *_field;	// 4 = 0x4
	NSMutableArray *_operands;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *field;	// G=0x379aaf4d; S=0x379aaf5d; @synthesize=_field
@property(readonly, assign, nonatomic) BOOL hasField;	// G=0x379aa48d; 
@property(readonly, assign, nonatomic) BOOL hasValue;	// G=0x379aa4a5; 
@property(retain, nonatomic) NSMutableArray *operands;	// G=0x379aaf8d; S=0x379aaf9d; @synthesize=_operands
@property(assign, nonatomic) int type;	// G=0x379aaf2d; S=0x379aaf3d; @synthesize=_type
@property(retain, nonatomic) NSString *value;	// G=0x379aaf6d; S=0x379aaf7d; @synthesize=_value
- (void)addOperands:(id)operands;	// 0x379aa4dd
- (void)clearOperands;	// 0x379aa4bd
- (void)copyTo:(id)to;	// 0x379aac99
- (void)dealloc;	// 0x379aa421
- (id)description;	// 0x379aa589
- (id)dictionaryRepresentation;	// 0x379aa5f9
// declared property getter: - (id)field;	// 0x379aaf4d
// declared property getter: - (BOOL)hasField;	// 0x379aa48d
// declared property getter: - (BOOL)hasValue;	// 0x379aa4a5
- (unsigned)hash;	// 0x379aaea1
- (BOOL)isEqual:(id)equal;	// 0x379aadb9
// declared property getter: - (id)operands;	// 0x379aaf8d
- (id)operandsAtIndex:(unsigned)index;	// 0x379aa569
- (unsigned)operandsCount;	// 0x379aa549
- (BOOL)readFrom:(id)from;	// 0x379aaadd
// declared property setter: - (void)setField:(id)field;	// 0x379aaf5d
// declared property setter: - (void)setOperands:(id)operands;	// 0x379aaf9d
// declared property setter: - (void)setType:(int)type;	// 0x379aaf3d
// declared property setter: - (void)setValue:(id)value;	// 0x379aaf7d
// declared property getter: - (int)type;	// 0x379aaf2d
// declared property getter: - (id)value;	// 0x379aaf6d
- (void)writeTo:(id)to;	// 0x379aaae9
@end
