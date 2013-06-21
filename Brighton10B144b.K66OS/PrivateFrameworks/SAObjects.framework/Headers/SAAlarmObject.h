/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString, NSArray;

@interface SAAlarmObject : SADomainObject {
}
@property(copy, nonatomic) NSNumber *enabled;	// G=0x353c356d; S=0x353c3589; 
@property(copy, nonatomic) NSArray *frequency;	// G=0x353c35d9; S=0x353c35f5; 
@property(copy, nonatomic) NSNumber *hour;	// G=0x353c3645; S=0x353c3661; 
@property(copy, nonatomic) NSString *label;	// G=0x353c36b1; S=0x353c36cd; 
@property(copy, nonatomic) NSNumber *minute;	// G=0x353c371d; S=0x353c3739; 
@property(copy, nonatomic) NSNumber *relativeOffsetMinutes;	// G=0x353c3789; S=0x353c37a5; 
+ (id)object;	// 0x353c34dd
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x353c3521
// declared property getter: - (id)enabled;	// 0x353c356d
- (id)encodedClassName;	// 0x353c34d1
// declared property getter: - (id)frequency;	// 0x353c35d9
- (id)groupIdentifier;	// 0x353c34c1
// declared property getter: - (id)hour;	// 0x353c3645
// declared property getter: - (id)label;	// 0x353c36b1
// declared property getter: - (id)minute;	// 0x353c371d
// declared property getter: - (id)relativeOffsetMinutes;	// 0x353c3789
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x353c3589
// declared property setter: - (void)setFrequency:(id)frequency;	// 0x353c35f5
// declared property setter: - (void)setHour:(id)hour;	// 0x353c3661
// declared property setter: - (void)setLabel:(id)label;	// 0x353c36cd
// declared property setter: - (void)setMinute:(id)minute;	// 0x353c3739
// declared property setter: - (void)setRelativeOffsetMinutes:(id)minutes;	// 0x353c37a5
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353c37f5
@end
