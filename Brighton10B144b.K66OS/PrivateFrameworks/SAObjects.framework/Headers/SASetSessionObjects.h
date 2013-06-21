/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SASetSessionObjects : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *objects;	// G=0x353ffb7d; S=0x353ffbe5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)setSessionObjects;	// 0x353ffaed
+ (id)setSessionObjectsWithDictionary:(id)dictionary context:(id)context;	// 0x353ffb31
- (id)encodedClassName;	// 0x353ffae1
- (id)groupIdentifier;	// 0x353ffad1
// declared property getter: - (id)objects;	// 0x353ffb7d
// declared property setter: - (void)setObjects:(id)objects;	// 0x353ffbe5
@end
