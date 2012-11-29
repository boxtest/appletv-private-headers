/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"


@interface SAMovieResolution : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int height;	// G=0x303d9f9d; S=0x303da00d; 
@property(assign, nonatomic) int width;	// G=0x303da051; S=0x303da0c1; 
+ (id)resolution;	// 0x303d9f0d
+ (id)resolutionWithDictionary:(id)dictionary context:(id)context;	// 0x303d9f51
- (id)encodedClassName;	// 0x303d9f01
- (id)groupIdentifier;	// 0x303d9ef1
// declared property getter: - (int)height;	// 0x303d9f9d
// declared property setter: - (void)setHeight:(int)height;	// 0x303da00d
// declared property setter: - (void)setWidth:(int)width;	// 0x303da0c1
// declared property getter: - (int)width;	// 0x303da051
@end
