/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
	NSMutableDictionary *mAnimationSets;	// 8 = 0x8
}
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x3346febd
+ (void)releaseSharedManager;	// 0x3346fdd9
+ (id)sharedManager;	// 0x3346fd91
- (id)initWithPaths:(id)paths;	// 0x3346ff19
- (id)animationDescriptionForAnimationID:(id)animationID;	// 0x3346fe9d
- (id)animationDescriptionForAnimationSetID:(id)animationSetID;	// 0x3346fe7d
- (void)dealloc;	// 0x3346fe05
@end

