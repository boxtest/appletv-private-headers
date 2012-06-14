/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverControl : BRControl {
@private
	BRMediaPlayer *_player;	// 48 = 0x30
}
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x32f906c9
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x32f905dd
- (BOOL)_nextTrackAction:(id)action;	// 0x32f90b79
- (BOOL)_playPauseAction:(id)action;	// 0x32f90b19
- (void)_playerStateChanged:(id)changed;	// 0x32f90ad9
- (BOOL)_previousTrackAction:(id)action;	// 0x32f90bdd
- (void)_setNewPlayer:(id)player;	// 0x32f90a11
- (id)accessibilityLabel;	// 0x32f90c45
- (BOOL)brEventAction:(id)action;	// 0x32f90785
- (void)controlWasActivated;	// 0x32f9088d
- (void)controlWasDeactivated;	// 0x32f908f5
- (void)dealloc;	// 0x32f90709
- (BOOL)isAccessibilityElement;	// 0x32f90c41
- (void)layoutSubcontrols;	// 0x32f9095d
@end
