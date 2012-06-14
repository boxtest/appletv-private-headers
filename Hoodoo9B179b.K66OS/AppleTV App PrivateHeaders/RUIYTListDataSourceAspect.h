/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListDataSourceAspect.h"

@class NSMutableIndexSet, NSArray, BRControl, BRControllerStack, NSIndexPath, BRListView;
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
@property(retain) BRControl *defaultPreviewControl;	// G=0xa77d9; S=0xa77ed; @synthesize=_defaultPreviewControl
@property(assign, nonatomic) id<RUIYTListDataSourceAspectDelegate> delegate;	// G=0xa77b9; S=0xa6559; @synthesize=_delegate
@property(readonly, assign) BRListView *listView;	// G=0xa7751; @synthesize=_listView
@property(copy) id previewSetting;	// G=0xa7811; S=0xa7825; @synthesize=_previewSetting
@property(copy) id sectionHandlerSelecting;	// G=0xa7771; S=0xa7785; @synthesize=_sectionHandlerSelecting
@property(retain, nonatomic) NSArray *sections;	// G=0xa77a9; S=0xa656d; @synthesize=_sections
- (id)initWithListView:(id)listView controllerStack:(id)stack;	// 0xa6459
- (void).cxx_destruct;	// 0xa7849
// declared property getter: - (id)defaultPreviewControl;	// 0xa77d9
// declared property getter: - (id)delegate;	// 0xa77b9
- (void)discardPendingAction;	// 0xa70b9
- (id)indexForItemID:(id)itemID;	// 0xa67a1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xa76e9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0xa773d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa7729
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xa74e5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xa74d1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xa74bd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xa71a5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xa73a9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xa73bd
// declared property getter: - (id)listView;	// 0xa7751
- (BOOL)loadMoreItemsForSection:(unsigned)section;	// 0xa6961
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0xa6985
- (void)moreAssetsFailed:(id)failed forSection:(unsigned)section timeStamp:(id)stamp;	// 0xa6e25
- (long)numberOfSectionsInList:(id)list;	// 0xa736d
// declared property getter: - (id)previewSetting;	// 0xa7811
- (void)resolvePendingActionsForIndex:(id)index;	// 0xa70cd
// declared property getter: - (id)sectionHandlerSelecting;	// 0xa7771
// declared property getter: - (id)sections;	// 0xa77a9
- (void)selectItemAtIndex:(id)index;	// 0xa68ad
- (void)selectItemAtIndex:(id)index action:(int)action;	// 0xa6911
// declared property setter: - (void)setDefaultPreviewControl:(id)control;	// 0xa77ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xa6559
// declared property setter: - (void)setPreviewSetting:(id)setting;	// 0xa7825
// declared property setter: - (void)setSectionHandlerSelecting:(id)selecting;	// 0xa7785
// declared property setter: - (void)setSections:(id)sections;	// 0xa656d
@end

@interface RUIYTListDataSourceAspect (Private)
- (BOOL)_canLoadMoreItemsForAssetsSection:(id)assetsSection;	// 0xa7cf9
- (float)_heightForAsset:(id)asset type:(int)type;	// 0xa7905
- (id)_itemIDForItem:(id)item;	// 0xa795d
- (void)_itemSelected:(id)selected action:(int)action;	// 0xa8609
- (BOOL)_loadMoreItemsForAssetsSection:(unsigned)assetsSection count:(unsigned)count;	// 0xa8175
- (void)_loadPreviewForItem:(id)item;	// 0xa888d
- (id)_moreItemForAssetsSection:(id)assetsSection;	// 0xa7df5
- (long)_numberOfRowsInSection:(long)section;	// 0xa7b19
- (id)_resourceForKey:(id)key forSection:(id)section;	// 0xa8b15
- (void)_setSpinningRow:(id)row action:(int)action;	// 0xa8479
- (BOOL)_shouldDisplayMoreItemForAssetsSection:(id)assetsSection;	// 0xa7c7d
- (void)_showError:(id)error;	// 0xa8361
@end
