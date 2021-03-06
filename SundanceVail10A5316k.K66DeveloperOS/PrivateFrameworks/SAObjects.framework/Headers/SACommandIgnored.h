/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SACommandIgnored : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandIgnored;	// 0x32f502a9
+ (id)commandIgnoredWithDictionary:(id)dictionary context:(id)context;	// 0x32f502ed
- (id)encodedClassName;	// 0x32f5029d
- (id)groupIdentifier;	// 0x32f5028d
- (BOOL)requiresResponse;	// 0x32f50339
@end

