/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"


@interface UIAlphaAnimation : UIAnimation {
	float _startAlpha;	// 44 = 0x2c
	float _endAlpha;	// 48 = 0x30
}
- (float)_alphaForMultiplier:(float)multiplier;	// 0x34744d99
- (float)alphaForFraction:(float)fraction;	// 0x34744e11
- (void)setEndAlpha:(float)alpha;	// 0x34744d89
- (void)setProgress:(float)progress;	// 0x34744dd5
- (void)setStartAlpha:(float)alpha;	// 0x34744d79
@end

