/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRImageProvider;

@interface MREffectModern : MREffect {
	MRCroppingSprite *mSprite;	// 116 = 0x74
	MRImageProvider *mGradientProvider;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x331a3cb9
- (void)_cleanup;	// 0x331a3de5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x331a45cd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x331a4611
- (BOOL)isAlphaFriendly;	// 0x331a3e91
- (BOOL)isNative3D;	// 0x331a3e89
- (BOOL)isOpaque;	// 0x331a3e8d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331a4571
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331a3e95
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331a3f99
- (void)renderImage:(id)image withMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x331a4639
- (void)setPixelSize:(CGSize)size;	// 0x331a3e35
@end
