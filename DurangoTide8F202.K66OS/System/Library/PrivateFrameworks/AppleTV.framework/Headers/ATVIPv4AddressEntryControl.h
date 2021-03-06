/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library
#import "BRTextField.h"

@class BRTextControl, ATVIPv4AddressSelectionControl;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField> {
@private
	ATVIPv4AddressSelectionControl *_addressPicker;	// 44 = 0x2c
	BRTextControl *_labelLayer;	// 48 = 0x30
	CGSize _addressPickerSize;	// 52 = 0x34
	float _labelPadding;	// 60 = 0x3c
	id<BRTextFieldDelegate> _textFieldDelegate;	// 64 = 0x40
}
- (id)init;	// 0x336e6ea5
- (void)_handlePlayPauseButton:(id)button;	// 0x336e6a55
- (void)_layoutUI;	// 0x336e7179
- (id)accessibilityLabel;	// 0x336e69bd
- (id)accessibilityTraits;	// 0x336e69dd
- (BOOL)brEventAction:(id)action;	// 0x336e6b0d
- (void)dealloc;	// 0x336e6e49
- (BOOL)isAccessibilityElement;	// 0x336e69b9
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x336e6f89
- (void)reset;	// 0x336e6de9
- (void)setDelegate:(id)delegate;	// 0x336e69a9
- (void)setFrame:(CGRect)frame;	// 0x336e6d8d
- (void)setInitialAddress:(id)address;	// 0x336e6e29
- (void)setLabel:(id)label;	// 0x336e705d
- (void)setString:(id)string;	// 0x336e6acd
- (id)stringValue;	// 0x336e6aed
@end

