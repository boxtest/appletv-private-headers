/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : NSObject {
@private
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x35d32a45
- (id)init;	// 0x35d32b31
- (id)initWithStoreItem:(id)storeItem;	// 0x35d32b35
- (long)_itemsPerPage;	// 0x35d3382d
- (long)_pageCount;	// 0x35d33831
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x35d330fd
- (void)dealloc;	// 0x35d32e19
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x35d33275
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x35d33821
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x35d3330d
- (long)numberOfItemsInGrid:(id)grid;	// 0x35d33279
- (long)pageCountForPagedView:(id)pagedView;	// 0x35d330ed
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x35d33271
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x35d32f75
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x35d33101
- (void)toggleCursorMode:(id)mode;	// 0x35d32ebd
- (id)view;	// 0x35d32f71
@end

