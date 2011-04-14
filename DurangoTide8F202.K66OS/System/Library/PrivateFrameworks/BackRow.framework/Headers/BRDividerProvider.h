/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class BRDividerControl;

@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x328fdeb9; S=0x328fe281; converted property
+ (id)providerWithProvider:(id)provider;	// 0x328fe389
- (id)initWithProvider:(id)provider;	// 0x328fe451
- (void)_providerDataSetChanged:(id)changed;	// 0x328fe025
- (void)_providerItemsModified:(id)modified;	// 0x328fe07d
- (id)_shiftRangesDown:(id)down;	// 0x328fe531
- (BOOL)_shouldShowDivider;	// 0x328fe0e5
- (void)_updateTopDividerControl;	// 0x328fe131
- (id)accessibilityLabel;	// 0x328fe005
- (void)addDividerWithLabel:(id)label;	// 0x328fe371
- (void)addDividerWithLabel:(id)label andOrientation:(int)orientation;	// 0x328fe2e1
- (id)controlFactory;	// 0x328fdee9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x328fdfad
- (id)dataAtIndex:(long)index;	// 0x328fe205
- (long)dataCount;	// 0x328fe249
- (void)dealloc;	// 0x328fe3cd
- (id)divider;	// 0x328fded9
// converted property getter: - (BOOL)dividerHidden;	// 0x328fdeb9
- (BOOL)dividerVisible;	// 0x328fdec9
- (id)hashForDataAtIndex:(long)index;	// 0x328fe1c9
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x328fdeed
- (id)provider;	// 0x328fdea9
- (void)removeDivider;	// 0x328fe2a9
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x328fe281
@end
