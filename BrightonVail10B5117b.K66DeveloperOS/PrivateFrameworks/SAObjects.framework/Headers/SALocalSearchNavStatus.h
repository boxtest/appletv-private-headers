/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SALocalSearchNavStatus : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *statusValue;	// G=0x355dae05; S=0x355dae21; 
+ (id)navStatus;	// 0x355dad75
+ (id)navStatusWithDictionary:(id)dictionary context:(id)context;	// 0x355dadb9
- (id)encodedClassName;	// 0x355dad69
- (id)groupIdentifier;	// 0x355dad59
// declared property setter: - (void)setStatusValue:(id)value;	// 0x355dae21
// declared property getter: - (id)statusValue;	// 0x355dae05
@end
