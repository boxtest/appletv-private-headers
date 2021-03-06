/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SADistance, NSString, NSNumber;

@interface SALocation : SADomainObject {
}
@property(copy, nonatomic) NSNumber *accuracy;	// G=0x3796a755; S=0x3796a771; 
@property(copy, nonatomic) NSString *city;	// G=0x3796a7c1; S=0x3796a7dd; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x3796a82d; S=0x3796a849; 
@property(copy, nonatomic) NSString *label;	// G=0x3796a899; S=0x3796a8b5; 
@property(copy, nonatomic) NSNumber *latitude;	// G=0x3796a905; S=0x3796a921; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x3796a971; S=0x3796a98d; 
@property(copy, nonatomic) NSString *postalCode;	// G=0x3796a9dd; S=0x3796a9f9; 
@property(copy, nonatomic) NSString *regionType;	// G=0x3796aa49; S=0x3796aa65; 
@property(retain, nonatomic) SADistance *relativeDistance;	// G=0x3796aab5; S=0x3796ab09; 
@property(copy, nonatomic) NSString *stateCode;	// G=0x3796ab45; S=0x3796ab61; 
@property(copy, nonatomic) NSString *street;	// G=0x3796abb1; S=0x3796abcd; 
@property(copy, nonatomic) NSString *timezoneId;	// G=0x3796ac1d; S=0x3796ac39; 
+ (id)location;	// 0x3796a6c5
+ (id)locationWithDictionary:(id)dictionary context:(id)context;	// 0x3796a709
// declared property getter: - (id)accuracy;	// 0x3796a755
// declared property getter: - (id)city;	// 0x3796a7c1
// declared property getter: - (id)countryCode;	// 0x3796a82d
- (id)encodedClassName;	// 0x3796a6b9
- (id)groupIdentifier;	// 0x3796a6a9
// declared property getter: - (id)label;	// 0x3796a899
// declared property getter: - (id)latitude;	// 0x3796a905
// declared property getter: - (id)longitude;	// 0x3796a971
// declared property getter: - (id)postalCode;	// 0x3796a9dd
// declared property getter: - (id)regionType;	// 0x3796aa49
// declared property getter: - (id)relativeDistance;	// 0x3796aab5
// declared property setter: - (void)setAccuracy:(id)accuracy;	// 0x3796a771
// declared property setter: - (void)setCity:(id)city;	// 0x3796a7dd
// declared property setter: - (void)setCountryCode:(id)code;	// 0x3796a849
// declared property setter: - (void)setLabel:(id)label;	// 0x3796a8b5
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x3796a921
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x3796a98d
// declared property setter: - (void)setPostalCode:(id)code;	// 0x3796a9f9
// declared property setter: - (void)setRegionType:(id)type;	// 0x3796aa65
// declared property setter: - (void)setRelativeDistance:(id)distance;	// 0x3796ab09
// declared property setter: - (void)setStateCode:(id)code;	// 0x3796ab61
// declared property setter: - (void)setStreet:(id)street;	// 0x3796abcd
// declared property setter: - (void)setTimezoneId:(id)anId;	// 0x3796ac39
// declared property getter: - (id)stateCode;	// 0x3796ab45
// declared property getter: - (id)street;	// 0x3796abb1
// declared property getter: - (id)timezoneId;	// 0x3796ac1d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3796ac89
@end

