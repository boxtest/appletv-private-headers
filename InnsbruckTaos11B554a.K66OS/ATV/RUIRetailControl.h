/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface RUIRetailControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	BOOL _playbackStarted;	// 88 = 0x58
}
- (id)initWithMediaURL:(id)mediaURL;	// 0x4b65e1
- (void).cxx_destruct;	// 0x4b6ac9
- (void)_movieCued:(id)cued;	// 0x4b6b65
- (void)_playerVisualsChanged:(id)changed;	// 0x4b6b55
- (void)_updateVisuals;	// 0x4b6add
- (void)controlWasActivated;	// 0x4b67f9
- (void)controlWasDeactivated;	// 0x4b6945
- (void)dealloc;	// 0x4b678d
- (void)layoutSubcontrols;	// 0x4b69bd
@end

