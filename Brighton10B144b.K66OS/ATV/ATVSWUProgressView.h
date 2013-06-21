/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSString, BRTextControl, BRProgressBarWidget, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRProgressBarWidget *_progress;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
	NSString *_secondaryProgressImagePath;	// 96 = 0x60
	float _lastProgressPercentage;	// 100 = 0x64
	float _lastAXProgressPercentage;	// 104 = 0x68
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x266a99; converted property
- (id)init;	// 0x266129
- (id)initForUpdateProgress;	// 0x266251
- (id)accessibilityLabel;	// 0x266aa9
- (void)controlWasActivated;	// 0x26645d
- (void)dealloc;	// 0x2663d1
- (void)layoutSubcontrols;	// 0x266491
// converted property getter: - (id)secondaryProgressImagePath;	// 0x266a99
- (void)setUpdatePercentage:(float)percentage;	// 0x266a11
@end
