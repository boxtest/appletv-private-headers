/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *key;	// G=0x353c6c7d; S=0x353c6c99; 
@property(copy, nonatomic) NSString *postGen;	// G=0x353c6ce9; S=0x353c6d05; 
@property(copy, nonatomic) NSString *preGen;	// G=0x353c6d55; S=0x353c6d71; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *toAdd;	// G=0x353c6dc1; S=0x353c6e3d; 
@property(copy, nonatomic) NSArray *toRemove;	// G=0x353c6ea5; S=0x353c6f21; 
@property(copy, nonatomic) NSString *validity;	// G=0x353c6f89; S=0x353c6fa5; 
+ (id)chunk;	// 0x353c6bed
+ (id)chunkWithDictionary:(id)dictionary context:(id)context;	// 0x353c6c31
- (id)encodedClassName;	// 0x353c6be1
- (id)groupIdentifier;	// 0x353c6bd1
// declared property getter: - (id)key;	// 0x353c6c7d
// declared property getter: - (id)postGen;	// 0x353c6ce9
// declared property getter: - (id)preGen;	// 0x353c6d55
// declared property setter: - (void)setKey:(id)key;	// 0x353c6c99
// declared property setter: - (void)setPostGen:(id)gen;	// 0x353c6d05
// declared property setter: - (void)setPreGen:(id)gen;	// 0x353c6d71
// declared property setter: - (void)setToAdd:(id)add;	// 0x353c6e3d
// declared property setter: - (void)setToRemove:(id)remove;	// 0x353c6f21
// declared property setter: - (void)setValidity:(id)validity;	// 0x353c6fa5
// declared property getter: - (id)toAdd;	// 0x353c6dc1
// declared property getter: - (id)toRemove;	// 0x353c6ea5
// declared property getter: - (id)validity;	// 0x353c6f89
@end
