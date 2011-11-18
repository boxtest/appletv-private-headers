/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlPopulator : NSObject {
@private
	unsigned _matchOrder;	// 4 = 0x4
}
@property(readonly, assign) unsigned matchOrder;	// G=0x35cf21ed; @synthesize=_matchOrder
+ (BOOL)canHandleData:(id)data;	// 0x35cefa39
- (id)init;	// 0x35cefa7d
- (float)_shelfBoxTitleHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related;	// 0x35cf2725
- (float)_shelfTitleWidthScaleForCollectionType:(id)collectionType featured:(BOOL)featured moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x35cf2885
- (float)_shelfWidthForData:(id)data;	// 0x35cf278d
- (id)buttonForData:(id)data;	// 0x35cefb29
- (float)buttonHeightForData:(id)data;	// 0x35cf1e55
- (id)coverArtURLForData:(id)data thumbnail:(BOOL)thumbnail;	// 0x35cf21fd
- (id)gridForData:(id)data;	// 0x35cf0f21
- (float)gridHeightForData:(id)data;	// 0x35cf2085
- (id)listForData:(id)data;	// 0x35cf12e1
- (float)listHeightForData:(id)data;	// 0x35cf2089
- (id)listRowForData:(id)data;	// 0x35cf159d
- (float)listRowHeightForData:(id)data;	// 0x35cf208d
- (id)mainMenuButtonForData:(id)data;	// 0x35cf0581
// declared property getter: - (unsigned)matchOrder;	// 0x35cf21ed
- (id)mediaPreviewControlForData:(id)data;	// 0x35cf1af1
- (float)mediaPreviewHeightForData:(id)data;	// 0x35cf21dd
- (id)pagedViewForData:(id)data;	// 0x35cf1e21
- (float)pagedViewHeightForData:(id)data;	// 0x35cf21e1
- (id)placeholderImageForData:(id)data;	// 0x35cf2309
- (id)placeholderImageForMenuItemData:(id)menuItemData;	// 0x35cf26a5
- (id)placeholderImageForShelfData:(id)shelfData;	// 0x35cf252d
- (id)playButtonEnabledMenuItem;	// 0x35cf2abd
- (id)shelfForData:(id)data;	// 0x35cf071d
- (float)shelfHeightForData:(id)data;	// 0x35cf1f61
@end

