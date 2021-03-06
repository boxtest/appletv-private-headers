/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITwoSidedAlertController.h> // Unknown library
#import "UITwoSidedAlertControllerDelegate.h"

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
	NSString *_audioCategory;	// 20 = 0x14
}
- (id)initWithAudioCategory:(id)audioCategory;	// 0x33606bb9
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;	// 0x336069a1
- (id)createBackAlert;	// 0x33606a0d
- (id)createFrontAlert;	// 0x33606a3d
- (void)dealloc;	// 0x33606b71
- (void)twoSidedAlertControllerDidDismiss:(id)twoSidedAlertController;	// 0x336069d9
@end

