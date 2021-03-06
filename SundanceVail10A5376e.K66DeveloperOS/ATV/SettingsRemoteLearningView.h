/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, ATVMultistateProgressIndicator, BRImageControl, NSTimer;

__attribute__((visibility("hidden")))
@interface SettingsRemoteLearningView : BRControl {
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_prompt;	// 88 = 0x58
	BRTextControl *_subPrompt;	// 92 = 0x5c
	BRTextControl *_bottomPrompt;	// 96 = 0x60
	BRTextControl *_inactivityMessage;	// 100 = 0x64
	BRTextControl *_progressBarText;	// 104 = 0x68
	BRImageControl *_buttonImage;	// 108 = 0x6c
	ATVMultistateProgressIndicator *_progressBar;	// 112 = 0x70
	NSTimer *_inactivityTimer;	// 116 = 0x74
}
@property(retain) BRTextControl *bottomPrompt;	// G=0x9c385; S=0x9c2b5; converted property
@property(assign) double progressPercentage;	// G=0x9c729; S=0x9c6a5; converted property
@property(retain) BRTextControl *prompt;	// G=0x9c11d; S=0x9c02d; converted property
@property(retain) BRTextControl *subPrompt;	// G=0x9c261; S=0x9c171; converted property
@property(retain) BRTextControl *title;	// G=0x9bfd9; S=0x9bee9; converted property
- (id)init;	// 0x9bb79
- (void).cxx_destruct;	// 0x9cc41
- (void)_hideInactivityMessage;	// 0x9ce15
- (void)_showInactivityMessage;	// 0x9cd01
// converted property getter: - (id)bottomPrompt;	// 0x9c385
- (void)layoutSubcontrols;	// 0x9c7b9
// converted property getter: - (double)progressPercentage;	// 0x9c729
// converted property getter: - (id)prompt;	// 0x9c11d
// converted property setter: - (void)setBottomPrompt:(id)prompt;	// 0x9c2b5
- (void)setButtonImage:(id)image;	// 0x9c669
- (void)setInactivityMessage:(id)message timeout:(double)timeout;	// 0x9c3d9
// converted property setter: - (void)setProgressPercentage:(double)percentage;	// 0x9c6a5
- (void)setProgressText:(id)text;	// 0x9c579
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x9c02d
// converted property setter: - (void)setSubPrompt:(id)prompt;	// 0x9c171
// converted property setter: - (void)setTitle:(id)title;	// 0x9bee9
- (void)showProgress:(BOOL)progress;	// 0x9c759
// converted property getter: - (id)subPrompt;	// 0x9c261
// converted property getter: - (id)title;	// 0x9bfd9
@end

