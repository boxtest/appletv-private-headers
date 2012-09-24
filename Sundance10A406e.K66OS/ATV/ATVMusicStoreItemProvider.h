/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSMutableDictionary, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
	BOOL _isAnyItemBlueDotted;	// 13 = 0xd
	NSMutableDictionary *_watchedStatesForItems;	// 16 = 0x10
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x1ec0bd; S=0x1ec05d; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1ebe0d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1ebe49
- (id)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x1ec901
- (void)_checkForBlueDottedItems;	// 0x1ecb05
- (void)_resetBlueDottedItems;	// 0x1ecdc5
- (id)accessibilityLabel;	// 0x1ec059
- (id)controlFactory;	// 0x1ec0cd
- (id)dataAtIndex:(long)index;	// 0x1ec109
- (long)dataCount;	// 0x1ec0e9
- (void)dealloc;	// 0x1ebfb5
- (id)hashForDataAtIndex:(long)index;	// 0x1ec241
// converted property getter: - (BOOL)isOrderReversed;	// 0x1ec0bd
- (void)loadSupplementalItemsFromURL:(id)url;	// 0x1ec469
- (void)moreItemSelected:(id)selected;	// 0x1ec3a9
- (void)registerMoreItem;	// 0x1ec2b5
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x1ec05d
- (void)supplementalItemsLoaded:(id)loaded;	// 0x1ec6b5
@end
