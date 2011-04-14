/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImageView;

@interface MPMovieTVHUDView : UIView {
	int _currentState;	// 44 = 0x2c
	UIImageView *_playbackMode;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame;	// 0x31d63d61
- (void)_changeState;	// 0x31d63c99
- (void)_fadeOut;	// 0x31d63bf9
- (void)animationDidStop:(id)animation;	// 0x31d63ba5
- (void)setPlaybackState:(int)state;	// 0x31d63acd
@end
