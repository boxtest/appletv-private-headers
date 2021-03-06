/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardRomanLogIn.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn {
@private
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
}
- (float)_mainKeysHorizontalSpacing;	// 0x35e37751
- (float)_mainKeysVerticalSpacing;	// 0x35e37749
- (int)_numberOfMainKeyRows;	// 0x35e37745
- (float)_preferredTextEntryControlWidth;	// 0x35e37759
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x35e37765
- (id)attributesForTextFieldLabel;	// 0x35e37701
- (id)customizedTextEntryFieldControls;	// 0x35e37619
- (void)customizedTextFieldControlsWereRemoved;	// 0x35e376d5
- (void)dealloc;	// 0x35e3754d
- (CGRect)keyboardControlFrame;	// 0x35e3776d
- (id)name;	// 0x35e37735
- (BOOL)requiresTextFieldLabel;	// 0x35e37741
- (CGRect)spinnerFrame;	// 0x35e37879
- (void)startSpinning;	// 0x35e37599
- (void)stopSpinning;	// 0x35e375d9
- (CGRect)tabControlFrame;	// 0x35e37979
- (CGRect)textFieldBackgroundFrame;	// 0x35e377bd
- (CGRect)textFieldFrame;	// 0x35e377e9
- (CGRect)textFieldLabelFrame;	// 0x35e37791
@end

