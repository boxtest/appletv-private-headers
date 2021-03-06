/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMerchant, NSArray, NSMutableArray, ATVFeedPagedGridElement;

__attribute__((visibility("hidden")))
@interface ATVFeedPagedGridDataSource : XXUnknownSuperclass {
	unsigned _oldGridSelection;	// 4 = 0x4
	NSMutableArray *_grids;	// 8 = 0x8
	NSArray *_pages;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	ATVFeedPagedGridElement *_feedElement;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedPagedGridElement *feedElement;	// G=0x117265; S=0x117275; @synthesize=_feedElement
@property(readonly, assign) ATVMerchant *merchant;	// G=0x117251; @synthesize=_merchant
@property(readonly, assign) NSArray *pages;	// G=0x11723d; @synthesize=_pages
- (id)initWithFeedElement:(id)feedElement;	// 0x116b69
- (id)initWithPages:(id)pages merchant:(id)merchant;	// 0x116cc9
- (void)dealloc;	// 0x116e01
// declared property getter: - (id)feedElement;	// 0x117265
// declared property getter: - (id)merchant;	// 0x117251
- (long)pageCountForPagedView:(id)pagedView;	// 0x1170ed
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x117181
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x116e8d
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x117145
// declared property getter: - (id)pages;	// 0x11723d
// declared property setter: - (void)setFeedElement:(id)element;	// 0x117275
@end

