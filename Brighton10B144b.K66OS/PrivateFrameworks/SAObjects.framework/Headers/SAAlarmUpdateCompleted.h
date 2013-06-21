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
@property(copy, nonatomic) NSURL *alarmId;	// G=0x353c493d; S=0x353c49b9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)updateCompleted;	// 0x353c48ad
+ (id)updateCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c48f1
// declared property getter: - (id)alarmId;	// 0x353c493d
- (id)encodedClassName;	// 0x353c48a1
- (id)groupIdentifier;	// 0x353c4891
// declared property setter: - (void)setAlarmId:(id)anId;	// 0x353c49b9
@end
