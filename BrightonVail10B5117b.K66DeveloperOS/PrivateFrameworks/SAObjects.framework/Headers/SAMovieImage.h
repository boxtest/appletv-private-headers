/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSURL, SAMovieResolution;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAMovieResolution *resolution;	// G=0x355d8d85; S=0x355d8dd9; 
@property(copy, nonatomic) NSURL *uri;	// G=0x355d8e15; S=0x355d8e91; 
+ (id)image;	// 0x355d8cf5
+ (id)imageWithDictionary:(id)dictionary context:(id)context;	// 0x355d8d39
- (id)encodedClassName;	// 0x355d8ce9
- (id)groupIdentifier;	// 0x355d8cd9
// declared property getter: - (id)resolution;	// 0x355d8d85
// declared property setter: - (void)setResolution:(id)resolution;	// 0x355d8dd9
// declared property setter: - (void)setUri:(id)uri;	// 0x355d8e91
// declared property getter: - (id)uri;	// 0x355d8e15
@end
