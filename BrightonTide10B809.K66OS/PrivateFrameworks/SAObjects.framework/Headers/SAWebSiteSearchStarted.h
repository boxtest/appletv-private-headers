/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAWebSiteSearchStarted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)siteSearchStarted;	// 0x353da061
+ (id)siteSearchStartedWithDictionary:(id)dictionary context:(id)context;	// 0x353da0a5
- (id)encodedClassName;	// 0x353da055
- (id)groupIdentifier;	// 0x353da045
@end
