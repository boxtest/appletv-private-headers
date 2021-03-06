/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString, NSArray;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *description;	// G=0x32f65371; S=0x32f6538d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x32f653dd; S=0x32f65459; 
@property(retain, nonatomic) NSNumber *selected;	// G=0x32f654c1; S=0x32f654dd; 
+ (id)metadataGroup;	// 0x32f652e1
+ (id)metadataGroupWithDictionary:(id)dictionary context:(id)context;	// 0x32f65325
// declared property getter: - (id)description;	// 0x32f65371
- (id)encodedClassName;	// 0x32f652d5
- (id)groupIdentifier;	// 0x32f652c5
// declared property getter: - (id)metadata;	// 0x32f653dd
// declared property getter: - (id)selected;	// 0x32f654c1
// declared property setter: - (void)setDescription:(id)description;	// 0x32f6538d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x32f65459
// declared property setter: - (void)setSelected:(id)selected;	// 0x32f654dd
@end

