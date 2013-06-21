/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *description;	// G=0x353f4231; S=0x353f424d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x353f429d; S=0x353f4319; 
@property(copy, nonatomic) NSNumber *selected;	// G=0x353f4381; S=0x353f439d; 
+ (id)metadataGroup;	// 0x353f41a1
+ (id)metadataGroupWithDictionary:(id)dictionary context:(id)context;	// 0x353f41e5
// declared property getter: - (id)description;	// 0x353f4231
- (id)encodedClassName;	// 0x353f4195
- (id)groupIdentifier;	// 0x353f4185
// declared property getter: - (id)metadata;	// 0x353f429d
// declared property getter: - (id)selected;	// 0x353f4381
// declared property setter: - (void)setDescription:(id)description;	// 0x353f424d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x353f4319
// declared property setter: - (void)setSelected:(id)selected;	// 0x353f439d
@end
