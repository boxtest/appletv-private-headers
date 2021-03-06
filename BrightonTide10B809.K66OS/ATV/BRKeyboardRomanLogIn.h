/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
	BRControl *_sixthRow;	// 48 = 0x30
}
- (id)init;	// 0x31c8a1
- (float)_actionKeysContainerSpacing;	// 0x31c9fd
- (float)_actionKeysContainerWidth;	// 0x31c9f5
- (id)_keyboardDataFileName;	// 0x31c9b5
- (float)_mainKeysHorizontalSpacing;	// 0x31c9e1
- (float)_mainKeysVerticalSpacing;	// 0x31c9d9
- (int)_numberOfMainKeyColumns;	// 0x31c9d5
- (int)_numberOfMainKeyRows;	// 0x31c9d1
- (id)_popupKeyboardDataFileName;	// 0x31c9a9
- (float)_preferredTextEntryControlWidth;	// 0x31c9e9
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x31ca05
- (id)accessibilityLabel;	// 0x31c981
- (void)dealloc;	// 0x31c8fd
- (CGRect)keyboardControlFrame;	// 0x31ca1d
- (float)layoutGapBelowKeyboardControl;	// 0x31ca0d
- (float)layoutGapBelowTabControl;	// 0x31ca15
- (id)name;	// 0x31c975
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x31c971
- (id)switchToThisKeyboardIdentifier;	// 0x31c949
- (CGRect)tabControlFrame;	// 0x31ca45
@end

