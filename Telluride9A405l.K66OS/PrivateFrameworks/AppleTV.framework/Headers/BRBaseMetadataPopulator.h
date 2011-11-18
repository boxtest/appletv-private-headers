/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMetadataPopulator.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : NSObject <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x35e74dfd
- (id)axMetadataFromAsset:(id)asset;	// 0x35e748a5
- (id)copyrightForAsset:(id)asset;	// 0x35e74b41
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x35e74b95
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x35e74cdd
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x35e74b45
- (id)ratingForAsset:(id)asset;	// 0x35e74a19
- (id)starRatingForAsset:(id)asset;	// 0x35e74a61
- (id)summaryForAsset:(id)asset;	// 0x35e74aa9
- (id)titleForAsset:(id)asset;	// 0x35e749d1
@end

