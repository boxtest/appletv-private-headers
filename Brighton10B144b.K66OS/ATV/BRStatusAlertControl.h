/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRStatusAlertControl : BRControl {
	BRImageControl *_background;	// 84 = 0x54
	BRImageControl *_overlay;	// 88 = 0x58
	int _fadeHalfCount;	// 92 = 0x5c
	int _maxFadeCount;	// 96 = 0x60
}
+ (void)postStatusAlertOfType:(int)type;	// 0x2c9889
- (id)init;	// 0x2c9a11
- (void).cxx_destruct;	// 0x2c9c61
- (void)_cancel;	// 0x2ca145
- (void)_setDuration:(float)duration;	// 0x2ca101
- (void)_setType:(int)type;	// 0x2c9c95
- (id)accessibilityLabel;	// 0x2c9c41
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2c9bb9
- (BOOL)isAccessibilityElement;	// 0x2c9c3d
- (void)layoutSubcontrols;	// 0x2c9a61
@end
