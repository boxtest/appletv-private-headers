/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject {
}
@property(copy, nonatomic) NSString *groupName;	// G=0x353d00e1; S=0x353d00fd; 
@property(retain, nonatomic) SASource *groupSource;	// G=0x353d014d; S=0x353d01a1; 
+ (id)contactGroup;	// 0x353d0051
+ (id)contactGroupWithDictionary:(id)dictionary context:(id)context;	// 0x353d0095
- (id)encodedClassName;	// 0x353d0045
- (id)groupIdentifier;	// 0x353d0035
// declared property getter: - (id)groupName;	// 0x353d00e1
// declared property getter: - (id)groupSource;	// 0x353d014d
// declared property setter: - (void)setGroupName:(id)name;	// 0x353d00fd
// declared property setter: - (void)setGroupSource:(id)source;	// 0x353d01a1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353d01dd
@end

