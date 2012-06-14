/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAPhoneSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *phoneLogIds;	// G=0x32f31809; S=0x32f318a9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)searchCompleted;	// 0x32f31779
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f317bd
- (id)encodedClassName;	// 0x32f3176d
- (id)groupIdentifier;	// 0x32f3175d
// declared property getter: - (id)phoneLogIds;	// 0x32f31809
// declared property setter: - (void)setPhoneLogIds:(id)ids;	// 0x32f318a9
@end
