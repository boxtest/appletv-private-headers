/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, ATVMusicStoreOtherSeasonsControlFactory;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x32f78d0d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x32f78d49
- (id)controlFactory;	// 0x32f78ec5
- (id)dataAtIndex:(long)index;	// 0x32f78e2d
- (long)dataCount;	// 0x32f78e3d
- (void)dealloc;	// 0x32f78dcd
- (id)hashForDataAtIndex:(long)index;	// 0x32f78ed5
@end
