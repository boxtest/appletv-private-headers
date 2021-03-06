/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber;

@interface SAEntryPoint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *latitude;	// G=0x326eeea5; S=0x326eeec1; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x326eef11; S=0x326eef2d; 
+ (id)entryPoint;	// 0x326eee15
+ (id)entryPointWithDictionary:(id)dictionary context:(id)context;	// 0x326eee59
- (id)encodedClassName;	// 0x326eee09
- (id)groupIdentifier;	// 0x326eedf9
// declared property getter: - (id)latitude;	// 0x326eeea5
// declared property getter: - (id)longitude;	// 0x326eef11
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x326eeec1
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x326eef2d
@end

