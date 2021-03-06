/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSCache, NSMutableArray, RUIYTListDataSourceAspect, RUIYTDocumentLoader, BRControllerStack;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableArray *_resultsBeingLoaded;	// 8 = 0x8
	NSCache *_resultsCache;	// 12 = 0xc
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 16 = 0x10
	BRControllerStack *_controllerStack;	// 20 = 0x14
}
@property(readonly, assign) BRControllerStack *controllerStack;	// G=0x26a0ed; @synthesize=_controllerStack
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x26a0cd; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect controllerStack:(id)stack;	// 0x26915d
- (void).cxx_destruct;	// 0x26a10d
- (id)_cacheItemForItem:(id)item;	// 0x26a2e9
- (id)_cachedResultsForItem:(id)item resultsFound:(BOOL *)found;	// 0x26a179
- (void)_clearCachedResultsForItem:(id)item;	// 0x26a29d
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x26a74d
- (BOOL)_loadResultsForItem:(id)item;	// 0x26a385
- (void)_setCachedResults:(id)results forItem:(id)item timeInterval:(double)interval;	// 0x26a1d5
- (void)_showError;	// 0x26a601
- (void)_showErrorWithText:(id)text;	// 0x26a63d
// declared property getter: - (id)controllerStack;	// 0x26a0ed
- (void)dealloc;	// 0x26930d
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x269ded
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x269655
- (id)itemForIndex:(id)index;	// 0x2693ad
- (id)itemIDForIndex:(id)index;	// 0x269529
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x2699ed
// declared property getter: - (id)listDataSourceAspect;	// 0x26a0cd
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x2697b1
@end

