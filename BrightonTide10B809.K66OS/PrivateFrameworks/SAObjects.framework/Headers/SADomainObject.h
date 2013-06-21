/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceIdentifiable.h"
#import "AceObject.h"

@class NSURL;

@interface SADomainObject : AceObject <SAAceIdentifiable> {
}
@property(copy, nonatomic) NSURL *identifier;	// G=0x353e0489; S=0x353e0505; @dynamic
+ (id)domainObject;	// 0x353e03f9
+ (id)domainObjectWithDictionary:(id)dictionary context:(id)context;	// 0x353e043d
- (id)encodedClassName;	// 0x353e03ed
- (id)groupIdentifier;	// 0x353e03dd
// declared property getter: - (id)identifier;	// 0x353e0489
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353e0505
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353e0565
@end
