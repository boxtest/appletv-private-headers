/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, CLRegion, NSString, CLPlacemarkInternal, CLLocation, NSDictionary;

@interface CLPlacemark : NSObject <NSCopying, NSCoding> {
@private
	CLPlacemarkInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *ISOcountryCode;	// G=0x302cacf9; 
@property(readonly, assign, nonatomic) NSDictionary *addressDictionary;	// G=0x302cab19; 
@property(readonly, assign, nonatomic) NSString *administrativeArea;	// G=0x302cac51; 
@property(readonly, assign, nonatomic) NSArray *areasOfInterest;	// G=0x302cadd9; 
@property(readonly, assign, nonatomic) NSString *country;	// G=0x302cad31; 
@property(readonly, assign, nonatomic) NSString *inlandWater;	// G=0x302cadf9; 
@property(readonly, assign, nonatomic) NSString *locality;	// G=0x302cabe1; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x302caad9; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x302cab39; 
@property(readonly, assign, nonatomic) NSString *ocean;	// G=0x302cae31; 
@property(readonly, assign, nonatomic) NSString *postalCode;	// G=0x302cacc1; 
@property(readonly, assign, nonatomic) CLRegion *region;	// G=0x302caaf9; 
@property(readonly, assign, nonatomic) NSString *subAdministrativeArea;	// G=0x302cac89; 
@property(readonly, assign, nonatomic) NSString *subLocality;	// G=0x302cac19; 
@property(readonly, assign, nonatomic) NSString *subThoroughfare;	// G=0x302caba9; 
@property(readonly, assign, nonatomic) NSString *thoroughfare;	// G=0x302cab71; 
- (id)initWithCoder:(id)coder;	// 0x302ca965
- (id)initWithLocation:(id)location addressDictionary:(id)dictionary region:(id)region areasOfInterest:(id)interest;	// 0x302ca69d
- (id)initWithPlacemark:(id)placemark;	// 0x302ca78d
// declared property getter: - (id)ISOcountryCode;	// 0x302cacf9
// declared property getter: - (id)addressDictionary;	// 0x302cab19
// declared property getter: - (id)administrativeArea;	// 0x302cac51
// declared property getter: - (id)areasOfInterest;	// 0x302cadd9
- (id)copyWithZone:(NSZone *)zone;	// 0x302caa95
// declared property getter: - (id)country;	// 0x302cad31
- (void)dealloc;	// 0x302ca8b9
- (id)description;	// 0x302cae69
- (void)encodeWithCoder:(id)coder;	// 0x302ca9f1
- (id)formattedAddressLines;	// 0x302cada1
- (id)fullThoroughfare;	// 0x302cad69
// declared property getter: - (id)inlandWater;	// 0x302cadf9
// declared property getter: - (id)locality;	// 0x302cabe1
// declared property getter: - (id)location;	// 0x302caad9
// declared property getter: - (id)name;	// 0x302cab39
// declared property getter: - (id)ocean;	// 0x302cae31
// declared property getter: - (id)postalCode;	// 0x302cacc1
// declared property getter: - (id)region;	// 0x302caaf9
// declared property getter: - (id)subAdministrativeArea;	// 0x302cac89
// declared property getter: - (id)subLocality;	// 0x302cac19
// declared property getter: - (id)subThoroughfare;	// 0x302caba9
// declared property getter: - (id)thoroughfare;	// 0x302cab71
@end
