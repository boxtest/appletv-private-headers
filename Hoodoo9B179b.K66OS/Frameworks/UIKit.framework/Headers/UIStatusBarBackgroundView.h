/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView {
@private
	int _style;	// 48 = 0x30
	UIImageView *_glowView;	// 52 = 0x34
	BOOL _glowEnabled;	// 56 = 0x38
	BOOL _suppressGlow;	// 57 = 0x39
}
@property(readonly, assign) int style;	// G=0x32ef0409; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x32eeff85
- (id)_baseImageForStyle:(int)style;	// 0x32ef00fd
- (id)_glowImageForStyle:(int)style;	// 0x331c994d
- (id)_imageNameForStyle:(int)style;	// 0x32ef0165
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x32edde89
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x331c9571
- (void)_stopGlowAnimation;	// 0x32edded9
- (BOOL)_styleCanGlow:(int)glow;	// 0x331c952d
- (void)dealloc;	// 0x33026841
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x32ef1df9
- (void)setSuppressesGlow:(BOOL)glow;	// 0x32edde59
// converted property getter: - (int)style;	// 0x32ef0409
@end

