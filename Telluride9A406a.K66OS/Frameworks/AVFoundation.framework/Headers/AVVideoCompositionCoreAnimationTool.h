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
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x30e9fa99
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x30e9faed
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x30e9fc0d
- (int)_auxiliaryTrackID;	// 0x30e994c9
- (id)_auxiliaryTrackLayer;	// 0x30e99499
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x30e9945d
- (BOOL)_hasPostProcessingLayers;	// 0x30e994f9
- (id)_postProcessingRootLayer;	// 0x30e99535
- (id)_postProcessingVideoLayer;	// 0x30e99569
- (void)dealloc;	// 0x30e9fb85
- (void)finalize;	// 0x30e9fb41
@end

