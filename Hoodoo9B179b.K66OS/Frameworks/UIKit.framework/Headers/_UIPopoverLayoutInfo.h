/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


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
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x3322c259; @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// G=0x3322c0d5; S=0x3322c0e5; @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x3322c205; S=0x3322c215; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x3322c145; S=0x3322c169; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x3322c185; S=0x3322c1a9; @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x3322c095; S=0x3322c0b9; @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x3322c225; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x3322c249; @synthesize=_offset
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x3322c125; S=0x3322c135; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x3322c0f5; S=0x3322c111; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x3322c1c5; S=0x3322c1e9; @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// G=0x3322c269; S=0x3322c279; @synthesize=_updatesEnabled
+ (id)_observationKeys;	// 0x3322ae0d
- (id)init;	// 0x3322aea5
- (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x3322b469
// declared property setter: - (void)_setUpdatesEnabled:(BOOL)enabled;	// 0x3322c279
- (void)_updateOutputs;	// 0x3322b635
// declared property getter: - (BOOL)_updatesEnabled;	// 0x3322c269
// declared property getter: - (unsigned)arrowDirection;	// 0x3322c259
// declared property getter: - (float)arrowHeight;	// 0x3322c0d5
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x3322c205
// declared property getter: - (CGRect)containingFrame;	// 0x3322c145
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x3322c185
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x3322c095
- (id)copyWithZone:(NSZone *)zone;	// 0x3322afe1
- (void)dealloc;	// 0x3322b195
- (id)description;	// 0x3322b275
// declared property getter: - (CGRect)frame;	// 0x3322c225
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3322c069
// declared property getter: - (float)offset;	// 0x3322c249
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x3322c125
// declared property getter: - (CGSize)preferredContentSize;	// 0x3322c0f5
// declared property setter: - (void)setArrowHeight:(float)height;	// 0x3322c0e5
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x3322c215
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x3322c169
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x3322c1a9
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x3322c0b9
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x3322c135
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x3322c111
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x3322c1e9
// declared property getter: - (CGRect)targetRect;	// 0x3322c1c5
@end
