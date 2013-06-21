/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *launchId;	// G=0x353ee105; S=0x353ee121; 
+ (id)launchApp;	// 0x353ee075
+ (id)launchAppWithDictionary:(id)dictionary context:(id)context;	// 0x353ee0b9
- (id)encodedClassName;	// 0x353ee069
- (id)groupIdentifier;	// 0x353ee059
// declared property getter: - (id)launchId;	// 0x353ee105
- (BOOL)requiresResponse;	// 0x353ee171
// declared property setter: - (void)setLaunchId:(id)anId;	// 0x353ee121
@end
