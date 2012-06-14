/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaTVSeasonMetadataProvider : ATVMusicStoreBaseMetadataProvider {
@private
	ATVSedonaCatalogItem *_sedonaItem;	// 12 = 0xc
}
+ (void)initialize;	// 0x306c458d
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x306c4559
- (id)init;	// 0x306c4541
- (id)initWithCatalogItem:(id)catalogItem;	// 0x306c46b5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x306c4509
- (void)dealloc;	// 0x306c466d
- (void)populateMetadataForControl:(id)control;	// 0x306c4459
@end
