/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemProviderFactory : XXUnknownSuperclass {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSDictionary *_actionItems;	// 8 = 0x8
	NSDictionary *_dateItems;	// 12 = 0xc
	BOOL _purchased;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *actionItems;	// G=0x1db269; converted property
@property(assign, nonatomic) BOOL purchased;	// G=0x1dbc11; S=0x1dbc21; @synthesize=_purchased
+ (id)providerFactoryWithCatalogItem:(id)catalogItem;	// 0x1db16d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1db1a9
- (id)_actionButtonProviders;	// 0x1dd08d
- (id)_decomposeDateAvailableStoreOffers;	// 0x1dc7f9
- (id)_decomposeStoreOffers;	// 0x1dbc31
- (id)_initWithCatalogItem:(id)catalogItem;	// 0x1db06d
- (id)_itemDetailWishListProvider;	// 0x1dce71
- (id)_largestSizeInCollection;	// 0x1dcb29
- (id)_metadataProviderWithAbbreviatedForm:(BOOL)abbreviatedForm;	// 0x1dcca5
- (id)_storeOfferMetadataProvider;	// 0x1dcdb1
- (id)abbreviatedMetadataProvider;	// 0x1db3c9
// converted property getter: - (id)actionItems;	// 0x1db269
- (id)actionProviders;	// 0x1db5a9
- (id)copyrightProvider;	// 0x1db7c5
- (id)dateAvailableProvider;	// 0x1db43d
- (void)dealloc;	// 0x1db1f1
- (id)imageProxy;	// 0x1db295
- (id)itemDetailMoreInfoProvider;	// 0x1dba7d
- (id)listProviders;	// 0x1db8ad
- (id)metadataProvider;	// 0x1db3b5
- (id)moreInfoProvider;	// 0x1db3dd
- (id)previewBrowserProvider;	// 0x1dba79
// declared property getter: - (BOOL)purchased;	// 0x1dbc11
- (id)relatedProvider;	// 0x1db881
- (id)rentalActionProviders;	// 0x1db705
// declared property setter: - (void)setPurchased:(BOOL)purchased;	// 0x1dbc21
- (id)storeOffersProvider;	// 0x1db409
- (id)storeOffersSansPreviewsProvider;	// 0x1db471
@end

