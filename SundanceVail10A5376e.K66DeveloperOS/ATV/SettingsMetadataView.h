/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface SettingsMetadataView : BRControl {
	BOOL _wrapValueText;	// 84 = 0x54
	float _horizontalPadding;	// 88 = 0x58
}
@property(assign, nonatomic) float horizontalPadding;	// G=0x90919; S=0x90929; @synthesize=_horizontalPadding
@property(assign) BOOL wrapValueText;	// G=0x908e9; S=0x90901; @synthesize=_wrapValueText
- (id)init;	// 0x8fef9
- (id)accessibilityLabel;	// 0x90751
// declared property getter: - (float)horizontalPadding;	// 0x90919
- (BOOL)isAccessibilityElement;	// 0x9074d
- (void)layoutSubcontrols;	// 0x902c9
// declared property setter: - (void)setHorizontalPadding:(float)padding;	// 0x90929
- (void)setValues:(id)values forLabels:(id)labels;	// 0x8ff91
// declared property setter: - (void)setWrapValueText:(BOOL)text;	// 0x90901
// declared property getter: - (BOOL)wrapValueText;	// 0x908e9
@end

