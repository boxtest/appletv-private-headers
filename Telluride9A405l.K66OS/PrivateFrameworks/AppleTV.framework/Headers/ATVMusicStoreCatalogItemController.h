/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class NSDictionary, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemController : BRController {
@private
	NSDictionary *_itemDictionary;	// 80 = 0x50
	BRMerchant *_merchant;	// 84 = 0x54
	BOOL _isDirty;	// 88 = 0x58
}
@property(retain) NSDictionary *itemDictionary;	// G=0x35cec691; S=0x35cec6a1; converted property
@property(readonly, retain) BRMerchant *merchant;	// G=0x35cec6e1; converted property
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x35cec4bd
- (void)augmentRelatedContentItemsFromPage:(id)page;	// 0x35cecb65
- (void)dealloc;	// 0x35cec615
- (void)fetchRelatedContent;	// 0x35cec825
- (void)fetchRelatedContentFromURL:(id)url;	// 0x35cec8c9
// converted property getter: - (id)itemDictionary;	// 0x35cec691
- (void)markAsDirty;	// 0x35cec7b5
// converted property getter: - (id)merchant;	// 0x35cec6e1
- (id)refreshURL;	// 0x35cec7c9
- (void)relatedContentLoaded:(id)loaded;	// 0x35cec7f5
- (void)relatedContentReceived:(id)received;	// 0x35cec9e5
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x35cec6a1
- (void)wasExhumed;	// 0x35cec6f1
@end

