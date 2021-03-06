/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SADuration : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *unit;	// G=0x32f6c1e1; S=0x32f6c1fd; 
@property(copy, nonatomic) NSString *units;	// G=0x32f6c24d; S=0x32f6c269; 
@property(retain, nonatomic) NSNumber *value;	// G=0x32f6c2b9; S=0x32f6c2d5; 
+ (id)duration;	// 0x32f6c151
+ (id)durationWithDictionary:(id)dictionary context:(id)context;	// 0x32f6c195
- (id)encodedClassName;	// 0x32f6c145
- (id)groupIdentifier;	// 0x32f6c135
// declared property setter: - (void)setUnit:(id)unit;	// 0x32f6c1fd
// declared property setter: - (void)setUnits:(id)units;	// 0x32f6c269
// declared property setter: - (void)setValue:(id)value;	// 0x32f6c2d5
// declared property getter: - (id)unit;	// 0x32f6c1e1
// declared property getter: - (id)units;	// 0x32f6c24d
// declared property getter: - (id)value;	// 0x32f6c2b9
@end

