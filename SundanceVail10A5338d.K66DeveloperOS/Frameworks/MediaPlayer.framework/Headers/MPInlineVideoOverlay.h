/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"
#import "MediaPlayer-Structs.h"

@class MPInlineTransportControls, MPNowPlayingItemQueueInfoButton;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
	MPInlineTransportControls *_transportControls;	// 152 = 0x98
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 156 = 0x9c
	unsigned _layoutSubviewsActive : 1;	// 160 = 0xa0
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x341ada69; S=0x341adaa1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x341acc79
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x341add5d
- (void)_configureLinkButtonForCurrentItemTime;	// 0x341ad839
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x341add8d
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x341ada69
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x341ad961
- (void)dealloc;	// 0x341acd01
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x341ad999
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x341ada29
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x341ad9e9
- (void)layoutSubviews;	// 0x341acdd1
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x341ad82d
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x341adaa1
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x341adb3d
- (void)setDisabledParts:(unsigned long long)parts;	// 0x341adc79
- (void)setFrame:(CGRect)frame;	// 0x341ad7e5
- (void)setItem:(id)item;	// 0x341adae1
- (void)setVideoViewController:(id)controller;	// 0x341adccd
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x341adbd1
@end
