/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UIKeyInput.h"
#import "Preferences-Structs.h"
#import "PSEditingPane.h"

@class UITransitionView, UIKeyboard;
@protocol PINEntryView;

@interface DevicePINPane : PSEditingPane <UIKeyInput> {
	UITransitionView *_transitionView;	// 116 = 0x74
	BOOL _transitioning;	// 120 = 0x78
	UIView<PINEntryView> *_pinView;	// 124 = 0x7c
	CGRect _pinViewFrame;	// 128 = 0x80
	UIKeyboard *_keypad;	// 144 = 0x90
	CGRect _keypadFrame;	// 148 = 0x94
	BOOL _keypadActive;	// 164 = 0xa4
	int _autocapitalizationType;	// 168 = 0xa8
	int _autocorrectionType;	// 172 = 0xac
	int _keyboardType;	// 176 = 0xb0
	int _keyboardAppearance;	// 180 = 0xb4
	BOOL _playSound;	// 184 = 0xb8
	BOOL _isBlocked;	// 185 = 0xb9
	BOOL _simplePIN;	// 186 = 0xba
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x352f5cbd; S=0x352f5ccd; @synthesize=_autocapitalizationType
@property(assign, nonatomic) int autocorrectionType;	// G=0x352f5cdd; S=0x352f5ced; @synthesize=_autocorrectionType
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;	// G=0x352f5d1d; S=0x352f5d2d; @synthesize=_keyboardAppearance
@property(assign, nonatomic) int keyboardType;	// G=0x352f5cfd; S=0x352f5d0d; @synthesize=_keyboardType
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x352f5af5; 
@property(readonly, assign) BOOL simplePIN;	// G=0x352f4dd1; converted property
@property(assign, nonatomic) int spellCheckingType;
@property(retain) id text;	// G=0x352f57d9; S=0x352f57f9; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x352f48b9
- (void)_setKeypadState:(BOOL)state animated:(BOOL)animated;	// 0x352f4df9
- (void)_setPlaysKeyboardClicks:(BOOL)clicks;	// 0x352f4889
- (void)activateKeypadView;	// 0x352f4ae1
- (void)adjustButtonsNow;	// 0x352f5a85
// declared property getter: - (int)autocapitalizationType;	// 0x352f5cbd
// declared property getter: - (int)autocorrectionType;	// 0x352f5cdd
- (BOOL)becomeFirstResponder;	// 0x352f5145
- (BOOL)canBecomeFirstResponder;	// 0x352f50f5
- (void)clearPassword;	// 0x352f57b1
- (void)deactivateKeypadView;	// 0x352f4bdd
- (void)dealloc;	// 0x352f4a8d
- (void)deleteBackward;	// 0x352f5a65
- (void)dismissKeypad;	// 0x352f50a1
- (BOOL)hasText;	// 0x352f5819
- (void)hideError;	// 0x352f53a5
- (void)hideFailedAttempts;	// 0x352f4c5d
- (void)insertText:(id)text;	// 0x352f5855
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x352f5af5
// declared property getter: - (int)keyboardAppearance;	// 0x352f5d1d
// declared property getter: - (int)keyboardType;	// 0x352f5cfd
- (void)layoutSubviews;	// 0x352f5b41
- (void)okButtonPressed;	// 0x352f5385
- (id)password;	// 0x352f5791
- (void)pinView:(id)view pinEntered:(id)entered;	// 0x352f5af9
- (BOOL)requiresKeyboard;	// 0x352f4de1
- (BOOL)resignFirstResponder;	// 0x352f51c9
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x352f5ccd
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x352f5ced
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x352f5d2d
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x352f5d0d
- (void)setPINPolicyString:(id)string visible:(BOOL)visible;	// 0x352f5341
- (void)setSimplePIN:(BOOL)pin requiresKeyboard:(BOOL)keyboard;	// 0x352f4c7d
// converted property setter: - (void)setText:(id)text;	// 0x352f57f9
- (void)setTitle:(id)title;	// 0x352f53c5
- (void)showError:(id)error error:(id)error2 isBlocked:(BOOL)blocked animate:(BOOL)animate;	// 0x352f5231
- (void)showFailedAttempts:(int)attempts;	// 0x352f4c3d
// converted property getter: - (BOOL)simplePIN;	// 0x352f4dd1
- (void)slideToNewPasscodeField:(BOOL)newPasscodeField withKeyboard:(BOOL)keyboard;	// 0x352f5415
- (id)specifierLabel;	// 0x352f4869
// converted property getter: - (id)text;	// 0x352f57d9
- (void)transitionViewDidComplete:(id)transitionView;	// 0x352f573d
@end
