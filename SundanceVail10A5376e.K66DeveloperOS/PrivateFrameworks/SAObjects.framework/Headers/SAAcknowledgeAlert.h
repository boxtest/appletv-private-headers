/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x3424cafd; S=0x3424cb51; 
+ (id)acknowledgeAlert;	// 0x3424ca6d
+ (id)acknowledgeAlertWithDictionary:(id)dictionary context:(id)context;	// 0x3424cab1
- (id)encodedClassName;	// 0x3424ca61
- (id)groupIdentifier;	// 0x3424ca51
// declared property getter: - (id)object;	// 0x3424cafd
- (BOOL)requiresResponse;	// 0x3424cb8d
// declared property setter: - (void)setObject:(id)object;	// 0x3424cb51
@end

