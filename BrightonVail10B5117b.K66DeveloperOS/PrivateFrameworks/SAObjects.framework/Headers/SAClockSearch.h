/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSNumber;

@interface SAClockSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *alCityId;	// G=0x355a6d51; S=0x355a6d6d; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x355a6dbd; S=0x355a6dd9; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x355a6e29; S=0x355a6ea5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x355a6c75; S=0x355a6cf1; 
@property(copy, nonatomic) NSString *unlocalizedCityName;	// G=0x355a6f05; S=0x355a6f21; 
@property(copy, nonatomic) NSString *unlocalizedCountryName;	// G=0x355a6f71; S=0x355a6f8d; 
+ (id)search;	// 0x355a6be5
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x355a6c29
// declared property getter: - (id)alCityId;	// 0x355a6d51
// declared property getter: - (id)countryCode;	// 0x355a6dbd
- (id)encodedClassName;	// 0x355a6bd9
- (id)groupIdentifier;	// 0x355a6bc9
// declared property getter: - (id)identifier;	// 0x355a6e29
- (BOOL)requiresResponse;	// 0x355a6fdd
// declared property setter: - (void)setAlCityId:(id)anId;	// 0x355a6d6d
// declared property setter: - (void)setCountryCode:(id)code;	// 0x355a6dd9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x355a6ea5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x355a6cf1
// declared property setter: - (void)setUnlocalizedCityName:(id)name;	// 0x355a6f21
// declared property setter: - (void)setUnlocalizedCountryName:(id)name;	// 0x355a6f8d
// declared property getter: - (id)targetAppId;	// 0x355a6c75
// declared property getter: - (id)unlocalizedCityName;	// 0x355a6f05
// declared property getter: - (id)unlocalizedCountryName;	// 0x355a6f71
@end

