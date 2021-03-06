/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class CAAnimation, NSString;

@interface CAStateAddAnimation : CAStateElement {
	NSString *_key;	// 12 = 0xc
	CAAnimation *_animation;	// 16 = 0x10
}
@property(retain, nonatomic) CAAnimation *animation;	// G=0x32954719; S=0x32954729; @synthesize=_animation
@property(copy, nonatomic) NSString *key;	// G=0x329546f5; S=0x32954709; @synthesize=_key
- (id)initWithCoder:(id)coder;	// 0x32954555
// declared property getter: - (id)animation;	// 0x32954719
- (void)apply:(id)apply;	// 0x32954261
- (id)copyWithZone:(NSZone *)zone;	// 0x32954439
- (void)dealloc;	// 0x329545f9
- (id)debugDescription;	// 0x3295465d
- (void)encodeWithCoder:(id)coder;	// 0x329544d9
// declared property getter: - (id)key;	// 0x329546f5
- (id)keyPath;	// 0x32954145
- (BOOL)matches:(id)matches;	// 0x32954189
// declared property setter: - (void)setAnimation:(id)animation;	// 0x32954729
// declared property setter: - (void)setKey:(id)key;	// 0x32954709
@end

