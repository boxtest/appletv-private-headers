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
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;	// G=0x3543ad19; S=0x3543ad29; @synthesize=_anchorBarButtonItem
@property(retain, nonatomic) UIView *anchorView;	// G=0x3543ad4d; S=0x3543ad5d; @synthesize=_anchorView
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x3543ace5; S=0x3543acf5; @synthesize=_passthroughViews
@property(assign, nonatomic) unsigned permittedArrowDirections;	// G=0x3543acc5; S=0x3543acd5; @synthesize=_permittedArrowDirections
- (id)initWithCoder:(id)coder;	// 0x3543a965
// declared property getter: - (id)anchorBarButtonItem;	// 0x3543ad19
// declared property getter: - (id)anchorView;	// 0x3543ad4d
- (void)dealloc;	// 0x3543a8f1
- (id)defaultSegueClassName;	// 0x3543ab2d
- (void)encodeWithCoder:(id)coder;	// 0x3543aa65
// declared property getter: - (id)passthroughViews;	// 0x3543ace5
// declared property getter: - (unsigned)permittedArrowDirections;	// 0x3543acc5
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x3543ab39
// declared property setter: - (void)setAnchorBarButtonItem:(id)item;	// 0x3543ad29
// declared property setter: - (void)setAnchorView:(id)view;	// 0x3543ad5d
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x3543acf5
// declared property setter: - (void)setPermittedArrowDirections:(unsigned)directions;	// 0x3543acd5
@end

