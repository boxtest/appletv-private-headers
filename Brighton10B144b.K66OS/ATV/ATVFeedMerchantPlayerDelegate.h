/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTransportDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRPlayerDelegate.h"
#import "AppleTV-Structs.h"

@class ATVFeedMerchant, NSSet;

__attribute__((visibility("hidden")))
@interface ATVFeedMerchantPlayerDelegate : XXUnknownSuperclass <BRPlayerDelegate, BRTransportDataProvider> {
	ATVFeedMerchant *_merchant;	// 4 = 0x4
	NSSet *functions;	// 8 = 0x8
}
@property(retain, nonatomic) NSSet *functions;	// G=0x16f5dd; S=0x16f5ed; @synthesize
@property(assign, nonatomic) ATVFeedMerchant *merchant;	// G=0x16f5bd; S=0x16f5cd; @synthesize=_merchant
+ (void)initialize;	// 0x16e6a9
- (id)initWithFeedMerchant:(id)feedMerchant;	// 0x16e73d
- (void)_hifreqPlayerProgressChanged:(id)changed;	// 0x16f5fd
- (void)_playerProgressChanged:(id)changed;	// 0x16f645
- (BRTimeRange)bufferedRange;	// 0x16eef1
- (float)bufferingProgress;	// 0x16ef49
- (id)chapterAtIndex:(long)index;	// 0x16f08d
- (id)chapterGroupAtIndex:(long)index;	// 0x16f31d
- (long)chapterGroupCount;	// 0x16f295
- (long)chapterGroupIndex;	// 0x16f2d9
- (id)chapters;	// 0x16efd5
- (long)currentChapterIndex;	// 0x16f139
- (long)currentInterstitialIndex;	// 0x16f4e5
- (void)dealloc;	// 0x16e8a5
- (double)duration;	// 0x16edb9
- (double)elapsedTime;	// 0x16ee59
// declared property getter: - (id)functions;	// 0x16f5dd
- (id)interstitialTimes;	// 0x16f365
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x16ef8d
// declared property getter: - (id)merchant;	// 0x16f5bd
- (id)playbackDate;	// 0x16f251
- (BOOL)player:(id)player shouldHandleEvent:(id)event playerTime:(double)time;	// 0x16ea1d
- (double)player:(id)player willSeekToTime:(double)time;	// 0x16e929
- (void)playerDateDidChange:(id)playerDate;	// 0x16ed05
- (int)playerState;	// 0x16ed75
- (void)playerTimeDidChange:(double)playerTime;	// 0x16ec39
// declared property setter: - (void)setFunctions:(id)functions;	// 0x16f5ed
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x16f5cd
- (BOOL)supportsBufferedRange;	// 0x16eead
- (double)virtualChapterMark;	// 0x16f1fd
@end
