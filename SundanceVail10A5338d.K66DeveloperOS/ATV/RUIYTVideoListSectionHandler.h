/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"
#import "RUIYTVideoPlaybackAspectDelegate.h"

@class RUIYTListDataSourceAspect, RUIYTVideoPlaybackAspect;

__attribute__((visibility("hidden")))
@interface RUIYTVideoListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 4 = 0x4
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x23e4e1; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect videoPlaybackAspect:(id)aspect;	// 0x23d60d
- (void).cxx_destruct;	// 0x23e501
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x23dcc1
- (id)itemForIndex:(id)index;	// 0x23d6b5
- (float)itemHeightForIndex:(id)index;	// 0x23dc79
- (id)itemIDForIndex:(id)index;	// 0x23db4d
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x23de41
// declared property getter: - (id)listDataSourceAspect;	// 0x23e4e1
- (BOOL)loadMoreAssetsForVideoPlaybackAspect:(id)videoPlaybackAspect;	// 0x23e22d
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0x23e02d
- (BOOL)moreAssetsFailed:(id)failed forSection:(unsigned)section;	// 0x23e17d
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback;	// 0x23e321
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x23dcc5
@end

