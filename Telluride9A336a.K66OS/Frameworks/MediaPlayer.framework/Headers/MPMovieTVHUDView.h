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
	unsigned _currentState;	// 48 = 0x30
	UIImageView *_playbackMode;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame;	// 0x35b30e89
- (void)_changeState;	// 0x35b31189
- (void)_fadeOut;	// 0x35b31261
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x35b3136d
- (void)animationDidStop:(id)animation;	// 0x35b31311
- (void)dealloc;	// 0x35b31119
@end

