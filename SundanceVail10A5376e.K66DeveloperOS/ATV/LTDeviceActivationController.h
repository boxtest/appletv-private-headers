/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "ATVDeviceActivationDelegate.h"

@class BRTextControl, BRAlertControl, BRWaitPromptControl, ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface LTDeviceActivationController : BRController <ATVDeviceActivationDelegate> {
	BRWaitPromptControl *_prompt;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
	BRAlertControl *_error;	// 108 = 0x6c
	BOOL _userSkippedActivation;	// 112 = 0x70
	ATVDeviceActivationAction *_action;	// 116 = 0x74
}
- (id)init;	// 0x64285
- (void).cxx_destruct;	// 0x64945
- (void)_adjustSubtext;	// 0x64ba9
- (void)_networkChanged:(id)changed;	// 0x64ab1
- (void)_timeChangeNotification:(id)notification;	// 0x649a1
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x648ad
- (void)activationSucceeded:(id)succeeded;	// 0x64829
- (void)layoutSubcontrols;	// 0x6472d
- (void)wasPopped;	// 0x64661
- (void)wasPushed;	// 0x64459
@end

