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
- (id)init;	// 0x33c47cdd
- (id)initWithLayer:(id)layer;	// 0x33c47949
- (void)_sendVideoLayerIsBeingServicedNotification;	// 0x33c47a51
- (void)dealloc;	// 0x33c47c45
- (void)finalize;	// 0x33c47bc1
- (BOOL)isVideoLayerBeingServiced;	// 0x33c47aa1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x33c47ae5
- (void)notificationBarrier;	// 0x33c47a75
@end

