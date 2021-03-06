/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h> // Unknown library

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer {
@private
	FigVideoLayerInternal *_videoLayer;	// 48 = 0x30
}
- (id)init;	// 0x36387519
- (id)initWithLayer:(id)layer;	// 0x36387601
- (void)_sendVideoLayerIsBeingServicedNotification;	// 0x363879a1
- (void)dealloc;	// 0x36387705
- (void)finalize;	// 0x363877a5
- (BOOL)isVideoLayerBeingServiced;	// 0x3638792d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x36387831
- (void)notificationBarrier;	// 0x36387971
@end

