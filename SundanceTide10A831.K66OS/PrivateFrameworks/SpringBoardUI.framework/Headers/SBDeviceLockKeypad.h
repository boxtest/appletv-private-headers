/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <___CFConstantStringClassReference.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class UIButton;

@interface SBDeviceLockKeypad : ___CFConstantStringClassReference {
	UIButton *_deleteButton;	// 160 = 0xa0
	UIButton *_cancelButton;	// 164 = 0xa4
	BOOL _deleteEnabled;	// 168 = 0xa8
	BOOL _playKeyboardClicks;	// 169 = 0xa9
}
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;	// G=0x3779f3d5; 
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;	// G=0x3779f421; S=0x3779f431; @synthesize=_deleteEnabled
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;	// G=0x3779f3d1; 
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;	// G=0x3779f3d9; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x3779f371; S=0x3779f381; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x3779f3c9; S=0x3779f3cd; 
+ (CGSize)defaultSize;	// 0x3779f3e5
+ (id)keypadImage;	// 0x3779f3dd
+ (id)pressedImage;	// 0x3779f3e1
- (id)initWithDefaultSizeForStyle:(int)style;	// 0x3779f235
- (id)initWithFrame:(CGRect)frame;	// 0x3779f129
- (id)_keypadImage;	// 0x3779f1e5
- (id)_pressedImage;	// 0x3779f20d
// declared property getter: - (BOOL)cancelKeyChar;	// 0x3779f3d5
- (void)dealloc;	// 0x3779f18d
// declared property getter: - (BOOL)deleteKeyChar;	// 0x3779f3d1
// declared property getter: - (BOOL)emergencyKeyChar;	// 0x3779f3d9
- (void)hiddenFromView;	// 0x3779f1d1
// declared property getter: - (BOOL)isDeleteEnabled;	// 0x3779f421
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x3779f371
// declared property setter: - (void)setDeleteEnabled:(BOOL)enabled;	// 0x3779f431
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x3779f381
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x3779f3cd
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x3779f3c9
- (void)willBecomeVisible;	// 0x3779f1d5
@end
