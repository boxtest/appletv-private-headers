/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAWeatherShowWeatherLocations : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x37945425; S=0x379454a1; 
+ (id)showWeatherLocations;	// 0x37945395
+ (id)showWeatherLocationsWithDictionary:(id)dictionary context:(id)context;	// 0x379453d9
- (id)encodedClassName;	// 0x37945389
- (id)groupIdentifier;	// 0x37945379
- (BOOL)requiresResponse;	// 0x37945501
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x379454a1
// declared property getter: - (id)targetAppId;	// 0x37945425
@end

