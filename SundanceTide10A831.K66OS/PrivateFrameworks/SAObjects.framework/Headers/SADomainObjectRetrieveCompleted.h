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
@property(copy, nonatomic) NSArray *objects;	// G=0x304f1c59; S=0x304f1cd5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectRetrieveCompleted;	// 0x304f1bc9
+ (id)domainObjectRetrieveCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304f1c0d
- (id)encodedClassName;	// 0x304f1bbd
- (id)groupIdentifier;	// 0x304f1bad
// declared property getter: - (id)objects;	// 0x304f1c59
// declared property setter: - (void)setObjects:(id)objects;	// 0x304f1cd5
@end
