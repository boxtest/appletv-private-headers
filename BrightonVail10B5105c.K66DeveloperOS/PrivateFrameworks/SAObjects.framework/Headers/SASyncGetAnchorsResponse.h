/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *anchors;	// G=0x303a1661; S=0x303a16dd; 
+ (id)getAnchorsResponse;	// 0x303a15d1
+ (id)getAnchorsResponseWithDictionary:(id)dictionary context:(id)context;	// 0x303a1615
// declared property getter: - (id)anchors;	// 0x303a1661
- (id)encodedClassName;	// 0x303a15c5
- (id)groupIdentifier;	// 0x303a15b5
- (BOOL)requiresResponse;	// 0x303a1745
// declared property setter: - (void)setAnchors:(id)anchors;	// 0x303a16dd
@end
