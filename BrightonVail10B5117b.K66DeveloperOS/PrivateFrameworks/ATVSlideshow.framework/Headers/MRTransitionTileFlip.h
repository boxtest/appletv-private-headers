/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableArray;

@interface MRTransitionTileFlip : MRTransition {
	NSMutableArray *mSortedTiles;	// 60 = 0x3c
	unsigned long mNumberOfTilesX;	// 64 = 0x40
	unsigned long mNumberOfTilesY;	// 68 = 0x44
	float mFlipOverlap;	// 72 = 0x48
	unsigned char mDirection;	// 76 = 0x4c
	BOOL mUseLighting;	// 77 = 0x4d
}
- (id)initWithTransitionID:(id)transitionID;	// 0x333eebd9
- (void)buildTiles;	// 0x333eed19
- (void)cleanup;	// 0x333eec6d
- (void)releaseByTransitioner:(id)transitioner;	// 0x333eecc1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333ef351
- (void)setAttributes:(id)attributes;	// 0x333ef139
@end

