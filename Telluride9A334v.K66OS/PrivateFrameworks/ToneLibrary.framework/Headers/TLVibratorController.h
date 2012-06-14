/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibratorController : NSObject {
	id _avController;	// 4 = 0x4
	BOOL _customAVController;	// 8 = 0x8
	BOOL _startedInterruption;	// 9 = 0x9
}
@property(retain, nonatomic, setter=setAVController:) id avController;	// G=0x3306bf49; S=0x3306bf59; 
- (id)init;	// 0x3306bd09
- (id)initWithAVController:(id)avcontroller;	// 0x3306bd1d
- (id)_avController;	// 0x3306bda9
- (id)_interruptedAVController;	// 0x3306bf69
- (void)_setAVController:(id)controller;	// 0x3306beb5
- (void)_turnOff;	// 0x3306c09d
- (void)_turnOnWithVibrationPattern:(id)vibrationPattern;	// 0x3306c041
- (void)_uninterruptAVControllerIfAppropriate;	// 0x3306bfd5
// declared property getter: - (id)avController;	// 0x3306bf49
- (void)dealloc;	// 0x3306bd65
// declared property setter: - (void)setAVController:(id)controller;	// 0x3306bf59
- (void)turnOff;	// 0x3306c0cd
- (void)turnOnWithVibrationPattern:(id)vibrationPattern;	// 0x3306c0bd
- (void)uninterruptAVControllerIfAppropriate;	// 0x3306c031
@end
