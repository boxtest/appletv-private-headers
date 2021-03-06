/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectVignettingOverlay : MREffect {
	MRImageProvider *mVignetteProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x34355671
- (void)_cleanup;	// 0x34355771
- (void)_unload;	// 0x34355815
- (BOOL)isLoadedForTime:(double)time;	// 0x34355809
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3435580d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34355811
- (void)setPixelSize:(CGSize)size;	// 0x343557b1
@end

