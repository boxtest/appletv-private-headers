/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectVignettingOverlay : MREffect {
	MRImageProvider *mVignetteProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x332ca9a9
- (void)_cleanup;	// 0x332caaa9
- (void)_unload;	// 0x332cab75
- (BOOL)isLoadedForTime:(double)time;	// 0x332cab4d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332cab6d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332cab71
- (void)setPixelSize:(CGSize)size;	// 0x332caae5
@end

