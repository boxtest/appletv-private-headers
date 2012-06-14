/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable {
@private
	XXStruct_19EQxD _geoIds;	// 4 = 0x4
	NSString *_administrativeArea;	// 16 = 0x10
	NSString *_administrativeAreaCode;	// 20 = 0x14
	NSMutableArray *_areaOfInterests;	// 24 = 0x18
	NSString *_country;	// 28 = 0x1c
	NSString *_countryCode;	// 32 = 0x20
	NSMutableArray *_dependentLocalitys;	// 36 = 0x24
	NSString *_fullThoroughfare;	// 40 = 0x28
	NSString *_inlandWater;	// 44 = 0x2c
	NSString *_locality;	// 48 = 0x30
	NSString *_ocean;	// 52 = 0x34
	NSString *_postCode;	// 56 = 0x38
	NSString *_postCodeExtension;	// 60 = 0x3c
	NSString *_premise;	// 64 = 0x40
	NSString *_premises;	// 68 = 0x44
	NSString *_subAdministrativeArea;	// 72 = 0x48
	NSString *_subLocality;	// 76 = 0x4c
	NSMutableArray *_subPremises;	// 80 = 0x50
	NSString *_subThoroughfare;	// 84 = 0x54
	NSString *_thoroughfare;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x34b22d25; S=0x34b22d35; @synthesize=_administrativeArea
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x34b22d45; S=0x34b22d55; @synthesize=_administrativeAreaCode
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x34b22e85; S=0x34b22e95; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *country;	// G=0x34b22ce5; S=0x34b22cf5; @synthesize=_country
@property(retain, nonatomic) NSString *countryCode;	// G=0x34b22d05; S=0x34b22d15; @synthesize=_countryCode
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x34b22ee5; S=0x34b22ef5; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x34b22e45; S=0x34b22e55; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x34b21031; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x34b2101d; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x34b20c69; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x34b20c81; 
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x34b20c39; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x34b20c51; 
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x34b20d41; 
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x34b20e3d; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x34b20cb1; 
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x34b20e55; 
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x34b20cc9; 
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x34b20d59; 
@property(readonly, assign, nonatomic) BOOL hasPremise;	// G=0x34b20f39; 
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x34b20cf9; 
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x34b20c99; 
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x34b20ce1; 
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x34b20d29; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x34b20d11; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x34b22ea5; S=0x34b22eb5; @synthesize=_inlandWater
@property(retain, nonatomic) NSString *locality;	// G=0x34b22d85; S=0x34b22d95; @synthesize=_locality
@property(retain, nonatomic) NSString *ocean;	// G=0x34b22ec5; S=0x34b22ed5; @synthesize=_ocean
@property(retain, nonatomic) NSString *postCode;	// G=0x34b22da5; S=0x34b22db5; @synthesize=_postCode
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x34b22e65; S=0x34b22e75; @synthesize=_postCodeExtension
@property(retain, nonatomic) NSString *premise;	// G=0x34b22f05; S=0x34b22f15; @synthesize=_premise
@property(retain, nonatomic) NSString *premises;	// G=0x34b22de5; S=0x34b22df5; @synthesize=_premises
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x34b22d65; S=0x34b22d75; @synthesize=_subAdministrativeArea
@property(retain, nonatomic) NSString *subLocality;	// G=0x34b22dc5; S=0x34b22dd5; @synthesize=_subLocality
@property(retain, nonatomic) NSMutableArray *subPremises;	// G=0x34b22f25; S=0x34b22f35; @synthesize=_subPremises
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x34b22e25; S=0x34b22e35; @synthesize=_subThoroughfare
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x34b22e05; S=0x34b22e15; @synthesize=_thoroughfare
- (void)addAreaOfInterest:(id)interest;	// 0x34b20d91
- (void)addDependentLocality:(id)locality;	// 0x34b20e8d
- (void)addGeoId:(long long)anId;	// 0x34b21055
- (void)addSubPremise:(id)premise;	// 0x34b20f71
// declared property getter: - (id)administrativeArea;	// 0x34b22d25
// declared property getter: - (id)administrativeAreaCode;	// 0x34b22d45
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x34b20e1d
// declared property getter: - (id)areaOfInterests;	// 0x34b22e85
- (unsigned)areaOfInterestsCount;	// 0x34b20dfd
- (void)clearAreaOfInterests;	// 0x34b20d71
- (void)clearDependentLocalitys;	// 0x34b20e6d
- (void)clearGeoIds;	// 0x34b21041
- (void)clearSubPremises;	// 0x34b20f51
- (void)copyTo:(id)to;	// 0x34b2211d
// declared property getter: - (id)country;	// 0x34b22ce5
// declared property getter: - (id)countryCode;	// 0x34b22d05
- (void)dealloc;	// 0x34b20a7d
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x34b20f19
// declared property getter: - (id)dependentLocalitys;	// 0x34b22ee5
- (unsigned)dependentLocalitysCount;	// 0x34b20ef9
- (id)description;	// 0x34b2112d
- (id)dictionaryRepresentation;	// 0x34b2119d
// declared property getter: - (id)fullThoroughfare;	// 0x34b22e45
- (long long)geoIdAtIndex:(unsigned)index;	// 0x34b2106d
// declared property getter: - (long long *)geoIds;	// 0x34b21031
// declared property getter: - (unsigned)geoIdsCount;	// 0x34b2101d
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x34b20c69
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x34b20c81
// declared property getter: - (BOOL)hasCountry;	// 0x34b20c39
// declared property getter: - (BOOL)hasCountryCode;	// 0x34b20c51
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x34b20d41
// declared property getter: - (BOOL)hasInlandWater;	// 0x34b20e3d
// declared property getter: - (BOOL)hasLocality;	// 0x34b20cb1
// declared property getter: - (BOOL)hasOcean;	// 0x34b20e55
// declared property getter: - (BOOL)hasPostCode;	// 0x34b20cc9
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x34b20d59
// declared property getter: - (BOOL)hasPremise;	// 0x34b20f39
// declared property getter: - (BOOL)hasPremises;	// 0x34b20cf9
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x34b20c99
// declared property getter: - (BOOL)hasSubLocality;	// 0x34b20ce1
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x34b20d29
// declared property getter: - (BOOL)hasThoroughfare;	// 0x34b20d11
- (unsigned)hash;	// 0x34b22ac9
// declared property getter: - (id)inlandWater;	// 0x34b22ea5
- (BOOL)isEqual:(id)equal;	// 0x34b226c1
// declared property getter: - (id)locality;	// 0x34b22d85
// declared property getter: - (id)ocean;	// 0x34b22ec5
// declared property getter: - (id)postCode;	// 0x34b22da5
// declared property getter: - (id)postCodeExtension;	// 0x34b22e65
// declared property getter: - (id)premise;	// 0x34b22f05
// declared property getter: - (id)premises;	// 0x34b22de5
- (BOOL)readFrom:(id)from;	// 0x34b21c09
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x34b22d35
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x34b22d55
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x34b22e95
// declared property setter: - (void)setCountry:(id)country;	// 0x34b22cf5
// declared property setter: - (void)setCountryCode:(id)code;	// 0x34b22d15
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x34b22ef5
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x34b22e55
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x34b21115
// declared property setter: - (void)setInlandWater:(id)water;	// 0x34b22eb5
// declared property setter: - (void)setLocality:(id)locality;	// 0x34b22d95
// declared property setter: - (void)setOcean:(id)ocean;	// 0x34b22ed5
// declared property setter: - (void)setPostCode:(id)code;	// 0x34b22db5
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x34b22e75
// declared property setter: - (void)setPremise:(id)premise;	// 0x34b22f15
// declared property setter: - (void)setPremises:(id)premises;	// 0x34b22df5
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x34b22d75
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x34b22dd5
// declared property setter: - (void)setSubPremises:(id)premises;	// 0x34b22f35
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x34b22e35
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x34b22e15
// declared property getter: - (id)subAdministrativeArea;	// 0x34b22d65
// declared property getter: - (id)subLocality;	// 0x34b22dc5
- (id)subPremiseAtIndex:(unsigned)index;	// 0x34b20ffd
// declared property getter: - (id)subPremises;	// 0x34b22f25
- (unsigned)subPremisesCount;	// 0x34b20fdd
// declared property getter: - (id)subThoroughfare;	// 0x34b22e25
// declared property getter: - (id)thoroughfare;	// 0x34b22e05
- (void)writeTo:(id)to;	// 0x34b21c15
@end
