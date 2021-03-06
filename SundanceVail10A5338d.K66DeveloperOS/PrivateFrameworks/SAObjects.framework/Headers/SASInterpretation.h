/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray;

@interface SASInterpretation : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *tokens;	// G=0x379611bd; S=0x37961239; 
+ (id)interpretation;	// 0x3796112d
+ (id)interpretationWithDictionary:(id)dictionary context:(id)context;	// 0x37961171
- (id)encodedClassName;	// 0x37961121
- (id)groupIdentifier;	// 0x37961111
// declared property setter: - (void)setTokens:(id)tokens;	// 0x37961239
// declared property getter: - (id)tokens;	// 0x379611bd
@end

