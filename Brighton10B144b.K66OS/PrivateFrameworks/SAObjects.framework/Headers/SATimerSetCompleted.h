/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SATimerSetCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)setCompleted;	// 0x353cdb65
+ (id)setCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353cdba9
- (id)encodedClassName;	// 0x353cdb59
- (id)groupIdentifier;	// 0x353cdb49
@end

