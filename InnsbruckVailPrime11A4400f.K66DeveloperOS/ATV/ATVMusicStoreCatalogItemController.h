/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemController : BRController {
	NSDictionary *_itemDictionary;	// 100 = 0x64
	BRMerchant *_merchant;	// 104 = 0x68
	BOOL _isDirty;	// 108 = 0x6c
}
@property(retain) NSDictionary *itemDictionary;	// G=0x1c3bb1; S=0x1c3bc5; converted property
@property(readonly, retain) BRMerchant *merchant;	// G=0x1c3bf9; converted property
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1c38b1
- (void).cxx_destruct;	// 0x1c3da1
- (void)_authenticationStatusChanged:(id)changed;	// 0x1c3e35
- (void)_handleWindowMaxBoundsChanged;	// 0x1c3c5d
- (void)_markAsDirtyAndRefreshIfActive;	// 0x1c3dd5
- (void)_purchaseAcquired:(id)acquired;	// 0x1c3ec5
- (void)_refreshPage;	// 0x1c3cb1
- (void)_rentalAcquired:(id)acquired;	// 0x1c3ed5
- (void)augmentRelatedContentItemsFromPage:(id)page;	// 0x1c4305
- (void)dealloc;	// 0x1c3b45
- (void)fetchRelatedContent;	// 0x1c3f15
- (void)fetchRelatedContentFromURL:(id)url;	// 0x1c3fe9
// converted property getter: - (id)itemDictionary;	// 0x1c3bb1
- (void)markAsDirty;	// 0x1c3c6d
// converted property getter: - (id)merchant;	// 0x1c3bf9
- (id)refreshURL;	// 0x1c3c81
- (void)relatedContentLoaded:(id)loaded;	// 0x1c3ee5
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x1c3bc5
- (void)wasExhumed;	// 0x1c3c0d
@end

