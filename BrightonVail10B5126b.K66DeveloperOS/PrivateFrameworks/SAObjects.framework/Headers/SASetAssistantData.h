/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSNumber, NSString, NSArray;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSArray *abSources;	// G=0x353e8581; S=0x353e85fd; 
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *anchor;	// G=0x353e8665; S=0x353e8681; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x353e86d1; S=0x353e8749; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x353e878d; S=0x353e87a9; 
@property(copy, nonatomic) NSNumber *debugFlags;	// G=0x353e87f9; S=0x353e8815; 
@property(copy, nonatomic) NSArray *deviceCapabilities;	// G=0x353e8865; S=0x353e8881; 
@property(copy, nonatomic) NSString *deviceVersion;	// G=0x353e88d1; S=0x353e88ed; 
@property(copy, nonatomic) NSString *firstName;	// G=0x353e893d; S=0x353e8959; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x353e89a9; S=0x353e8a21; 
@property(copy, nonatomic) NSString *lastName;	// G=0x353e8a65; S=0x353e8a81; 
@property(copy, nonatomic) NSArray *meCards;	// G=0x353e8ad1; S=0x353e8b4d; 
@property(copy, nonatomic) NSString *osVersion;	// G=0x353e8bb5; S=0x353e8bd1; 
@property(copy, nonatomic) NSArray *parentalRestrictions;	// G=0x353e8c21; S=0x353e8c3d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *region;	// G=0x353e8c8d; S=0x353e8ca9; 
@property(copy, nonatomic) NSNumber *storefront;	// G=0x353e8cf9; S=0x353e8d15; 
@property(copy, nonatomic) NSString *temperatureUnit;	// G=0x353e8d65; S=0x353e8d81; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353e8dd1; S=0x353e8ded; 
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;	// G=0x353e8e3d; S=0x353e8e59; 
@property(copy, nonatomic) NSNumber *uiScale;	// G=0x353e8ea9; S=0x353e8ec5; 
+ (id)setAssistantData;	// 0x353e84f1
+ (id)setAssistantDataWithDictionary:(id)dictionary context:(id)context;	// 0x353e8535
// declared property getter: - (id)abSources;	// 0x353e8581
// declared property getter: - (id)anchor;	// 0x353e8665
// declared property getter: - (BOOL)censorSpeech;	// 0x353e86d1
// declared property getter: - (id)countryCode;	// 0x353e878d
// declared property getter: - (id)debugFlags;	// 0x353e87f9
// declared property getter: - (id)deviceCapabilities;	// 0x353e8865
// declared property getter: - (id)deviceVersion;	// 0x353e88d1
- (id)encodedClassName;	// 0x353e84e5
// declared property getter: - (id)firstName;	// 0x353e893d
- (id)groupIdentifier;	// 0x353e84d5
// declared property getter: - (BOOL)handsFree;	// 0x353e89a9
// declared property getter: - (id)lastName;	// 0x353e8a65
// declared property getter: - (id)meCards;	// 0x353e8ad1
// declared property getter: - (id)osVersion;	// 0x353e8bb5
// declared property getter: - (id)parentalRestrictions;	// 0x353e8c21
// declared property getter: - (id)region;	// 0x353e8c8d
// declared property setter: - (void)setAbSources:(id)sources;	// 0x353e85fd
// declared property setter: - (void)setAnchor:(id)anchor;	// 0x353e8681
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x353e8749
// declared property setter: - (void)setCountryCode:(id)code;	// 0x353e87a9
// declared property setter: - (void)setDebugFlags:(id)flags;	// 0x353e8815
// declared property setter: - (void)setDeviceCapabilities:(id)capabilities;	// 0x353e8881
// declared property setter: - (void)setDeviceVersion:(id)version;	// 0x353e88ed
// declared property setter: - (void)setFirstName:(id)name;	// 0x353e8959
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x353e8a21
// declared property setter: - (void)setLastName:(id)name;	// 0x353e8a81
// declared property setter: - (void)setMeCards:(id)cards;	// 0x353e8b4d
// declared property setter: - (void)setOsVersion:(id)version;	// 0x353e8bd1
// declared property setter: - (void)setParentalRestrictions:(id)restrictions;	// 0x353e8c3d
// declared property setter: - (void)setRegion:(id)region;	// 0x353e8ca9
// declared property setter: - (void)setStorefront:(id)storefront;	// 0x353e8d15
// declared property setter: - (void)setTemperatureUnit:(id)unit;	// 0x353e8d81
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353e8ded
// declared property setter: - (void)setTwentyFourHourTimeDisplay:(id)display;	// 0x353e8e59
// declared property setter: - (void)setUiScale:(id)scale;	// 0x353e8ec5
// declared property getter: - (id)storefront;	// 0x353e8cf9
// declared property getter: - (id)temperatureUnit;	// 0x353e8d65
// declared property getter: - (id)timeZoneId;	// 0x353e8dd1
// declared property getter: - (id)twentyFourHourTimeDisplay;	// 0x353e8e3d
// declared property getter: - (id)uiScale;	// 0x353e8ea9
@end

