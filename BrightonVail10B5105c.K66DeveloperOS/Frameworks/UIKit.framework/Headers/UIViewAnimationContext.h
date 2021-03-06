/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject {
	NSArray *_viewAnimations;	// 4 = 0x4
	int _animationCount;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
}
@property(assign, nonatomic) int animationCount;	// G=0x345cf8fd; S=0x345cf90d; @synthesize=_animationCount
@property(readonly, assign, nonatomic) id completionHandler;	// G=0x345d0259; @synthesize=_completionHandler
@property(retain, nonatomic) NSArray *viewAnimations;	// G=0x345cfed1; S=0x3457db19; @synthesize=_viewAnimations
- (id)initWithCompletionHandler:(id)completionHandler;	// 0x3457dac5
// declared property getter: - (int)animationCount;	// 0x345cf8fd
// declared property getter: - (id)completionHandler;	// 0x345d0259
- (void)dealloc;	// 0x345d0269
// declared property setter: - (void)setAnimationCount:(int)count;	// 0x345cf90d
// declared property setter: - (void)setViewAnimations:(id)animations;	// 0x3457db19
// declared property getter: - (id)viewAnimations;	// 0x345cfed1
@end

