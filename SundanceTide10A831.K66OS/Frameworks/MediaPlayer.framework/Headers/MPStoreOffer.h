/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL, NSString;

@interface MPStoreOffer : NSObject {
	NSDictionary *_offerDictionary;	// 4 = 0x4
	MPStoreOffer *_regularPriceOffer;	// 8 = 0x8
	NSDictionary *_mediaAssetDictionary;	// 12 = 0xc
	unsigned long long _entityPersistentID;	// 16 = 0x10
	int _entityType;	// 24 = 0x18
	NSString *_entityTitle;	// 28 = 0x1c
	int _passType;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *actionDisplayTitle;	// G=0x36f895cd; 
@property(readonly, assign, nonatomic) NSString *buyParameters;	// G=0x36f89445; 
@property(readonly, assign, nonatomic) int buyType;	// G=0x36f88db5; 
@property(readonly, assign, nonatomic) NSString *displayPrice;	// G=0x36f89699; 
@property(readonly, assign, nonatomic) NSString *displayTitle;	// G=0x36f89499; 
@property(readonly, assign, nonatomic) unsigned long long downloadSize;	// G=0x36f897f1; 
@property(readonly, assign, nonatomic) unsigned long long entityPersistentID;	// G=0x36f898b5; @synthesize=_entityPersistentID
@property(readonly, assign, nonatomic) NSString *entityTitle;	// G=0x36f898dd; @synthesize=_entityTitle
@property(readonly, assign, nonatomic) int entityType;	// G=0x36f898cd; @synthesize=_entityType
@property(readonly, assign, nonatomic) int passType;	// G=0x36f898f1; @synthesize=_passType
@property(readonly, assign, nonatomic) double previewDuration;	// G=0x36f89861; 
@property(readonly, assign, nonatomic) NSURL *previewURL;	// G=0x36f89835; 
@property(readonly, assign, nonatomic) float price;	// G=0x36f896c5; 
@property(readonly, assign, nonatomic) NSString *regularPriceDisplayPrice;	// G=0x36f897c9; 
@property(readonly, assign, nonatomic) BOOL requiresConfirmation;	// G=0x36f89651; 
+ (id)_priceForOfferDictionary:(id)offerDictionary;	// 0x36f89175
+ (int)bestOfferVariantInOfferDictionaries:(id)offerDictionaries withPreferredVariant:(int)preferredVariant;	// 0x36f89055
+ (int)buyTypeForOfferDictionary:(id)offerDictionary;	// 0x36f89251
+ (void)getBuyOfferDictionary:(id *)dictionary regularPriceOfferDictionary:(id *)dictionary2 inOfferDictionaries:(id)offerDictionaries variant:(int)variant;	// 0x36f88fb9
+ (void)getBuyOfferDictionary:(id *)dictionary regularPriceOfferDictionary:(id *)dictionary2 inOfferDictionaries:(id)offerDictionaries variantString:(id)string;	// 0x36f88e11
+ (id)offerVariantResponseKeyForOfferVariant:(int)offerVariant;	// 0x36f88df1
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary regularPriceOfferDictionary:(id)dictionary passType:(int)type entityType:(int)type4 persistentID:(unsigned long long)anId title:(id)title;	// 0x36f88bd9
- (BOOL)_isBuy;	// 0x36f893d5
// declared property getter: - (id)actionDisplayTitle;	// 0x36f895cd
// declared property getter: - (id)buyParameters;	// 0x36f89445
// declared property getter: - (int)buyType;	// 0x36f88db5
- (id)buyURL;	// 0x36f893f1
- (void)dealloc;	// 0x36f88d29
// declared property getter: - (id)displayPrice;	// 0x36f89699
// declared property getter: - (id)displayTitle;	// 0x36f89499
// declared property getter: - (unsigned long long)downloadSize;	// 0x36f897f1
// declared property getter: - (unsigned long long)entityPersistentID;	// 0x36f898b5
// declared property getter: - (id)entityTitle;	// 0x36f898dd
// declared property getter: - (int)entityType;	// 0x36f898cd
// declared property getter: - (int)passType;	// 0x36f898f1
// declared property getter: - (double)previewDuration;	// 0x36f89861
// declared property getter: - (id)previewURL;	// 0x36f89835
// declared property getter: - (float)price;	// 0x36f896c5
// declared property getter: - (id)regularPriceDisplayPrice;	// 0x36f897c9
// declared property getter: - (BOOL)requiresConfirmation;	// 0x36f89651
- (id)storeOfferDictionary;	// 0x36f898a5
@end
