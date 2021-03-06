/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVStoreFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVWishListFavorite : ATVStoreFavorite {
@private
	NSString *_adamID;	// 64 = 0x40
}
- (id)initWithDictionary:(id)dictionary;	// 0x32f38e55
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x32f38c2d
- (void)dealloc;	// 0x32f38ec9
- (void)encodeWithDictionary:(id)dictionary;	// 0x32f38f15
- (id)itemID;	// 0x32f38f71
- (void)remove;	// 0x32f38ff5
- (BOOL)removeUponAcquisition;	// 0x32f38f81
- (void)save;	// 0x32f38f85
@end

