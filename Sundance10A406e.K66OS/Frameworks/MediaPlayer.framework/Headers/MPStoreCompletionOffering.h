/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreLinkCompletionOffering, NSDictionary;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
	int _preferredStoreOfferVariant;	// 4 = 0x4
	NSDictionary *_responseCollectionDictionary;	// 8 = 0x8
	MPMediaQuery *_localItemsQuery;	// 12 = 0xc
	MPStoreCollectionCompletionOffering *_purchaseableCollectionOffering;	// 16 = 0x10
	MPStoreLinkCompletionOffering *_linkOffering;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) MPStoreLinkCompletionOffering *linkOffering;	// G=0x35d7b7d5; @synthesize=_linkOffering
@property(assign, nonatomic) int preferredStoreOfferVariant;	// G=0x35d7b7b5; S=0x35d7b74d; 
@property(retain, nonatomic) MPStoreCollectionCompletionOffering *purchaseableCollectionOffering;	// G=0x35d7b709; S=0x35d7b7c5; @synthesize=_purchaseableCollectionOffering
+ (int)defaultOfferVariant;	// 0x35d7ae71
+ (id)offeringWithCollectionResponseDictionary:(id)collectionResponseDictionary localItemsQuery:(id)query;	// 0x35d7ae81
+ (void)setDefaultOfferVariant:(int)variant;	// 0x35d7ae61
- (id)initWithCollectionResponseDictionary:(id)collectionResponseDictionary localItemsQuery:(id)query;	// 0x35d7aec1
- (id)_getPurchaseableCollectionOffering;	// 0x35d7b245
- (id)copyByInvalidatingCalculatedContent;	// 0x35d7b215
- (id)copyWithZone:(NSZone *)zone;	// 0x35d7b15d
- (void)dealloc;	// 0x35d7b0d1
// declared property getter: - (id)linkOffering;	// 0x35d7b7d5
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x35d7b7b5
// declared property getter: - (id)purchaseableCollectionOffering;	// 0x35d7b709
// declared property setter: - (void)setPreferredStoreOfferVariant:(int)variant;	// 0x35d7b74d
// declared property setter: - (void)setPurchaseableCollectionOffering:(id)offering;	// 0x35d7b7c5
@end

