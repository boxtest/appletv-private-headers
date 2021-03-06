/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : XXUnknownSuperclass <BRSelectionHandler> {
	BOOL _shouldWatchNow;	// 4 = 0x4
	NSDictionary *_catalogItem;	// 8 = 0x8
}
@property(copy, nonatomic) NSDictionary *catalogItem;	// G=0x1d05c9; S=0x1d05dd; @synthesize=_catalogItem
@property(assign, nonatomic) BOOL shouldWatchNow;	// G=0x1d05ed; S=0x1d05fd; @synthesize=_shouldWatchNow
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x1d0a49
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x1d0839
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x1d162d
- (void)_playOrPauseAsset:(id)asset;	// 0x1d060d
- (void)_playOrPauseAsset:(id)asset withOptions:(id)options;	// 0x1d0621
- (void)_podcastItemSelected:(id)selected;	// 0x1d0791
- (void)_presentAcquisitionController;	// 0x1d16fd
- (void)_previewItemSelected:(id)selected;	// 0x1d06e5
- (void)_transactionConfirmedForItem:(id)item;	// 0x1d1339
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x1d08d5
- (void)_warningForActionResponse:(id)actionResponse;	// 0x1d0969
// declared property getter: - (id)catalogItem;	// 0x1d05c9
- (void)dealloc;	// 0x1cfdbd
- (BOOL)handlePlayForControl:(id)control;	// 0x1d0235
- (BOOL)handleSelectionForControl:(id)control;	// 0x1cfe39
- (BOOL)handleStoreOfferItemSelection:(id)selection;	// 0x1d0429
// declared property setter: - (void)setCatalogItem:(id)item;	// 0x1d05dd
// declared property setter: - (void)setShouldWatchNow:(BOOL)watchNow;	// 0x1d05fd
// declared property getter: - (BOOL)shouldWatchNow;	// 0x1d05ed
@end

