/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SALocalSearchProtobufAttribute : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *name;	// G=0x34265591; S=0x342655ad; 
@property(copy, nonatomic) NSString *value;	// G=0x342655fd; S=0x34265619; 
+ (id)protobufAttribute;	// 0x34265501
+ (id)protobufAttributeWithDictionary:(id)dictionary context:(id)context;	// 0x34265545
- (id)encodedClassName;	// 0x342654f5
- (id)groupIdentifier;	// 0x342654e5
// declared property getter: - (id)name;	// 0x34265591
// declared property setter: - (void)setName:(id)name;	// 0x342655ad
// declared property setter: - (void)setValue:(id)value;	// 0x34265619
// declared property getter: - (id)value;	// 0x342655fd
@end

