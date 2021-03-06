/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *requestId;	// G=0x304f54ed; S=0x304f5509; 
+ (id)rollbackRequest;	// 0x304f545d
+ (id)rollbackRequestWithDictionary:(id)dictionary context:(id)context;	// 0x304f54a1
- (id)encodedClassName;	// 0x304f5451
- (id)groupIdentifier;	// 0x304f5441
// declared property getter: - (id)requestId;	// 0x304f54ed
// declared property setter: - (void)setRequestId:(id)anId;	// 0x304f5509
@end

