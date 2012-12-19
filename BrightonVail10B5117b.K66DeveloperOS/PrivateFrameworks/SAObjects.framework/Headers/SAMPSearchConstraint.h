/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *query;	// G=0x355b80ad; S=0x355b80c9; 
@property(copy, nonatomic) NSArray *searchProperties;	// G=0x355b8119; S=0x355b8135; 
+ (id)searchConstraint;	// 0x355b801d
+ (id)searchConstraintWithDictionary:(id)dictionary context:(id)context;	// 0x355b8061
- (id)encodedClassName;	// 0x355b8011
- (id)groupIdentifier;	// 0x355b8001
// declared property getter: - (id)query;	// 0x355b80ad
// declared property getter: - (id)searchProperties;	// 0x355b8119
// declared property setter: - (void)setQuery:(id)query;	// 0x355b80c9
// declared property setter: - (void)setSearchProperties:(id)properties;	// 0x355b8135
@end
