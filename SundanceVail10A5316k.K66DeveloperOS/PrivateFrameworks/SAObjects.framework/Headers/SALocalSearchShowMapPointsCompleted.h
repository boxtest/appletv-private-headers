/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SALocalSearchShowMapPointsCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)showMapPointsCompleted;	// 0x32f568f9
+ (id)showMapPointsCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f5693d
- (id)encodedClassName;	// 0x32f568ed
- (id)groupIdentifier;	// 0x32f568dd
@end
