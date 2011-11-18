/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView {
@private
	int m_currentInputModeIndex;	// 136 = 0x88
	BOOL m_keyboardSettingsFromSwitcher;	// 140 = 0x8c
	NSMutableArray *m_inputModes;	// 144 = 0x90
}
@property(retain, nonatomic) NSArray *inputModes;	// G=0x33032819; S=0x33032035; @synthesize=m_inputModes
@property(assign, nonatomic) BOOL keyboardSettingsFromSwitcher;	// G=0x33032829; S=0x33032839; @synthesize=m_keyboardSettingsFromSwitcher
+ (id)activeInstance;	// 0x32d6e71d
+ (id)sharedInstance;	// 0x33031fd9
- (id)initWithFrame:(CGRect)frame;	// 0x33031f0d
- (void)dealloc;	// 0x33031f8d
- (int)defaultSelectedIndex;	// 0x330326f5
- (void)didSelectItemAtIndex:(int)index;	// 0x330327b1
// declared property getter: - (id)inputModes;	// 0x33032819
// declared property getter: - (BOOL)keyboardSettingsFromSwitcher;	// 0x33032829
- (id)nextInputMode;	// 0x33032361
- (int)numberOfItems;	// 0x33032581
- (CGSize)preferredSize;	// 0x330325c5
- (id)previousInputMode;	// 0x3303244d
- (void)selectInputMode:(id)mode;	// 0x3303232d
- (void)selectNextInputMode;	// 0x33032405
- (void)selectPreviousInputMode;	// 0x33032539
- (void)selectRowForInputMode:(id)inputMode;	// 0x330322ad
- (id)selectedInputMode;	// 0x33032201
- (void)setInputMode:(id)mode;	// 0x330322f1
// declared property setter: - (void)setInputModes:(id)modes;	// 0x33032035
// declared property setter: - (void)setKeyboardSettingsFromSwitcher:(BOOL)switcher;	// 0x33032839
- (id)titleForItemAtIndex:(int)index;	// 0x3303273d
@end

