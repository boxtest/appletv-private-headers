/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlPopulator : XXUnknownSuperclass {
	unsigned _matchOrder;	// 4 = 0x4
}
@property(readonly, assign) unsigned matchOrder;	// G=0x1fbd55; @synthesize=_matchOrder
+ (BOOL)canHandleData:(id)data;	// 0x1f98c9
- (id)init;	// 0x1f9909
- (float)_shelfBoxTitleHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related;	// 0x1fc249
- (float)_shelfTitleWidthScaleForCollectionType:(id)collectionType featured:(BOOL)featured moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x1fc3b1
- (float)_shelfWidthForData:(id)data;	// 0x1fc2b1
- (id)buttonForData:(id)data;	// 0x1f99c1
- (float)buttonHeightForData:(id)data;	// 0x1fb9c9
- (id)coverArtURLForData:(id)data thumbnail:(BOOL)thumbnail;	// 0x1fbd69
- (id)gridForData:(id)data;	// 0x1faad1
- (float)gridHeightForData:(id)data;	// 0x1fbbf5
- (id)listForData:(id)data;	// 0x1fae85
- (float)listHeightForData:(id)data;	// 0x1fbbf9
- (id)listRowForData:(id)data;	// 0x1fb135
- (float)listRowHeightForData:(id)data;	// 0x1fbbfd
- (id)mainMenuButtonForData:(id)data;	// 0x1fa155
// declared property getter: - (unsigned)matchOrder;	// 0x1fbd55
- (id)mediaPreviewControlForData:(id)data;	// 0x1fb695
- (float)mediaPreviewHeightForData:(id)data;	// 0x1fbd45
- (id)pagedViewForData:(id)data;	// 0x1fb995
- (float)pagedViewHeightForData:(id)data;	// 0x1fbd49
- (id)placeholderImageForData:(id)data;	// 0x1fbe75
- (id)placeholderImageForMenuItemData:(id)menuItemData;	// 0x1fc1c9
- (id)placeholderImageForShelfData:(id)shelfData;	// 0x1fc091
- (id)playButtonEnabledMenuItem;	// 0x1fc601
- (id)shelfForData:(id)data;	// 0x1fa2f1
- (float)shelfHeightForData:(id)data;	// 0x1fbad9
@end

