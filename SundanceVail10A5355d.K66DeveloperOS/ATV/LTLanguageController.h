/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface LTLanguageController : BRViewController {
	BOOL _useVoiceOverGreeting;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x173cd; S=0x173dd; @synthesize=_useVoiceOverGreeting
- (id)init;	// 0x17199
- (void)_showLanguageChooser;	// 0x173ed
- (BOOL)brEventAction:(id)action;	// 0x172ed
- (void)dealloc;	// 0x17241
- (void)languageSelected:(id)selected;	// 0x1730d
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x173dd
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x173cd
- (void)wasPushed;	// 0x172ad
@end

