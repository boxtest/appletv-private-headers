/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface UITableViewControllerKeyboardSupport : NSObject {
@private
	UITableViewController *_tableViewController;	// 4 = 0x4
	float _adjustmentForKeyboard;	// 8 = 0x8
	unsigned _viewIsDisappearing : 1;	// 12 = 0xc
	unsigned _registeredForNotifications : 1;	// 12 = 0xc
}
@property(assign, nonatomic) float adjustmentForKeyboard;	// G=0x301c18f5; S=0x301ffa9d; @synthesize=_adjustmentForKeyboard
@property(assign, nonatomic) BOOL registeredForNotifications;	// G=0x301c18b1; S=0x301c18c5; 
@property(assign, nonatomic) BOOL viewIsDisappearing;	// G=0x301ffa89; S=0x301c18dd; 
- (id)initWithTableViewController:(id)tableViewController;	// 0x301c1871
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x302e874d
- (void)_keyboardDidHide:(id)_keyboard;	// 0x3020b021
- (void)_keyboardDidShow:(id)_keyboard;	// 0x301ffb2d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x301ffb7d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x301ff911
// declared property getter: - (float)adjustmentForKeyboard;	// 0x301c18f5
// declared property getter: - (BOOL)registeredForNotifications;	// 0x301c18b1
// declared property setter: - (void)setAdjustmentForKeyboard:(float)keyboard;	// 0x301ffa9d
// declared property setter: - (void)setRegisteredForNotifications:(BOOL)notifications;	// 0x301c18c5
// declared property setter: - (void)setViewIsDisappearing:(BOOL)disappearing;	// 0x301c18dd
// declared property getter: - (BOOL)viewIsDisappearing;	// 0x301ffa89
@end
