/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIYTListDataSourceAspect, RUIYTDocumentLoader, BRControllerStack, NSCache, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableArray *_resultsBeingLoaded;	// 8 = 0x8
	NSCache *_resultsCache;	// 12 = 0xc
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 16 = 0x10
	BRControllerStack *_controllerStack;	// 20 = 0x14
}
@property(readonly, assign) BRControllerStack *controllerStack;	// G=0x263915; @synthesize=_controllerStack
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x2638f5; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect controllerStack:(id)stack;	// 0x262985
- (void).cxx_destruct;	// 0x263935
- (id)_cacheItemForItem:(id)item;	// 0x263b11
- (id)_cachedResultsForItem:(id)item resultsFound:(BOOL *)found;	// 0x2639a1
- (void)_clearCachedResultsForItem:(id)item;	// 0x263ac5
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x263f75
- (BOOL)_loadResultsForItem:(id)item;	// 0x263bad
- (void)_setCachedResults:(id)results forItem:(id)item timeInterval:(double)interval;	// 0x2639fd
- (void)_showError;	// 0x263e29
- (void)_showErrorWithText:(id)text;	// 0x263e65
// declared property getter: - (id)controllerStack;	// 0x263915
- (void)dealloc;	// 0x262b35
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x263615
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x262e7d
- (id)itemForIndex:(id)index;	// 0x262bd5
- (id)itemIDForIndex:(id)index;	// 0x262d51
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x263215
// declared property getter: - (id)listDataSourceAspect;	// 0x2638f5
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x262fd9
@end

