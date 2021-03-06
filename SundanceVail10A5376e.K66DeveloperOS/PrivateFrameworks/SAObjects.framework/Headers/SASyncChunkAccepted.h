/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SASyncAnchor *current;	// G=0x3424dd89; S=0x3424dddd; 
+ (id)chunkAccepted;	// 0x3424dcf9
+ (id)chunkAcceptedWithDictionary:(id)dictionary context:(id)context;	// 0x3424dd3d
// declared property getter: - (id)current;	// 0x3424dd89
- (id)encodedClassName;	// 0x3424dced
- (id)groupIdentifier;	// 0x3424dcdd
- (BOOL)requiresResponse;	// 0x3424de19
// declared property setter: - (void)setCurrent:(id)current;	// 0x3424dddd
@end

