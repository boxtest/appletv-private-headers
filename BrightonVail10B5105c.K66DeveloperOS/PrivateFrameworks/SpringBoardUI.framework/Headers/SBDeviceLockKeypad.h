/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <TPPhonePad.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class UIButton;

@interface SBDeviceLockKeypad : TPPhonePad {
	UIButton *_deleteButton;	// 160 = 0xa0
	UIButton *_cancelButton;	// 164 = 0xa4
	BOOL _deleteEnabled;	// 168 = 0xa8
	BOOL _playKeyboardClicks;	// 169 = 0xa9
}
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;	// G=0x303f43d5; 
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;	// G=0x303f4421; S=0x303f4431; @synthesize=_deleteEnabled
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;	// G=0x303f43d1; 
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;	// G=0x303f43d9; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x303f4371; S=0x303f4381; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x303f43c9; S=0x303f43cd; 
+ (CGSize)defaultSize;	// 0x303f43e5
+ (id)keypadImage;	// 0x303f43dd
+ (id)pressedImage;	// 0x303f43e1
- (id)initWithDefaultSizeForStyle:(int)style;	// 0x303f4235
- (id)initWithFrame:(CGRect)frame;	// 0x303f4129
- (id)_keypadImage;	// 0x303f41e5
- (id)_pressedImage;	// 0x303f420d
// declared property getter: - (BOOL)cancelKeyChar;	// 0x303f43d5
- (void)dealloc;	// 0x303f418d
// declared property getter: - (BOOL)deleteKeyChar;	// 0x303f43d1
// declared property getter: - (BOOL)emergencyKeyChar;	// 0x303f43d9
- (void)hiddenFromView;	// 0x303f41d1
// declared property getter: - (BOOL)isDeleteEnabled;	// 0x303f4421
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x303f4371
// declared property setter: - (void)setDeleteEnabled:(BOOL)enabled;	// 0x303f4431
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x303f4381
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x303f43cd
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x303f43c9
- (void)willBecomeVisible;	// 0x303f41d5
@end

