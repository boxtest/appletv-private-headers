/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class UIView, UIBarButtonItem, NSArray;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {
@private
	unsigned _permittedArrowDirections;	// 20 = 0x14
	NSArray *_passthroughViews;	// 24 = 0x18
	UIBarButtonItem *_anchorBarButtonItem;	// 28 = 0x1c
	UIView *_anchorView;	// 32 = 0x20
}
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;	// G=0x32ffbd19; S=0x32ffbd29; @synthesize=_anchorBarButtonItem
@property(retain, nonatomic) UIView *anchorView;	// G=0x32ffbd4d; S=0x32ffbd5d; @synthesize=_anchorView
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x32ffbce5; S=0x32ffbcf5; @synthesize=_passthroughViews
@property(assign, nonatomic) unsigned permittedArrowDirections;	// G=0x32ffbcc5; S=0x32ffbcd5; @synthesize=_permittedArrowDirections
- (id)initWithCoder:(id)coder;	// 0x32ffb965
// declared property getter: - (id)anchorBarButtonItem;	// 0x32ffbd19
// declared property getter: - (id)anchorView;	// 0x32ffbd4d
- (void)dealloc;	// 0x32ffb8f1
- (id)defaultSegueClassName;	// 0x32ffbb2d
- (void)encodeWithCoder:(id)coder;	// 0x32ffba65
// declared property getter: - (id)passthroughViews;	// 0x32ffbce5
// declared property getter: - (unsigned)permittedArrowDirections;	// 0x32ffbcc5
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x32ffbb39
// declared property setter: - (void)setAnchorBarButtonItem:(id)item;	// 0x32ffbd29
// declared property setter: - (void)setAnchorView:(id)view;	// 0x32ffbd5d
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x32ffbcf5
// declared property setter: - (void)setPermittedArrowDirections:(unsigned)directions;	// 0x32ffbcd5
@end

