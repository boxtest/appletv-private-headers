/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocation.h"

@class NSString;

@interface SAWeatherLocation : SALocation {
}
@property(copy, nonatomic) NSString *locationId;	// G=0x37965665; S=0x37965681; 
+ (id)location;	// 0x379655d5
+ (id)locationWithDictionary:(id)dictionary context:(id)context;	// 0x37965619
- (id)encodedClassName;	// 0x379655c9
- (id)groupIdentifier;	// 0x379655b9
// declared property getter: - (id)locationId;	// 0x37965665
// declared property setter: - (void)setLocationId:(id)anId;	// 0x37965681
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x379656d1
@end

