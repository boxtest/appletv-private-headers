/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x353e0881; S=0x353e08d5; 
+ (id)domainObjectCommit;	// 0x353e07f1
+ (id)domainObjectCommitWithDictionary:(id)dictionary context:(id)context;	// 0x353e0835
- (id)encodedClassName;	// 0x353e07e5
- (id)groupIdentifier;	// 0x353e07d5
// declared property getter: - (id)identifier;	// 0x353e0881
- (BOOL)requiresResponse;	// 0x353e0911
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353e08d5
@end
