/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MPAnimationTrigger : MPAction {
	NSString *_animationKey;	// 20 = 0x14
	NSMutableDictionary *_animationAttributes;	// 24 = 0x18
}
@property(copy, nonatomic) NSDictionary *animationAttributes;	// G=0x348f2dcd; S=0x348f2aad; @synthesize=_animationAttributes
@property(copy, nonatomic) NSString *animationKey;	// G=0x348f2dbd; S=0x348f29e1; @synthesize=_animationKey
+ (id)animationTrigger;	// 0x348f272d
- (id)init;	// 0x348f2771
- (id)initWithCoder:(id)coder;	// 0x348f27bd
- (id)animationAttributeForKey:(id)key;	// 0x348f29c1
// declared property getter: - (id)animationAttributes;	// 0x348f2dcd
// declared property getter: - (id)animationKey;	// 0x348f2dbd
- (id)copyWithZone:(NSZone *)zone;	// 0x348f294d
- (void)dealloc;	// 0x348f2861
- (void)encodeWithCoder:(id)coder;	// 0x348f28c1
- (void)removeAnimationAttributeForKey:(id)key;	// 0x348f2c89
- (void)setAction:(id)action;	// 0x348f2d3d
- (void)setAnimationAttribute:(id)attribute forKey:(id)key;	// 0x348f2b79
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x348f2aad
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x348f29e1
@end

