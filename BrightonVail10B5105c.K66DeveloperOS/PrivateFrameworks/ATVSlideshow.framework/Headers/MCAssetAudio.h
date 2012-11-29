/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSMutableSet;

@interface MCAssetAudio : MCAsset {
	NSMutableSet *mSongs;	// 20 = 0x14
}
- (id)init;	// 0x32510721
- (void)demolish;	// 0x32510785
- (void)forgetSong:(id)song;	// 0x32510851
- (BOOL)isInUse;	// 0x325107d5
- (void)learnSong:(id)song;	// 0x32510831
@end
