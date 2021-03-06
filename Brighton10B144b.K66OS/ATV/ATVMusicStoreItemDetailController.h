/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreCatalogItemController.h"

@class ATVDataQuery, BRDetailedMediaControl, BRScrollControl, ATVDataItem, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
	BRScrollControl *_scrollControl;	// 112 = 0x70
	BRDetailedMediaControl *_detailedControl;	// 116 = 0x74
	ATVDataQuery *_rentalQuery;	// 120 = 0x78
	ATVDataItem *_rentalItem;	// 124 = 0x7c
	NSTimer *_expiryInfoTimer;	// 128 = 0x80
	BOOL _isPurchased;	// 132 = 0x84
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x1fd6ad; converted property
@property(retain) id itemDictionary;	// G=0x1fd5a1; S=0x1fd6bd; converted property
- (id)init;	// 0x1fd351
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1fd395
- (void)_cacheManagerStateChanged:(id)changed;	// 0x1fe621
- (void)_checkIfAlreadyRented;	// 0x1fe631
- (BOOL)_checkIfPurchased;	// 0x1fe35d
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x1fe199
- (id)_displayableItemAfter:(id)after;	// 0x1fe171
- (id)_displayableItemBefore:(id)before;	// 0x1fe185
- (void)_expiryInfoTimerFired:(id)fired;	// 0x1fecd1
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x1fdcb9
- (void)_layoutControls;	// 0x1fde99
- (void)_nextItemSelected;	// 0x1fd77d
- (void)_nextItemSelected:(id)selected;	// 0x1fe151
- (void)_previousItemSelected;	// 0x1fd7c9
- (void)_previousItemSelected:(id)selected;	// 0x1fe161
- (void)_relatedContentControlCreated:(id)created;	// 0x1fda79
- (void)_rentalQueryComplete;	// 0x1fe859
- (void)_setCopyrightText;	// 0x1fd999
- (void)_setupDetailedControl;	// 0x1fd815
- (void)_startExpiryInfoTimer;	// 0x1febf5
- (void)_stopExpiryInfoTimer;	// 0x1feca5
- (void)_updateExpiryInfo;	// 0x1fe9b5
- (void)_updateFocus;	// 0x1fe08d
- (void)_updatePurchasedLoadingText;	// 0x1fe3d5
- (void)controlWasActivated;	// 0x1fd5e5
- (void)controlWasDeactivated;	// 0x1fd66d
- (void)dealloc;	// 0x1fd4d5
// converted property getter: - (id)detailedControl;	// 0x1fd6ad
// converted property getter: - (id)itemDictionary;	// 0x1fd5a1
- (void)relatedContentLoaded:(id)loaded;	// 0x1fd9f5
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x1fd6bd
@end

