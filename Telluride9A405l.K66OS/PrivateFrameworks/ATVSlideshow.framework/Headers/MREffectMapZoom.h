/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider, NSMutableArray;

@interface MREffectMapZoom : MREffect {
	NSMutableArray *mTileProviders;	// 112 = 0x70
	MRImageProvider *mGradientProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x3352eda9
- (void)_cleanup;	// 0x3352eead
- (void)_unload;	// 0x3352ff41
- (BOOL)isLoadedForTime:(double)time;	// 0x3352effd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3352f0d5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3352f8b1
- (void)setPixelSize:(CGSize)size;	// 0x3352efa5
@end
