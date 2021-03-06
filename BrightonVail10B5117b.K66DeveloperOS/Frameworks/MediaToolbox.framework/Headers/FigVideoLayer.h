/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h> // Unknown library

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer {
	FigVideoLayerInternal *_videoLayer;	// 48 = 0x30
}
- (id)init;	// 0x32117541
- (id)initWithLayer:(id)layer;	// 0x32117675
- (void)_sendVideoLayerIsBeingServicedNotification;	// 0x32117b1d
- (void)dealloc;	// 0x32117771
- (void)finalize;	// 0x32117859
- (BOOL)isVideoLayerBeingServiced;	// 0x32117a4d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x321178f9
- (void)notificationBarrier;	// 0x32117ae9
@end

