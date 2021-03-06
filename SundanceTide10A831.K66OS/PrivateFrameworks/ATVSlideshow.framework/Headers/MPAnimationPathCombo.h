/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationPath.h"
#import "ATVSlideshow-Structs.h"
#import "MPAnimationSupport.h"

@class NSMutableDictionary, NSString;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {
	NSMutableDictionary *_animationPaths;	// 16 = 0x10
	NSString *_operation;	// 20 = 0x14
	NSString *_key;	// 24 = 0x18
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x338f8009; converted property
@property(copy, nonatomic) NSString *key;	// G=0x338f8321; S=0x338f8399; @synthesize=_key
@property(copy, nonatomic) NSString *operation;	// G=0x338f8439; S=0x338f82b5; @synthesize=_operation
+ (id)animationPath;	// 0x338f7ba5
- (id)init;	// 0x338f7be9
- (id)initWithCoder:(id)coder;	// 0x338f7d15
- (id)animationPathForKey:(id)key;	// 0x338f8019
// converted property getter: - (id)animationPaths;	// 0x338f8009
- (void)cleanup;	// 0x338fa29d
- (void)copyAnimationPaths:(id)paths;	// 0x338fa651
- (id)copyWithZone:(NSZone *)zone;	// 0x338f7ebd
- (void)dealloc;	// 0x338f7f8d
- (void)encodeWithCoder:(id)coder;	// 0x338f7c6d
// declared property getter: - (id)key;	// 0x338f8321
// declared property getter: - (id)operation;	// 0x338f8439
- (void)removeAnimationPathForKey:(id)key;	// 0x338f81e1
- (void)setAnimationPath:(id)path;	// 0x338fa375
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x338f8039
// declared property setter: - (void)setKey:(id)key;	// 0x338f8399
// declared property setter: - (void)setOperation:(id)operation;	// 0x338f82b5
@end

