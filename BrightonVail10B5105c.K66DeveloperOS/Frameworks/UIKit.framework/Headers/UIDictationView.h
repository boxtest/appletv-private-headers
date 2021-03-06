/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIDictationMeterView, UIKeyboardDicationBackground, UIButton;

__attribute__((visibility("hidden")))
@interface UIDictationView : UIView {
	UIKeyboardDicationBackground *_background;	// 84 = 0x54
	UIDictationMeterView *_meterView;	// 88 = 0x58
	UIButton *_endpointButton;	// 92 = 0x5c
	UIButton *_endpointButtonLandscape;	// 96 = 0x60
	int _state;	// 100 = 0x64
	BOOL _keyboardInTransition;	// 104 = 0x68
	BOOL _automaticAppearanceWasEnabled;	// 105 = 0x69
}
@property(readonly, retain) UIButton *endpointButton;	// G=0x34901c41; converted property
+ (id)activeInstance;	// 0x34541a61
+ (Class)dictationViewClass;	// 0x349017c9
+ (CGSize)layoutSize;	// 0x34901ebd
+ (id)sharedInstance;	// 0x34901829
- (id)initWithFrame:(CGRect)frame;	// 0x34902169
- (void)applicationEnteredBackground;	// 0x34901e59
- (CGPoint)backgroundOffset;	// 0x34901f01
- (CGPoint)contentOffset;	// 0x34901ee9
- (id)createEndpointButtonWithRect:(CGRect)rect action:(SEL)action;	// 0x34901cc5
- (CGSize)currentScreenSize;	// 0x34901da1
- (void)dealloc;	// 0x349029a1
- (BOOL)drawsOwnBackground;	// 0x34902429
// converted property getter: - (id)endpointButton;	// 0x34901c41
- (id)endpointButtonImageWithRect:(CGRect)rect pressed:(BOOL)pressed;	// 0x349018c1
- (void)endpointButtonPressed;	// 0x34902a59
- (void)finishReturnToKeyboard;	// 0x34902005
- (void)keyboardDidShow:(id)keyboard;	// 0x34901f19
- (void)layoutSubviews;	// 0x34902431
- (CGPoint)positionForShow;	// 0x34901ea5
- (void)prepareForReturnToKeyboard;	// 0x34901f69
- (void)returnToKeyboard;	// 0x34902049
- (void)setState:(int)state;	// 0x349020cd
- (void)show;	// 0x34901ea1
- (BOOL)visible;	// 0x34902a8d
@end

