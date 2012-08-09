/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {
	UIAlertView *_front;	// 4 = 0x4
	UIAlertView *_back;	// 8 = 0x8
	UIAlertView *_currentAlert;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x33d35d69
- (void)alertViewCancel:(id)cancel;	// 0x33d35ddd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33d35d29
- (id)backAlert;	// 0x33d357f9
- (void)backAlertClickedButtonAtIndex:(int)index;	// 0x33d35d59
- (id)createBackAlert;	// 0x33d35895
- (id)createFrontAlert;	// 0x33d35841
- (void)dealloc;	// 0x33d35715
- (void)didPresentAlertView:(id)view;	// 0x33d35925
- (void)dismiss;	// 0x33d35a05
- (void)flip;	// 0x33d35ad9
- (id)frontAlert;	// 0x33d357b1
- (void)frontAlertClickedButtonAtIndex:(int)index;	// 0x33d35d49
- (void)setDelegate:(id)delegate;	// 0x33d357a1
- (void)show;	// 0x33d358e9
@end
