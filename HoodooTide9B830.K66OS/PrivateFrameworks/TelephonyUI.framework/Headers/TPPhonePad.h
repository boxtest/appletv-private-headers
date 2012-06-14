/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIControl.h> // Unknown library


@interface TPPhonePad : UIControl {
	int _downKey;	// 72 = 0x48
	id _delegate;	// 76 = 0x4c
	BOOL _playsSounds;	// 80 = 0x50
	BOOL _supportsHardPause;	// 81 = 0x51
	float _topHeight;	// 84 = 0x54
	float _midHeight;	// 88 = 0x58
	float _bottomHeight;	// 92 = 0x5c
	float _leftWidth;	// 96 = 0x60
	float _midWidth;	// 100 = 0x64
	float _rightWidth;	// 104 = 0x68
	CFSetRef _inflightSounds;	// 108 = 0x6c
	CFDictionaryRef _keyToButtonMap;	// 112 = 0x70
	unsigned _incompleteSounds;	// 116 = 0x74
	unsigned _delegateSoundCallbacks : 1;	// 120 = 0x78
	unsigned _soundsActivated : 1;	// 120 = 0x78
}
@property(assign) BOOL supportsHardPause;	// G=0x34851b3d; S=0x34851b4d; @synthesize=_supportsHardPause
+ (void)_delayedDeactivate;	// 0x34851c6d
+ (BOOL)launchFieldTestIfNeeded:(id)needed;	// 0x34851ca9
+ (BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;	// 0x34851d05
- (id)initWithFrame:(CGRect)frame;	// 0x34851b5d
- (void)_activateSounds:(BOOL)sounds;	// 0x348532b5
- (void)_appResumed;	// 0x34853215
- (void)_appSuspended;	// 0x34853241
- (id)_buttonForKeyAtIndex:(int)index;	// 0x34852e19
- (void)_handleKey:(id)key forUIEvent:(id)uievent;	// 0x348523bd
- (void)_handleKeyPressAndHold:(id)hold;	// 0x348522b5
- (id)_imageByCroppingImage:(id)image toRect:(CGRect)rect;	// 0x34852b49
- (int)_keyForPoint:(CGPoint)point;	// 0x3485217d
- (id)_keypadImage;	// 0x34852bf1
- (CGPoint)_keypadOrigin;	// 0x34852d09
- (void)_notifySoundCompletionIfNecessary:(unsigned long)necessary;	// 0x34851fd1
- (void)_playSoundForKey:(int)key;	// 0x34851f0d
- (id)_pressedImage;	// 0x34852c81
- (CGRect)_rectForKey:(int)key;	// 0x34852039
- (void)_stopAllSoundsForcingCallbacks:(BOOL)callbacks;	// 0x34851e21
- (void)_stopSoundForKey:(int)key;	// 0x34851ecd
- (CGRect)_updateRect:(CGRect)rect withScale:(float)scale;	// 0x34851ad1
- (float)_yFudge;	// 0x34851ac9
- (BOOL)cancelTouchTracking;	// 0x348526e9
- (void)dealloc;	// 0x348533f5
- (void)drawRect:(CGRect)rect;	// 0x34852921
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x348528a9
- (void)movedFromWindow:(id)window;	// 0x348531d1
- (void)movedToWindow:(id)window;	// 0x3485317d
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x34851b39
- (void)removeFromSuperview;	// 0x34853255
- (id)scriptingInfoWithChildren;	// 0x348534d5
- (void)setButton:(id)button forKeyAtIndex:(int)index;	// 0x34852e3d
- (void)setDelegate:(id)delegate;	// 0x348530ed
- (void)setHighlighted:(BOOL)highlighted;	// 0x348527dd
- (void)setNeedsDisplayForKey:(int)key;	// 0x34852db9
- (void)setPlaysSounds:(BOOL)sounds;	// 0x34852ef9
// declared property setter: - (void)setSupportsHardPause:(BOOL)pause;	// 0x34851b4d
// declared property getter: - (BOOL)supportsHardPause;	// 0x34851b3d
@end
