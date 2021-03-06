/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardControl.h"

@class NSTimer, BRTextFieldControl, BRTextEntryControl, BREvent;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardControl : BRKeyboardControl {
	BREvent *_currentEvent;	// 96 = 0x60
	NSTimer *_retriggerTimer;	// 100 = 0x64
	long _retriggerCount;	// 104 = 0x68
	BOOL _initialDeleteHoldTimePassed;	// 108 = 0x6c
	BRTextFieldControl *_targetTextField;	// 112 = 0x70
	BRTextEntryControl *_targetTextEntryControl;	// 116 = 0x74
}
@property(retain) id focusedKeyControl;	// G=0x31e419; S=0x31e451; converted property
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x31dc09
- (BOOL)brEventAction:(id)action;	// 0x31ddb5
- (void)dealloc;	// 0x31dced
- (id)defaultKeyControl;	// 0x31e355
// converted property getter: - (id)focusedKeyControl;	// 0x31e419
- (CGPoint)focusedPoint;	// 0x31e4a9
- (void)retriggerEvent:(id)event;	// 0x31e2dd
- (void)retriggerEvent:(id)event afterDelay:(float)delay;	// 0x31e219
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x31e451
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x31e531
- (void)setTargetTextEntryControl:(id)control;	// 0x31e5f5
- (void)setTargetTextField:(id)field;	// 0x31e5e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31dd39
@end

