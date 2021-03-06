/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls {
	UIImage *_backgroundImage;	// 180 = 0xb4
	float _requiredFrameSizeWidth;	// 184 = 0xb8
}
- (id)init;	// 0x36f32f59
- (void)_layoutVolumeSlider:(id)slider;	// 0x36f33fa5
- (void)_playbackModeDidChange;	// 0x36f341bd
- (void)dealloc;	// 0x36f33061
- (void)drawRect:(CGRect)rect;	// 0x36f330e1
- (void)layoutSubviews;	// 0x36f331b1
- (id)newVolumeSlider;	// 0x36f33a41
- (void)registerForPlayerNotifications;	// 0x36f33ea1
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x36f33ac9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x36f33149
- (void)unregisterForPlayerNotifications;	// 0x36f33f35
@end

