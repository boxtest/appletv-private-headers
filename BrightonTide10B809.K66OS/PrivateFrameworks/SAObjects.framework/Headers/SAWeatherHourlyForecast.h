/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAWeatherForecast.h"

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast {
}
@property(copy, nonatomic) NSNumber *temperature;	// G=0x353dccc5; S=0x353dcce1; 
+ (id)hourlyForecast;	// 0x353dcc35
+ (id)hourlyForecastWithDictionary:(id)dictionary context:(id)context;	// 0x353dcc79
- (id)encodedClassName;	// 0x353dcc29
- (id)groupIdentifier;	// 0x353dcc19
// declared property setter: - (void)setTemperature:(id)temperature;	// 0x353dcce1
// declared property getter: - (id)temperature;	// 0x353dccc5
@end
