/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *mediaItemProperty;	// G=0x353fab79; S=0x353fab95; 
@property(copy, nonatomic) NSString *operation;	// G=0x353fabe5; S=0x353fac01; 
@property(copy, nonatomic) NSString *value;	// G=0x353fac51; S=0x353fac6d; 
+ (id)setQueueQueueFilter;	// 0x353faae9
+ (id)setQueueQueueFilterWithDictionary:(id)dictionary context:(id)context;	// 0x353fab2d
- (id)encodedClassName;	// 0x353faadd
- (id)groupIdentifier;	// 0x353faacd
// declared property getter: - (id)mediaItemProperty;	// 0x353fab79
// declared property getter: - (id)operation;	// 0x353fabe5
// declared property setter: - (void)setMediaItemProperty:(id)property;	// 0x353fab95
// declared property setter: - (void)setOperation:(id)operation;	// 0x353fac01
// declared property setter: - (void)setValue:(id)value;	// 0x353fac6d
// declared property getter: - (id)value;	// 0x353fac51
@end

