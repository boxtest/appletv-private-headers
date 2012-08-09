/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlHeightFactory.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x1245c5
- (id)_collectionTypeForFavorite:(id)favorite;	// 0x124cfd
- (id)_menuItemForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x124801
- (id)_placeholderImageForFavorite:(id)favorite;	// 0x124c71
- (id)_previewForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x124a21
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1245fd
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1246dd
@end
