/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : XXUnknownSuperclass {
	NSString *_storeOfferType;	// 4 = 0x4
	int _offerCategory;	// 8 = 0x8
	NSDictionary *_storeOfferInfo;	// 12 = 0xc
}
@property(readonly, assign) int offerCategory;	// G=0x1e14bd; converted property
@property(readonly, retain) NSString *storeOfferType;	// G=0x1e14ad; converted property
+ (void)_swizzlePreviewsToSD:(id)sd;	// 0x1e2291
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x1e1185
+ (id)normalizeOffersDictionary:(id)dictionary;	// 0x1e0a4d
+ (id)normalizeOffersDictionary:(id)dictionary preferHD:(BOOL)hd;	// 0x1e0a9d
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1e0d89
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary preferHD:(BOOL)hd;	// 0x1e0dd9
+ (id)priceRangeFromStoreOffers:(id)storeOffers;	// 0x1e0ffd
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1e1155
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1e0f5d
+ (id)redownloadOffersDictionary:(id)dictionary;	// 0x1e0955
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x1e0fb1
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x1e11e5
- (id)_flavorForPlaybackResolution:(int)playbackResolution;	// 0x1e2185
- (id)_storeOfferObjectForKey:(id)key;	// 0x1e21f1
- (id)_storeOfferObjectForKey:(id)key playbackResolution:(int)resolution;	// 0x1e2241
- (id)actionDisplayName;	// 0x1e1bed
- (id)dateAvailable;	// 0x1e1939
- (void)dealloc;	// 0x1e1449
- (id)dolbyDigitalLanguages;	// 0x1e1c99
- (id)downloadURL;	// 0x1e19ad
- (long)duration;	// 0x1e14e9
- (id)fileSize;	// 0x1e1609
- (BOOL)hasDateAvailable;	// 0x1e18f1
- (BOOL)hasDigitalExtras;	// 0x1e1b95
- (BOOL)hasDownload;	// 0x1e1965
- (BOOL)hasPreview;	// 0x1e19d9
- (BOOL)hasPurchase;	// 0x1e16e9
- (BOOL)hasRedownload;	// 0x1e1655
- (BOOL)hasRental;	// 0x1e1879
- (BOOL)isCMS:(BOOL *)cms;	// 0x1e1705
- (BOOL)isClosedCaptioned;	// 0x1e1a41
- (BOOL)isDolbyDigital;	// 0x1e1b4d
- (BOOL)isHD;	// 0x1e1acd
- (BOOL)isWideScreen;	// 0x1e1a89
// converted property getter: - (int)offerCategory;	// 0x1e14bd
- (id)originalPurchasePrice;	// 0x1e184d
- (id)preActionWarning;	// 0x1e1c19
- (long)previewDuration;	// 0x1e15c9
- (id)previewURL;	// 0x1e1a15
- (id)price;	// 0x1e1629
- (id)purchaseParams;	// 0x1e1791
- (id)purchasePrice;	// 0x1e1821
- (id)redownloadParams;	// 0x1e16bd
- (id)rentalParams;	// 0x1e1899
- (id)rentalPrice;	// 0x1e18c5
- (id)stereoLanguages;	// 0x1e1e15
// converted property getter: - (id)storeOfferType;	// 0x1e14ad
- (id)subtitleLanguages;	// 0x1e1f91
- (BOOL)supportsPlaybackResolution:(int)resolution;	// 0x1e14cd
- (BOOL)usesStoreDrivenFlow;	// 0x1e1c45
@end
