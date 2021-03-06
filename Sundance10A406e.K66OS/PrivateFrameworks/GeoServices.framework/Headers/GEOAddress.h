/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	int _formattedAddressType;	// 8 = 0x8
	GEOStructuredAddress *_structuredAddress;	// 12 = 0xc
	XXStruct_ec15KC _has;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x3794cbfd; S=0x37950d19; @synthesize=_formattedAddressLines
@property(assign, nonatomic) int formattedAddressType;	// G=0x379690c9; S=0x379690f1; @synthesize=_formattedAddressType
@property(assign, nonatomic) BOOL hasFormattedAddressType;	// G=0x37969135; S=0x37969119; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x379690b1; 
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress;	// G=0x37953541; S=0x37950d29; @synthesize=_structuredAddress
- (id)initWithAddressString:(id)addressString;	// 0x3795c351
- (void)addFormattedAddressLine:(id)line;	// 0x3794c451
- (id)addressDictionary;	// 0x3795c3e1
- (void)clearFormattedAddressLines;	// 0x37969051
- (void)copyTo:(id)to;	// 0x379692b5
- (void)dealloc;	// 0x37950cc1
- (id)description;	// 0x37969149
- (id)dictionaryRepresentation;	// 0x379691b9
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x37969091
// declared property getter: - (id)formattedAddressLines;	// 0x3794cbfd
- (unsigned)formattedAddressLinesCount;	// 0x37969071
// declared property getter: - (int)formattedAddressType;	// 0x379690c9
// declared property getter: - (BOOL)hasFormattedAddressType;	// 0x37969135
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x379690b1
- (unsigned)hash;	// 0x37969491
- (BOOL)isEqual:(id)equal;	// 0x379693b9
- (BOOL)readFrom:(id)from;	// 0x379692a9
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x37950d19
// declared property setter: - (void)setFormattedAddressType:(int)type;	// 0x379690f1
// declared property setter: - (void)setHasFormattedAddressType:(BOOL)type;	// 0x37969119
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x37950d29
// declared property getter: - (id)structuredAddress;	// 0x37953541
- (void)writeTo:(id)to;	// 0x37952071
@end

