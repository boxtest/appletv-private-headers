/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int count;	// G=0x326c4c9d; S=0x326c4d0d; 
@property(copy, nonatomic) NSString *description;	// G=0x326c4d51; S=0x326c4d6d; 
@property(assign, nonatomic) double maxValue;	// G=0x326c4dc1; S=0x326c4e41; 
@property(copy, nonatomic) NSString *providerId;	// G=0x326c4e89; S=0x326c4ea5; 
@property(assign, nonatomic) double value;	// G=0x326c4ef9; S=0x326c4f79; 
+ (id)rating;	// 0x326c4c0d
+ (id)ratingWithDictionary:(id)dictionary context:(id)context;	// 0x326c4c51
// declared property getter: - (int)count;	// 0x326c4c9d
// declared property getter: - (id)description;	// 0x326c4d51
- (id)encodedClassName;	// 0x326c4c01
- (id)groupIdentifier;	// 0x326c4bf1
// declared property getter: - (double)maxValue;	// 0x326c4dc1
// declared property getter: - (id)providerId;	// 0x326c4e89
// declared property setter: - (void)setCount:(int)count;	// 0x326c4d0d
// declared property setter: - (void)setDescription:(id)description;	// 0x326c4d6d
// declared property setter: - (void)setMaxValue:(double)value;	// 0x326c4e41
// declared property setter: - (void)setProviderId:(id)anId;	// 0x326c4ea5
// declared property setter: - (void)setValue:(double)value;	// 0x326c4f79
// declared property getter: - (double)value;	// 0x326c4ef9
@end

