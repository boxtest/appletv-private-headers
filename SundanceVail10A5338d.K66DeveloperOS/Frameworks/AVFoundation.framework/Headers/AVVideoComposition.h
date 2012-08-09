/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class AVVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
	AVVideoCompositionInternal *_videoComposition;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x3177c495; 
@property(retain) id compositor;	// G=0x3177c171; S=0x3177c191; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x3177c1ed; 
@property(readonly, assign, nonatomic) NSArray *instructions;	// G=0x3177c301; 
@property(readonly, assign, nonatomic) float renderScale;	// G=0x3177c2c1; 
@property(readonly, assign, nonatomic) CGSize renderSize;	// G=0x3177c271; 
+ (void)initialize;	// 0x3177bb8d
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x3177bb05
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x3177bb49
- (id)init;	// 0x3177bbcd
- (int)_auxiliaryTrackID;	// 0x3177c3dd
- (id)_auxiliaryTrackLayer;	// 0x3177c3b1
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x3177c37d
- (BOOL)_hasPostProcessingLayers;	// 0x3177c409
- (BOOL)_isValidReturningExceptionReason:(id *)reason;	// 0x3177c7d1
- (id)_postProcessingRootLayer;	// 0x3177c469
- (id)_postProcessingVideoLayer;	// 0x3177c43d
- (id)_serializableInstructions;	// 0x3177c50d
// declared property getter: - (id)animationTool;	// 0x3177c495
// converted property getter: - (id)compositor;	// 0x3177c171
- (id)copyWithZone:(NSZone *)zone;	// 0x3177bd39
- (void)dealloc;	// 0x3177c0a9
- (void)finalize;	// 0x3177c12d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x3177c1ed
// declared property getter: - (id)instructions;	// 0x3177c301
- (BOOL)isValidForAsset:(id)asset timeRange:(XXStruct_yD8eWC)range validationDelegate:(id)delegate;	// 0x3177c8c9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3177bf15
// declared property getter: - (float)renderScale;	// 0x3177c2c1
// declared property getter: - (CGSize)renderSize;	// 0x3177c271
- (void)setAnimationTool:(id)tool;	// 0x3177c4b5
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x3177c191
- (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x3177c231
- (void)setInstructions:(id)instructions;	// 0x3177c321
- (void)setRenderScale:(float)scale;	// 0x3177c2e1
- (void)setRenderSize:(CGSize)size;	// 0x3177c299
@end
