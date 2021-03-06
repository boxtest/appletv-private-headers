/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *generation;	// G=0x3422abe9; S=0x3422ac05; 
@property(copy, nonatomic) NSString *key;	// G=0x3422ac55; S=0x3422ac71; 
@property(copy, nonatomic) NSString *validity;	// G=0x3422acc1; S=0x3422acdd; 
@property(copy, nonatomic) NSString *value;	// G=0x3422ad2d; S=0x3422ad49; 
+ (id)anchor;	// 0x3422ab59
+ (id)anchorWithDictionary:(id)dictionary context:(id)context;	// 0x3422ab9d
- (id)encodedClassName;	// 0x3422ab4d
// declared property getter: - (id)generation;	// 0x3422abe9
- (id)groupIdentifier;	// 0x3422ab3d
// declared property getter: - (id)key;	// 0x3422ac55
// declared property setter: - (void)setGeneration:(id)generation;	// 0x3422ac05
// declared property setter: - (void)setKey:(id)key;	// 0x3422ac71
// declared property setter: - (void)setValidity:(id)validity;	// 0x3422acdd
// declared property setter: - (void)setValue:(id)value;	// 0x3422ad49
// declared property getter: - (id)validity;	// 0x3422acc1
// declared property getter: - (id)value;	// 0x3422ad2d
@end

