/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableIndexSet, BRControl, BRListView, NSIndexPath, BRControllerStack;
@protocol RUIYTListDataSourceAspectDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTListDataSourceAspect : XXUnknownSuperclass {
	NSMutableIndexSet *_sectionsBeingLoaded;	// 4 = 0x4
	BRControllerStack *_controllerStack;	// 8 = 0x8
	NSIndexPath *_spinningRow;	// 12 = 0xc
	int _spinningRowAction;	// 16 = 0x10
	BRListView *_listView;	// 20 = 0x14
	id _sectionHandlerSelecting;	// 24 = 0x18
	NSArray *_sections;	// 28 = 0x1c
	id<RUIYTListDataSourceAspectDelegate> _delegate;	// 32 = 0x20
	BRControl *_defaultPreviewControl;	// 36 = 0x24
	id _previewSetting;	// 40 = 0x28
}
@property(retain) BRControl *defaultPreviewControl;	// G=0x2702fd; S=0x270311; @synthesize=_defaultPreviewControl
@property(assign, nonatomic) __weak id<RUIYTListDataSourceAspectDelegate> delegate;	// G=0x2702dd; S=0x26f0b5; @synthesize=_delegate
@property(readonly, assign) BRListView *listView;	// G=0x270289; @synthesize=_listView
@property(copy) id previewSetting;	// G=0x270321; S=0x270335; @synthesize=_previewSetting
@property(copy) id sectionHandlerSelecting;	// G=0x2702a9; S=0x2702bd; @synthesize=_sectionHandlerSelecting
@property(retain, nonatomic) NSArray *sections;	// G=0x2702cd; S=0x26f0c9; @synthesize=_sections
- (id)initWithListView:(id)listView controllerStack:(id)stack;	// 0x26efb1
- (void).cxx_destruct;	// 0x270345
- (BOOL)_canLoadMoreItemsForAssetsSection:(id)assetsSection;	// 0x2707ad
- (float)_heightForAsset:(id)asset type:(int)type;	// 0x270401
- (id)_itemIDForItem:(id)item;	// 0x270451
- (void)_itemSelected:(id)selected action:(int)action;	// 0x271051
- (BOOL)_loadMoreItemsForAssetsSection:(unsigned)assetsSection count:(unsigned)count;	// 0x270c01
- (void)_loadPreviewForItem:(id)item;	// 0x2712b1
- (id)_moreItemForAssetsSection:(id)assetsSection;	// 0x2708a9
- (long)_numberOfRowsInSection:(long)section;	// 0x2705f1
- (id)_resourceForKey:(id)key forSection:(id)section;	// 0x271509
- (void)_setSpinningRow:(id)row action:(int)action;	// 0x270ef1
- (BOOL)_shouldDisplayMoreItemForAssetsSection:(id)assetsSection;	// 0x270731
- (void)_showError:(id)error;	// 0x270de5
// declared property getter: - (id)defaultPreviewControl;	// 0x2702fd
// declared property getter: - (id)delegate;	// 0x2702dd
- (void)discardPendingAction;	// 0x26fc31
- (id)indexForItemID:(id)itemID;	// 0x26f31d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x270221
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x270275
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x270261
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x270039
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x270025
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x270011
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x26fd1d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x26ff01
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x26ff15
// declared property getter: - (id)listView;	// 0x270289
- (BOOL)loadMoreItemsForSection:(unsigned)section;	// 0x26f4e5
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0x26f509
- (void)moreAssetsFailed:(id)failed forSection:(unsigned)section timeStamp:(id)stamp;	// 0x26f9a9
- (long)numberOfSectionsInList:(id)list;	// 0x26fec5
// declared property getter: - (id)previewSetting;	// 0x270321
- (void)resolvePendingActionsForIndex:(id)index;	// 0x26fc45
// declared property getter: - (id)sectionHandlerSelecting;	// 0x2702a9
// declared property getter: - (id)sections;	// 0x2702cd
- (void)selectItemAtIndex:(id)index;	// 0x26f441
- (void)selectItemAtIndex:(id)index action:(int)action;	// 0x26f495
// declared property setter: - (void)setDefaultPreviewControl:(id)control;	// 0x270311
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x26f0b5
// declared property setter: - (void)setPreviewSetting:(id)setting;	// 0x270335
// declared property setter: - (void)setSectionHandlerSelecting:(id)selecting;	// 0x2702bd
// declared property setter: - (void)setSections:(id)sections;	// 0x26f0c9
@end
