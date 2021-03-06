/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRWaitSpinnerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRWaitPromptControl : BRControl {
	BRWaitSpinnerControl *_spinner;	// 84 = 0x54
	BRTextControl *_prompt;	// 88 = 0x58
}
@property(retain) BRTextControl *prompt;	// G=0x31c101; S=0x31c0c5; converted property
@property(retain) id promptText;	// G=0x31c1ad; S=0x31c121; converted property
+ (id)themeAttributes;	// 0x31c091
- (id)init;	// 0x31bf5d
- (id)accessibilityLabel;	// 0x31c3a1
- (void)controlWasActivated;	// 0x31c3e9
- (void)dealloc;	// 0x31c02d
- (BOOL)isAccessibilityElement;	// 0x31c3e5
- (void)layoutSubcontrols;	// 0x31c1e5
// converted property getter: - (id)prompt;	// 0x31c101
// converted property getter: - (id)promptText;	// 0x31c1ad
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x31c0c5
// converted property setter: - (void)setPromptText:(id)text;	// 0x31c121
@end

