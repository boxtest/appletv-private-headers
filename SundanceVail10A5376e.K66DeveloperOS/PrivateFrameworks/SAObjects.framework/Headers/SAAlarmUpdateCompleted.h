/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAAlarmUpdateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *alarmId;	// G=0x3422aa61; S=0x3422aadd; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)updateCompleted;	// 0x3422a9d1
+ (id)updateCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3422aa15
// declared property getter: - (id)alarmId;	// 0x3422aa61
- (id)encodedClassName;	// 0x3422a9c5
- (id)groupIdentifier;	// 0x3422a9b5
// declared property setter: - (void)setAlarmId:(id)anId;	// 0x3422aadd
@end

