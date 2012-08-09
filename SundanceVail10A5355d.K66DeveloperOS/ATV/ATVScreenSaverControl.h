/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMediaPlayerEventHandler, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
	BRMediaPlayerEventHandler *_eventHandler;	// 84 = 0x54
	BOOL _dismissWithTopMenuEvent;	// 88 = 0x58
}
@property(assign, nonatomic) BOOL dismissWithTopMenuEvent;	// G=0x21eedd; S=0x21eeed; @synthesize=_dismissWithTopMenuEvent
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x21eb2d
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x21e9f9
- (BOOL)_nextTrackAction:(id)action;	// 0x21f069
- (BOOL)_playPauseAction:(id)action;	// 0x21f009
- (void)_playerStateChanged:(id)changed;	// 0x21efc5
- (BOOL)_previousTrackAction:(id)action;	// 0x21f0c9
- (void)_setNewPlayer:(id)player;	// 0x21eefd
- (id)accessibilityLabel;	// 0x21f159
- (BOOL)brEventAction:(id)action;	// 0x21ebfd
- (void)controlWasActivated;	// 0x21ed31
- (void)controlWasDeactivated;	// 0x21ed99
- (void)dealloc;	// 0x21eb6d
// declared property getter: - (BOOL)dismissWithTopMenuEvent;	// 0x21eedd
- (BOOL)isAccessibilityElement;	// 0x21f155
- (void)layoutSubcontrols;	// 0x21ee21
// declared property setter: - (void)setDismissWithTopMenuEvent:(BOOL)topMenuEvent;	// 0x21eeed
@end
