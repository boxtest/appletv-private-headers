/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAClientBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// G=0x353ea145; S=0x353ea161; 
@property(copy, nonatomic) NSArray *callbacks;	// G=0x353ea1b1; S=0x353ea22d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)baseClientBoundCommand;	// 0x353ea0b5
+ (id)baseClientBoundCommandWithDictionary:(id)dictionary context:(id)context;	// 0x353ea0f9
// declared property getter: - (id)appId;	// 0x353ea145
// declared property getter: - (id)callbacks;	// 0x353ea1b1
- (id)encodedClassName;	// 0x353ea0a9
- (id)groupIdentifier;	// 0x353ea099
- (BOOL)requiresResponse;	// 0x353ea295
// declared property setter: - (void)setAppId:(id)anId;	// 0x353ea161
// declared property setter: - (void)setCallbacks:(id)callbacks;	// 0x353ea22d
@end

