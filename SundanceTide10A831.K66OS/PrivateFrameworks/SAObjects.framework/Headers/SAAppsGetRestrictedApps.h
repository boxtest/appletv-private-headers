/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *appIds;	// G=0x305130c9; S=0x305130e5; 
+ (id)getRestrictedApps;	// 0x30513039
+ (id)getRestrictedAppsWithDictionary:(id)dictionary context:(id)context;	// 0x3051307d
// declared property getter: - (id)appIds;	// 0x305130c9
- (id)encodedClassName;	// 0x3051302d
- (id)groupIdentifier;	// 0x3051301d
- (BOOL)requiresResponse;	// 0x30513135
// declared property setter: - (void)setAppIds:(id)ids;	// 0x305130e5
@end

