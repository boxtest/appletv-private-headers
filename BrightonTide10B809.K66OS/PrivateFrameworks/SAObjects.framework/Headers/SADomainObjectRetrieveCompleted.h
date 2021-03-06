/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString, NSArray;

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *objects;	// G=0x353e126d; S=0x353e12e9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectRetrieveCompleted;	// 0x353e11dd
+ (id)domainObjectRetrieveCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353e1221
- (id)encodedClassName;	// 0x353e11d1
- (id)groupIdentifier;	// 0x353e11c1
// declared property getter: - (id)objects;	// 0x353e126d
// declared property setter: - (void)setObjects:(id)objects;	// 0x353e12e9
@end

