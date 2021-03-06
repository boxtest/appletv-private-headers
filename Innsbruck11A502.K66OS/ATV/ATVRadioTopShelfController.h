/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTopShelfController.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVRadioStationsChangeObserver.h"

@class ATVRadioStationsDataSource, BRTopShelfView;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface ATVRadioTopShelfController : XXUnknownSuperclass <ATVRadioStationsChangeObserver, BRTopShelfController> {
	ATVRadioStationsDataSource *_dataSource;	// 4 = 0x4
	BRTopShelfView *_topShelfView;	// 8 = 0x8
	id<BRProvider> _nowPlayingProvider;	// 12 = 0xc
}
@property(retain, nonatomic) ATVRadioStationsDataSource *dataSource;	// G=0x42b5fd; S=0x42b60d; @synthesize=_dataSource
@property(retain, nonatomic) id<BRProvider> nowPlayingProvider;	// G=0x42b66d; S=0x42b67d; @synthesize=_nowPlayingProvider
@property(retain, nonatomic) BRTopShelfView *topShelfView;	// G=0x42b635; S=0x42b645; @synthesize=_topShelfView
- (id)init;	// 0x42a011
- (void).cxx_destruct;	// 0x42b691
- (void)_configureTopShelfView:(id)view;	// 0x42a365
- (void)_dataClientStatusDidChange:(id)_dataClientStatus;	// 0x42a9c9
- (id)_featuredStationAtIndex:(unsigned)index;	// 0x42a5a1
- (unsigned)_indexOfFeaturedStationWithHash:(id)hash;	// 0x42a629
- (unsigned)_indexOfPersonalStationWithHash:(id)hash;	// 0x42a7b5
- (void)_nowPlayingProviderUpdated:(id)updated;	// 0x42a491
- (unsigned)_numberOfFeaturedStations;	// 0x42a5ed
- (unsigned)_numberOfPersonalStations;	// 0x42a775
- (unsigned)_numberOfSections;	// 0x42a4a5
- (id)_personalStationAtIndex:(unsigned)index;	// 0x42a729
- (void)_reloadShelf;	// 0x42a425
- (unsigned)_sectionAtIndex:(unsigned)index;	// 0x42a4a1
- (id)_stationForItemAtIndexPath:(id)indexPath;	// 0x42a921
- (id)_titleForSectionAtIndex:(unsigned)index;	// 0x42a4a9
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x42b3a9
// declared property getter: - (id)dataSource;	// 0x42b5fd
- (void)dealloc;	// 0x42a2f9
- (id)featuredStations;	// 0x42a559
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x42b39d
- (id)mainMenuShelfView;	// 0x42b3b5
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x42b341
- (void)mediaShelf:(id)shelf didPlayItemAtIndexPath:(id)indexPath;	// 0x42b36d
- (void)mediaShelf:(id)shelf didSelectItemAtIndexPath:(id)indexPath;	// 0x42b155
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x42b06d
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x42aa59
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x42afc1
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x42acbd
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x42ad41
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x42add9
// declared property getter: - (id)nowPlayingProvider;	// 0x42b66d
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x42aca9
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x42acad
- (id)personalStations;	// 0x42a511
- (void)radioStationsDataSourceDidChangeStations:(id)radioStationsDataSource;	// 0x42aa09
- (void)radioStationsDataSourceDidChangeStatus:(id)radioStationsDataSource;	// 0x42aa19
- (void)refresh;	// 0x42b52d
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x42b531
// declared property setter: - (void)setDataSource:(id)source;	// 0x42b60d
// declared property setter: - (void)setNowPlayingProvider:(id)provider;	// 0x42b67d
// declared property setter: - (void)setTopShelfView:(id)view;	// 0x42b645
// declared property getter: - (id)topShelfView;	// 0x42b635
- (void)willBeShown;	// 0x42b535
@end

