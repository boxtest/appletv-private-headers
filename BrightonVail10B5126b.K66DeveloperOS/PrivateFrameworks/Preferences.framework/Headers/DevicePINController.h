/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSDetailController.h"

@class UIBarButtonItem, NSString;

@interface DevicePINController : PSDetailController {
	int _mode;	// 212 = 0xd4
	int _substate;	// 216 = 0xd8
	NSString *_oldPassword;	// 220 = 0xdc
	NSString *_lastEntry;	// 224 = 0xe0
	BOOL _success;	// 228 = 0xe4
	id _pinDelegate;	// 232 = 0xe8
	UIBarButtonItem *_cancelButton;	// 236 = 0xec
	UIBarButtonItem *_nextButton;	// 240 = 0xf0
	UIBarButtonItem *_doneButton;	// 244 = 0xf4
	NSString *_error1;	// 248 = 0xf8
	NSString *_error2;	// 252 = 0xfc
}
+ (BOOL)settingEnabled;	// 0x352f09a1
- (id)init;	// 0x352f0a21
- (BOOL)_attemptValidationWithPIN:(id)pin;	// 0x352f1361
- (void)_clearBlockedState;	// 0x352f1165
- (void)_dismiss;	// 0x352f0b91
- (int)_getScreenType;	// 0x352f0f6d
- (BOOL)_isBlocked;	// 0x352f127d
- (int)_numberOfFailedAttempts;	// 0x352f10c9
- (void)_setNumberOfFailedAttempts:(int)failedAttempts;	// 0x352f1105
- (void)_setUnblockTime:(double)time;	// 0x352f12f1
- (void)_showFailedAttempts;	// 0x352f14fd
- (void)_showPINConfirmationError;	// 0x352f1a79
- (void)_showUnacceptablePINError:(id)error password:(id)password;	// 0x352f1969
- (void)_slidePasscodeField;	// 0x352f1f2d
- (BOOL)_success;	// 0x352f2b91
- (double)_unblockTime;	// 0x352f11e5
- (void)_updateErrorTextAndFailureCount:(BOOL)count;	// 0x352f15d1
- (void)_updatePINButtons;	// 0x352f1af9
- (void)_updateUI;	// 0x352f1911
- (void)adjustButtonsForPasswordLength:(unsigned)passwordLength;	// 0x352f1e11
- (CFStringRef)blockTimeIntervalKey;	// 0x352f0f55
- (CFStringRef)blockedStateKey;	// 0x352f0f61
- (void)cancelButtonTapped;	// 0x352f2591
- (BOOL)completedInputIsValid:(id)valid;	// 0x352f1e55
- (void)dealloc;	// 0x352f0c4d
- (CFStringRef)defaultsID;	// 0x352f0f3d
- (CFStringRef)failedAttemptsKey;	// 0x352f0f49
- (void)loadView;	// 0x352f1e59
- (CGRect)paneFrame;	// 0x352f2881
- (void)performActionAfterPINEntry;	// 0x352f14d1
- (void)performActionAfterPINRemove;	// 0x352f14d9
- (void)performActionAfterPINSet;	// 0x352f14d5
- (CGSize)pinContentSizeForViewInPopover;	// 0x352f0b3d
- (void)pinEntered:(id)entered;	// 0x352f2015
- (id)pinInstructionsPrompt;	// 0x352f2651
- (id)pinInstructionsPromptFont;	// 0x352f2795
- (BOOL)pinIsAcceptable:(id)acceptable outError:(id *)error;	// 0x352f0dad
- (int)pinLength;	// 0x352f0f39
- (BOOL)requiresKeyboard;	// 0x352f0ff1
- (void)setLastEntry:(id)entry;	// 0x352f0d71
- (void)setOldPassword:(id)password;	// 0x352f0d35
- (void)setPIN:(id)pin;	// 0x352f0e19
- (void)setPane:(id)pane;	// 0x352f290d
- (void)setSpecifier:(id)specifier;	// 0x352f0a95
- (BOOL)simplePIN;	// 0x352f10a9
- (id)stringsBundle;	// 0x352f0c15
- (id)stringsTable;	// 0x352f0c09
- (void)suspend;	// 0x352f14dd
- (BOOL)useProgressiveDelays;	// 0x352f0f35
- (BOOL)validatePIN:(id)pin;	// 0x352f0eb9
- (void)viewDidAppear:(BOOL)view;	// 0x352f2829
- (void)viewWillAppear:(BOOL)view;	// 0x352f27b9
- (void)viewWillLayoutSubviews;	// 0x352f1ead
- (void)willUnlock;	// 0x352f09d5
@end
