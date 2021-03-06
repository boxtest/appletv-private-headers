/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(retain, nonatomic) SACalendarSource *aceCalendarSource;	// G=0x32535b49; S=0x32535b9d; 
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)defaultSourceGetCompleted;	// 0x32535a3d
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)aceCalendarSource;	// 0x32535acd
+ (id)defaultSourceGetCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32535a81
- (id)initWithAceCalendarSource:(id)aceCalendarSource;	// 0x32535b15
// declared property getter: - (id)aceCalendarSource;	// 0x32535b49
- (id)encodedClassName;	// 0x32535a31
- (id)groupIdentifier;	// 0x32535a21
// declared property setter: - (void)setAceCalendarSource:(id)source;	// 0x32535b9d
@end

