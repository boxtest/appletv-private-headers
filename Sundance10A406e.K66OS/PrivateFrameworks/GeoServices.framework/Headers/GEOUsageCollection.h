/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOUsageCollection : PBCodable {
	XXStruct_t9EeIA _probeID;	// 4 = 0x4
	XXStruct_t9EeIA _sessionID;	// 20 = 0x14
	XXStruct_2ta5gB *_tileUsages;	// 36 = 0x24
	unsigned _tileUsagesCount;	// 40 = 0x28
	unsigned _tileUsagesSpace;	// 44 = 0x2c
	double _timestamp;	// 48 = 0x30
	int _cellWifi;	// 56 = 0x38
	NSString *_countryCode;	// 60 = 0x3c
	int _geoService;	// 64 = 0x40
	NSString *_hwMachine;	// 68 = 0x44
	int _requestDataSize;	// 72 = 0x48
	int _responseDataSize;	// 76 = 0x4c
	int _responseTime;	// 80 = 0x50
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 84 = 0x54
}
@property(assign, nonatomic) int cellWifi;	// G=0x379b4879; S=0x379506ed; @synthesize=_cellWifi
@property(retain, nonatomic) NSString *countryCode;	// G=0x379b4889; S=0x37950671; @synthesize=_countryCode
@property(assign, nonatomic) int geoService;	// G=0x379b4839; S=0x379505c1; @synthesize=_geoService
@property(assign, nonatomic) BOOL hasCellWifi;	// G=0x379b2efd; S=0x379b2edd; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x379b2f11; 
@property(assign, nonatomic) BOOL hasGeoService;	// G=0x379b2e31; S=0x379b2e11; 
@property(readonly, assign, nonatomic) BOOL hasHwMachine;	// G=0x379b3135; 
@property(assign, nonatomic) BOOL hasProbeID;	// G=0x379b2f79; S=0x379b2f5d; 
@property(assign, nonatomic) BOOL hasRequestDataSize;	// G=0x379b2e65; S=0x379b2e45; 
@property(assign, nonatomic) BOOL hasResponseDataSize;	// G=0x379b2e99; S=0x379b2e79; 
@property(assign, nonatomic) BOOL hasResponseTime;	// G=0x379b2ec9; S=0x379b2ead; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x379b2f49; S=0x379b2f29; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x379b2fb1; S=0x379b2f91; 
@property(retain, nonatomic) NSString *hwMachine;	// G=0x379b48f9; S=0x379b4909; @synthesize=_hwMachine
@property(assign, nonatomic) XXStruct_t9EeIA probeID;	// G=0x379b48bd; S=0x3795073d; @synthesize=_probeID
@property(assign, nonatomic) int requestDataSize;	// G=0x379b4849; S=0x379505ed; @synthesize=_requestDataSize
@property(assign, nonatomic) int responseDataSize;	// G=0x379b4859; S=0x37950619; @synthesize=_responseDataSize
@property(assign, nonatomic) int responseTime;	// G=0x379b4869; S=0x37950645; @synthesize=_responseTime
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x379b4899; S=0x37950781; @synthesize=_sessionID
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *tileUsages;	// G=0x379b2fd5; 
@property(readonly, assign, nonatomic) unsigned tileUsagesCount;	// G=0x379b2fc5; 
@property(assign, nonatomic) double timestamp;	// G=0x379b48e1; S=0x379507c5; @synthesize=_timestamp
- (void)addTileUsage:(XXStruct_2ta5gB)usage;	// 0x37956791
// declared property getter: - (int)cellWifi;	// 0x379b4879
- (void)clearTileUsages;	// 0x379b2fe5
- (void)copyTo:(id)to;	// 0x379b3f91
// declared property getter: - (id)countryCode;	// 0x379b4889
- (void)dealloc;	// 0x379b2da9
- (id)description;	// 0x379b314d
- (id)dictionaryRepresentation;	// 0x379b31bd
// declared property getter: - (int)geoService;	// 0x379b4839
// declared property getter: - (BOOL)hasCellWifi;	// 0x379b2efd
// declared property getter: - (BOOL)hasCountryCode;	// 0x379b2f11
// declared property getter: - (BOOL)hasGeoService;	// 0x379b2e31
// declared property getter: - (BOOL)hasHwMachine;	// 0x379b3135
// declared property getter: - (BOOL)hasProbeID;	// 0x379b2f79
// declared property getter: - (BOOL)hasRequestDataSize;	// 0x379b2e65
// declared property getter: - (BOOL)hasResponseDataSize;	// 0x379b2e99
// declared property getter: - (BOOL)hasResponseTime;	// 0x379b2ec9
// declared property getter: - (BOOL)hasSessionID;	// 0x379b2f49
// declared property getter: - (BOOL)hasTimestamp;	// 0x379b2fb1
- (unsigned)hash;	// 0x379b45d9
// declared property getter: - (id)hwMachine;	// 0x379b48f9
- (BOOL)isEqual:(id)equal;	// 0x379b42f5
// declared property getter: - (XXStruct_t9EeIA)probeID;	// 0x379b48bd
- (BOOL)readFrom:(id)from;	// 0x379b3c21
// declared property getter: - (int)requestDataSize;	// 0x379b4849
// declared property getter: - (int)responseDataSize;	// 0x379b4859
// declared property getter: - (int)responseTime;	// 0x379b4869
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x379b4899
// declared property setter: - (void)setCellWifi:(int)wifi;	// 0x379506ed
// declared property setter: - (void)setCountryCode:(id)code;	// 0x37950671
// declared property setter: - (void)setGeoService:(int)service;	// 0x379505c1
// declared property setter: - (void)setHasCellWifi:(BOOL)wifi;	// 0x379b2edd
// declared property setter: - (void)setHasGeoService:(BOOL)service;	// 0x379b2e11
// declared property setter: - (void)setHasProbeID:(BOOL)anId;	// 0x379b2f5d
// declared property setter: - (void)setHasRequestDataSize:(BOOL)size;	// 0x379b2e45
// declared property setter: - (void)setHasResponseDataSize:(BOOL)size;	// 0x379b2e79
// declared property setter: - (void)setHasResponseTime:(BOOL)time;	// 0x379b2ead
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x379b2f29
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x379b2f91
// declared property setter: - (void)setHwMachine:(id)machine;	// 0x379b4909
// declared property setter: - (void)setProbeID:(XXStruct_t9EeIA)anId;	// 0x3795073d
// declared property setter: - (void)setRequestDataSize:(int)size;	// 0x379505ed
// declared property setter: - (void)setResponseDataSize:(int)size;	// 0x37950619
// declared property setter: - (void)setResponseTime:(int)time;	// 0x37950645
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x37950781
- (void)setTileUsages:(XXStruct_2ta5gB *)usages count:(unsigned)count;	// 0x379b30e5
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x379507c5
- (XXStruct_2ta5gB)tileUsageAtIndex:(unsigned)index;	// 0x379b3025
// declared property getter: - (XXStruct_2ta5gB *)tileUsages;	// 0x379b2fd5
// declared property getter: - (unsigned)tileUsagesCount;	// 0x379b2fc5
// declared property getter: - (double)timestamp;	// 0x379b48e1
- (void)writeTo:(id)to;	// 0x379b3c2d
@end

