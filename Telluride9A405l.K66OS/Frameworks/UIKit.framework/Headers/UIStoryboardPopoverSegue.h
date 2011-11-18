/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStoryboardSegue.h"

@class UIPopoverController, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {
@private
	UIPopoverController *_popoverController;	// 16 = 0x10
	unsigned _permittedArrowDirections;	// 20 = 0x14
	UIView *_anchorView;	// 24 = 0x18
	UIBarButtonItem *_anchorBarButtonItem;	// 28 = 0x1c
	CGRect _anchorRect;	// 32 = 0x20
}
@property(retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem *_anchorBarButtonItem;	// G=0x32ffc079; S=0x32ffc089; @synthesize
@property(assign, nonatomic, setter=_setAnchorRect:) CGRect _anchorRect;	// G=0x32ffc0ad; S=0x32ffc0d1; @synthesize
@property(retain, nonatomic, setter=_setAnchorView:) UIView *_anchorView;	// G=0x32ffc045; S=0x32ffc055; @synthesize
@property(assign, nonatomic, setter=_setPermittedArrowDirections:) unsigned _permittedArrowDirections;	// G=0x32ffc025; S=0x32ffc035; @synthesize
@property(retain, nonatomic) UIPopoverController *popoverController;	// G=0x32ffbff1; @synthesize=_popoverController
// declared property getter: - (id)_anchorBarButtonItem;	// 0x32ffc079
// declared property getter: - (CGRect)_anchorRect;	// 0x32ffc0ad
// declared property getter: - (id)_anchorView;	// 0x32ffc045
// declared property getter: - (unsigned)_permittedArrowDirections;	// 0x32ffc025
// declared property setter: - (void)_setAnchorBarButtonItem:(id)item;	// 0x32ffc089
// declared property setter: - (void)_setAnchorRect:(CGRect)rect;	// 0x32ffc0d1
// declared property setter: - (void)_setAnchorView:(id)view;	// 0x32ffc055
// declared property setter: - (void)_setPermittedArrowDirections:(unsigned)directions;	// 0x32ffc035
- (void)_setPopoverController:(id)controller;	// 0x32ffc001
- (void)dealloc;	// 0x32ffbd81
- (void)perform;	// 0x32ffbdf5
// declared property getter: - (id)popoverController;	// 0x32ffbff1
@end

