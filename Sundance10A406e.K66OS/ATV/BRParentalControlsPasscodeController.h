/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextFieldDelegate.h"
#import "BRController.h"

@class NSDictionary, BRTextControl, BRHeaderControl, NSString, BRPasscodeEntryControl;

__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate> {
	BRController *_guardedController;	// 100 = 0x64
	BRPasscodeEntryControl *_editor;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	BRTextControl *_prompt;	// 112 = 0x70
	NSString *_passcodeToConfirm;	// 116 = 0x74
	int _mode;	// 120 = 0x78
	NSDictionary *_userInfo;	// 124 = 0x7c
}
@property(retain) NSDictionary *userInfo;	// G=0x321bb9; S=0x321b7d; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x3215cd
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x321679
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x321f7d
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x321c2d
- (void)_passcodeEnteredForSet:(id)set;	// 0x321e19
- (id)accessibilityLabel;	// 0x3221c5
- (void)dealloc;	// 0x32185d
- (void)setFrame:(CGRect)frame;	// 0x321925
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x321b3d
- (void)setIconScaleFactor:(float)factor;	// 0x321b5d
- (void)setPasscodeToConfirm:(id)confirm;	// 0x321b01
// converted property setter: - (void)setUserInfo:(id)info;	// 0x321b7d
- (void)textDidChange:(id)text;	// 0x321bc9
- (void)textDidEndEditing:(id)text;	// 0x321bcd
// converted property getter: - (id)userInfo;	// 0x321bb9
@end
