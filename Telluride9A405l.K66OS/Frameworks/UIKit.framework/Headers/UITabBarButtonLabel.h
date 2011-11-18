/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class UITextRenderingAttributes, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel {
@private
	float _boundsWidth;	// 108 = 0x6c
	UITextRenderingAttributes *_attributes;	// 112 = 0x70
	_UITabBarItemAppearanceStorage *_appearanceStorage;	// 116 = 0x74
	BOOL _isSelected;	// 120 = 0x78
}
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32eed76d
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32eed771
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x32eed9d1
- (id)_attributes;	// 0x32d0ea71
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32eed979
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x32eed989
- (void)dealloc;	// 0x32eed70d
- (void)setSelected:(BOOL)selected;	// 0x32d10309
- (void)sizeToFitBounds:(CGRect)fitBounds;	// 0x32d12a25
- (void)updateTextColorsForSelection;	// 0x32d0e879
@end

