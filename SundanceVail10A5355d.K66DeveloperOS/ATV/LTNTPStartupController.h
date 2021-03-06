/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRWaitPromptControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTNTPStartupController : BRController {
	BRWaitPromptControl *_promptAndSpinner;	// 96 = 0x60
	BRTextControl *_subtext;	// 100 = 0x64
}
- (id)init;	// 0x5d905
- (void).cxx_destruct;	// 0x5df25
- (void)_checkForNetworkTimeAfterPosted;	// 0x5df59
- (void)_networkChanged:(id)changed;	// 0x5e0b1
- (void)_timeChangeNotification:(id)notification;	// 0x5e019
- (id)accessibilityLabel;	// 0x5dea9
- (BOOL)brEventAction:(id)action;	// 0x5dc05
- (void)dealloc;	// 0x5db99
- (BOOL)isAccessibilityElement;	// 0x5dea5
- (void)layoutSubcontrols;	// 0x5ddad
- (void)wasPopped;	// 0x5dd69
- (void)wasPushed;	// 0x5dc7d
@end

