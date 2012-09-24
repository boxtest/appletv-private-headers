/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIAlertView.h> // Unknown library
#import "UIModalViewDelegate.h"

@class NSString;

@interface MPVolumeAlertView : UIAlertView <UIModalViewDelegate> {
	NSString *_volumeAudioCategory;	// 192 = 0xc0
}
- (void)dealloc;	// 0x35cf503d
- (void)layout;	// 0x35cf51bd
- (void)setVolumeAudioCategory:(id)category;	// 0x35cf5155
- (id)volumeView;	// 0x35cf5089
@end
