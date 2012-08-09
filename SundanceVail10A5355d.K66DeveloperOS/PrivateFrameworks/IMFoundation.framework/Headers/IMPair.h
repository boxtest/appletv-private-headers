/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface IMPair : NSObject <NSCopying> {
	id _first;	// 4 = 0x4
	id _second;	// 8 = 0x8
}
@property(retain) id first;	// G=0x32992db5; S=0x32992dc9; @synthesize=_first
@property(retain) id second;	// G=0x32992dd9; S=0x32992ded; @synthesize=_second
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x32992c1d
- (id)initWithFirst:(id)first second:(id)second;	// 0x32992bbd
- (id)copyWithZone:(NSZone *)zone;	// 0x32992cb5
- (void)dealloc;	// 0x32992c5d
// declared property getter: - (id)first;	// 0x32992db5
- (unsigned)hash;	// 0x32992cc5
- (BOOL)isEqual:(id)equal;	// 0x32992d0d
// declared property getter: - (id)second;	// 0x32992dd9
// declared property setter: - (void)setFirst:(id)first;	// 0x32992dc9
// declared property setter: - (void)setSecond:(id)second;	// 0x32992ded
@end
