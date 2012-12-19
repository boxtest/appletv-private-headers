/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, SADistance, NSString, NSArray;

@interface SALocation : SADomainObject {
}
@property(copy, nonatomic) NSNumber *accuracy;	// G=0x355bb375; S=0x355bb391; 
@property(copy, nonatomic) NSString *city;	// G=0x355bb3e1; S=0x355bb3fd; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x355bb44d; S=0x355bb469; 
@property(copy, nonatomic) NSArray *entryPoints;	// G=0x355bb4b9; S=0x355bb535; 
@property(copy, nonatomic) NSString *label;	// G=0x355bb59d; S=0x355bb5b9; 
@property(copy, nonatomic) NSNumber *latitude;	// G=0x355bb609; S=0x355bb625; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x355bb675; S=0x355bb691; 
@property(copy, nonatomic) NSString *postalCode;	// G=0x355bb6e1; S=0x355bb6fd; 
@property(copy, nonatomic) NSString *regionType;	// G=0x355bb74d; S=0x355bb769; 
@property(retain, nonatomic) SADistance *relativeDistance;	// G=0x355bb7b9; S=0x355bb80d; 
@property(copy, nonatomic) NSString *stateCode;	// G=0x355bb849; S=0x355bb865; 
@property(copy, nonatomic) NSString *street;	// G=0x355bb8b5; S=0x355bb8d1; 
@property(copy, nonatomic) NSString *subThoroughfare;	// G=0x355bb921; S=0x355bb93d; 
@property(copy, nonatomic) NSString *thoroughfare;	// G=0x355bb98d; S=0x355bb9a9; 
@property(copy, nonatomic) NSString *timezoneId;	// G=0x355bb9f9; S=0x355bba15; 
+ (id)location;	// 0x355bb2e5
+ (id)locationWithDictionary:(id)dictionary context:(id)context;	// 0x355bb329
// declared property getter: - (id)accuracy;	// 0x355bb375
// declared property getter: - (id)city;	// 0x355bb3e1
// declared property getter: - (id)countryCode;	// 0x355bb44d
- (id)encodedClassName;	// 0x355bb2d9
// declared property getter: - (id)entryPoints;	// 0x355bb4b9
- (id)groupIdentifier;	// 0x355bb2c9
// declared property getter: - (id)label;	// 0x355bb59d
// declared property getter: - (id)latitude;	// 0x355bb609
// declared property getter: - (id)longitude;	// 0x355bb675
// declared property getter: - (id)postalCode;	// 0x355bb6e1
// declared property getter: - (id)regionType;	// 0x355bb74d
// declared property getter: - (id)relativeDistance;	// 0x355bb7b9
// declared property setter: - (void)setAccuracy:(id)accuracy;	// 0x355bb391
// declared property setter: - (void)setCity:(id)city;	// 0x355bb3fd
// declared property setter: - (void)setCountryCode:(id)code;	// 0x355bb469
// declared property setter: - (void)setEntryPoints:(id)points;	// 0x355bb535
// declared property setter: - (void)setLabel:(id)label;	// 0x355bb5b9
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x355bb625
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x355bb691
// declared property setter: - (void)setPostalCode:(id)code;	// 0x355bb6fd
// declared property setter: - (void)setRegionType:(id)type;	// 0x355bb769
// declared property setter: - (void)setRelativeDistance:(id)distance;	// 0x355bb80d
// declared property setter: - (void)setStateCode:(id)code;	// 0x355bb865
// declared property setter: - (void)setStreet:(id)street;	// 0x355bb8d1
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x355bb93d
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x355bb9a9
// declared property setter: - (void)setTimezoneId:(id)anId;	// 0x355bba15
// declared property getter: - (id)stateCode;	// 0x355bb849
// declared property getter: - (id)street;	// 0x355bb8b5
// declared property getter: - (id)subThoroughfare;	// 0x355bb921
// declared property getter: - (id)thoroughfare;	// 0x355bb98d
// declared property getter: - (id)timezoneId;	// 0x355bb9f9
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355bba65
@end
