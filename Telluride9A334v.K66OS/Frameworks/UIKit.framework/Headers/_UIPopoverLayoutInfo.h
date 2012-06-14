/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
@private
	UIEdgeInsets _contentInset;	// 4 = 0x4
	float _arrowHeight;	// 20 = 0x14
	CGSize _preferredContentSize;	// 24 = 0x18
	unsigned _preferredArrowDirections;	// 32 = 0x20
	CGRect _containingFrame;	// 36 = 0x24
	UIEdgeInsets _containingFrameInsets;	// 52 = 0x34
	CGRect _targetRect;	// 68 = 0x44
	BOOL _constrainToTargetRect;	// 84 = 0x54
	CGRect _frame;	// 88 = 0x58
	float _offset;	// 104 = 0x68
	unsigned _arrowDirection;	// 108 = 0x6c
	BOOL _updatesEnabled;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x30395e99; @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// G=0x30395d15; S=0x30395d25; @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x30395e45; S=0x30395e55; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x30395d85; S=0x30395da9; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x30395dc5; S=0x30395de9; @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x30395cd5; S=0x30395cf9; @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x30395e65; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x30395e89; @synthesize=_offset
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x30395d65; S=0x30395d75; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x30395d35; S=0x30395d51; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x30395e05; S=0x30395e29; @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// G=0x30395ea9; S=0x30395eb9; @synthesize=_updatesEnabled
+ (id)_observationKeys;	// 0x30394a4d
- (id)init;	// 0x30394ae5
- (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x303950a9
// declared property setter: - (void)_setUpdatesEnabled:(BOOL)enabled;	// 0x30395eb9
- (void)_updateOutputs;	// 0x30395275
// declared property getter: - (BOOL)_updatesEnabled;	// 0x30395ea9
// declared property getter: - (unsigned)arrowDirection;	// 0x30395e99
// declared property getter: - (float)arrowHeight;	// 0x30395d15
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x30395e45
// declared property getter: - (CGRect)containingFrame;	// 0x30395d85
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x30395dc5
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x30395cd5
- (id)copyWithZone:(NSZone *)zone;	// 0x30394c21
- (void)dealloc;	// 0x30394dd5
- (id)description;	// 0x30394eb5
// declared property getter: - (CGRect)frame;	// 0x30395e65
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30395ca9
// declared property getter: - (float)offset;	// 0x30395e89
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x30395d65
// declared property getter: - (CGSize)preferredContentSize;	// 0x30395d35
// declared property setter: - (void)setArrowHeight:(float)height;	// 0x30395d25
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x30395e55
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x30395da9
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x30395de9
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x30395cf9
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x30395d75
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x30395d51
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x30395e29
// declared property getter: - (CGRect)targetRect;	// 0x30395e05
@end
