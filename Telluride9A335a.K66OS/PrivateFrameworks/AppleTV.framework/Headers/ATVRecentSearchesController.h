/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class ATVSearchAgent, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 156 = 0x9c
	ATVSearchAgent *_searchAgent;	// 160 = 0xa0
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x340ff5b9
- (void)_populateRecentSearchesList;	// 0x340ff8c9
- (void)dealloc;	// 0x340ff661
- (float)heightForRow:(long)row;	// 0x340ff869
- (long)itemCount;	// 0x340ff7f1
- (id)itemForRow:(long)row;	// 0x340ff799
- (void)itemSelected:(long)selected;	// 0x340ff6c1
- (id)previewControlForItem:(long)item;	// 0x340ff8c5
- (BOOL)rowSelectable:(long)selectable;	// 0x340ff8c1
- (id)titleForRow:(long)row;	// 0x340ff811
@end

