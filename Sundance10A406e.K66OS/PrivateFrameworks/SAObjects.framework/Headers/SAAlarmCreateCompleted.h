/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *alarmId;	// G=0x325129a9; S=0x32512a25; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)createCompleted;	// 0x32512919
+ (id)createCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3251295d
// declared property getter: - (id)alarmId;	// 0x325129a9
- (id)encodedClassName;	// 0x3251290d
- (id)groupIdentifier;	// 0x325128fd
// declared property setter: - (void)setAlarmId:(id)anId;	// 0x32512a25
@end

