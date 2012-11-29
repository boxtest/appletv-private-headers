/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSCoding> {
	NSString *_fromState;	// 4 = 0x4
	NSString *_toState;	// 8 = 0x8
	NSArray *_elements;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *elements;	// G=0x351e4efd; S=0x351e4f11; @synthesize=_elements
@property(copy, nonatomic) NSString *fromState;	// G=0x351e4eb5; S=0x351e4ec9; @synthesize=_fromState
@property(copy, nonatomic) NSString *toState;	// G=0x351e4ed9; S=0x351e4eed; @synthesize=_toState
- (id)init;	// 0x351e4a39
- (id)initWithCoder:(id)coder;	// 0x351e4ced
- (id)copyWithZone:(NSZone *)zone;	// 0x351e4db9
- (void)dealloc;	// 0x351e4ab1
- (id)debugDescription;	// 0x351e4e51
- (double)duration;	// 0x351e4b29
// declared property getter: - (id)elements;	// 0x351e4efd
- (void)encodeWithCoder:(id)coder;	// 0x351e4c59
// declared property getter: - (id)fromState;	// 0x351e4eb5
// declared property setter: - (void)setElements:(id)elements;	// 0x351e4f11
// declared property setter: - (void)setFromState:(id)state;	// 0x351e4ec9
// declared property setter: - (void)setToState:(id)state;	// 0x351e4eed
// declared property getter: - (id)toState;	// 0x351e4ed9
@end
