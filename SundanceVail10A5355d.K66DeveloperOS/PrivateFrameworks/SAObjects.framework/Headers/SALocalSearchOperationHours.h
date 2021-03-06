/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDictionary;

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDictionary *operationPeriods;	// G=0x36641475; S=0x36641549; 
+ (id)operationHours;	// 0x366413e5
+ (id)operationHoursWithDictionary:(id)dictionary context:(id)context;	// 0x36641429
- (id)encodedClassName;	// 0x366413d9
- (id)groupIdentifier;	// 0x366413c9
// declared property getter: - (id)operationPeriods;	// 0x36641475
// declared property setter: - (void)setOperationPeriods:(id)periods;	// 0x36641549
@end

