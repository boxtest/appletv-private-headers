/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import <UIAlertView.h> // Unknown library

@class NSArray, MPAudioDeviceController;

@interface MPAudioRoutingPicker : UIAlertView <UITableViewDataSource, UITableViewDelegate> {
	MPAudioDeviceController *_audioDeviceController;	// 156 = 0x9c
	BOOL _ignoringInteractionEvents;	// 160 = 0xa0
	NSArray *_routes;	// 164 = 0xa4
}
- (id)initWithAVPlayer:(id)avplayer;	// 0x3014f4dd
- (BOOL)_pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x3014fd0d
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x3014f6ed
- (void)dealloc;	// 0x3014f689
- (BOOL)requiresPortraitOrientation;	// 0x3014fd09
- (void)setAVPlayer:(id)player;	// 0x3014f63d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3014f7c1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3014f8e5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3014f74d
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x3014f8a1
- (void)willMoveToSuperview:(id)superview;	// 0x3014fc6d
@end
