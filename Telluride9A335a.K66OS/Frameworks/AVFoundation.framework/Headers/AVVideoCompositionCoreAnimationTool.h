/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
@private
	AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 4 = 0x4
}
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x32328a99
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x32328aed
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x32328c0d
- (int)_auxiliaryTrackID;	// 0x323224c9
- (id)_auxiliaryTrackLayer;	// 0x32322499
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x3232245d
- (BOOL)_hasPostProcessingLayers;	// 0x323224f9
- (id)_postProcessingRootLayer;	// 0x32322535
- (id)_postProcessingVideoLayer;	// 0x32322569
- (void)dealloc;	// 0x32328b85
- (void)finalize;	// 0x32328b41
@end
