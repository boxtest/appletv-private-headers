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
@property(retain) id first;	// G=0x3692fbc5; S=0x3692fbd9; @synthesize=_first
@property(retain) id second;	// G=0x3692fbe9; S=0x3692fbfd; @synthesize=_second
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x3692fa2d
- (id)initWithFirst:(id)first second:(id)second;	// 0x3692f9cd
- (id)copyWithZone:(NSZone *)zone;	// 0x3692fac5
- (void)dealloc;	// 0x3692fa6d
// declared property getter: - (id)first;	// 0x3692fbc5
- (unsigned)hash;	// 0x3692fad5
- (BOOL)isEqual:(id)equal;	// 0x3692fb1d
// declared property getter: - (id)second;	// 0x3692fbe9
// declared property setter: - (void)setFirst:(id)first;	// 0x3692fbd9
// declared property setter: - (void)setSecond:(id)second;	// 0x3692fbfd
@end

