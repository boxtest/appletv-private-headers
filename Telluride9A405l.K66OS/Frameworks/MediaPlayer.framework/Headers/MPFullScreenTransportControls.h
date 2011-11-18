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
	UIImage *_backgroundImage;	// 128 = 0x80
	float _requiredFrameSizeWidth;	// 132 = 0x84
}
- (id)init;	// 0x33c28c6d
- (void)_layoutVolumeSlider:(id)slider;	// 0x33c29c45
- (void)_playbackModeDidChange;	// 0x33c29da5
- (void)dealloc;	// 0x33c28dd1
- (void)drawRect:(CGRect)rect;	// 0x33c28e51
- (void)layoutSubviews;	// 0x33c28f2d
- (id)newVolumeSlider;	// 0x33c29801
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x33c29889
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x33c297cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33c28eb9
@end

