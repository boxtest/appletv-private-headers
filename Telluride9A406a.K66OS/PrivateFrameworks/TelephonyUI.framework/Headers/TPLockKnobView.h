/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : UIImageView {
	TPBottomLockBar *_track;	// 52 = 0x34
	UIAlphaAnimation *_animation;	// 56 = 0x38
	float _centerDelta;	// 60 = 0x3c
	BOOL _tracking;	// 64 = 0x40
}
- (id)initWithImage:(id)image;	// 0x3601ba89
- (void)beginTracking:(id)tracking;	// 0x3601be41
- (void)dealloc;	// 0x3601c005
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3601c031
- (void)setLockView:(id)view;	// 0x3601a619
- (BOOL)shouldBeginTracking:(id)tracking;	// 0x3601bf61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3601a8cd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3601a905
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3601bad1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3601bba1
@end
