/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSTimer, BRWaitPromptControl;

@interface BRTextWithSpinnerController : BRController {
@private
	NSTimer *_revealTimer;	// 80 = 0x50
	double _revealInterval;	// 84 = 0x54
	BRWaitPromptControl *_prompt;	// 92 = 0x5c
	BOOL _isNetworkDependent;	// 96 = 0x60
}
@property(readonly, assign) BOOL isNetworkDependent;	// G=0x33a56ee1; converted property
- (id)initWithTitle:(id)title text:(id)text;	// 0x33a56af1
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent;	// 0x33a56b4d
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent revealAfter:(double)after;	// 0x33a56b7d
- (id)initWithTitle:(id)title text:(id)text revealAfter:(double)after;	// 0x33a56b21
- (void)_checkActivationState:(id)state;	// 0x33a56ef5
- (void)controlWasActivated;	// 0x33a56d61
- (void)controlWasDeactivated;	// 0x33a56e89
- (void)dealloc;	// 0x33a56d15
// converted property getter: - (BOOL)isNetworkDependent;	// 0x33a56ee1
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x33a56ef1
@end

