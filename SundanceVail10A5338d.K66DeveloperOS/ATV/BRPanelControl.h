/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRPanelControl : BRControl {
	BRControl *_background;	// 80 = 0x50
	int _mode;	// 84 = 0x54
	float _nonAxisAlignment;	// 88 = 0x58
	float _verticalSpacing;	// 92 = 0x5c
	float _verticalMargin;	// 96 = 0x60
	float _horizontalSpacing;	// 100 = 0x64
	float _horizontalMargin;	// 104 = 0x68
}
@property(retain) id backgroundControl;	// G=0x2ce8ed; S=0x2ce87d; converted property
@property(assign) float horizontalMargin;	// G=0x2cec61; S=0x2cec29; converted property
@property(assign) float horizontalSpacing;	// G=0x2cea0d; S=0x2ce9d5; converted property
@property(assign) float nonAxisAlignment;	// G=0x2ce935; S=0x2ce8fd; converted property
@property(assign) int panelMode;	// G=0x2ce86d; S=0x2ce845; converted property
@property(assign) float verticalMargin;	// G=0x2ce9c5; S=0x2ce98d; converted property
@property(assign) float verticalSpacing;	// G=0x2ce97d; S=0x2ce945; converted property
- (id)init;	// 0x2ce7e9
- (CGRect)_marginedFrameForFrame:(CGRect)frame screenRes:(CGSize)res;	// 0x2cf9a5
- (void)_performFillRightToLeft:(id)left;	// 0x2cf619
- (void)_performFillTopToBottom:(id)bottom;	// 0x2cf7c9
- (CGSize)_performFlowRightToLeft:(id)left inBounds:(CGSize)bounds setFrame:(BOOL)frame;	// 0x2cf1a5
- (CGSize)_performFlowTopToBottom:(id)bottom inBounds:(CGSize)bounds setFrame:(BOOL)frame;	// 0x2cf3b1
- (id)accessibilityLabel;	// 0x2cfa41
// converted property getter: - (id)backgroundControl;	// 0x2ce8ed
// converted property getter: - (float)horizontalMargin;	// 0x2cec61
// converted property getter: - (float)horizontalSpacing;	// 0x2cea0d
- (void)layoutSubcontrols;	// 0x2cef39
// converted property getter: - (float)nonAxisAlignment;	// 0x2ce935
// converted property getter: - (int)panelMode;	// 0x2ce86d
- (CGPoint)positionForControlAtIndex:(unsigned)index preSize:(float *)size postSize:(float *)size3;	// 0x2cec71
// converted property setter: - (void)setBackgroundControl:(id)control;	// 0x2ce87d
// converted property setter: - (void)setHorizontalMargin:(float)margin;	// 0x2cec29
// converted property setter: - (void)setHorizontalSpacing:(float)spacing;	// 0x2ce9d5
- (void)setHorizontalSpacingForPreferredWidth:(float)preferredWidth minimumSpacing:(float)spacing;	// 0x2cea1d
// converted property setter: - (void)setNonAxisAlignment:(float)alignment;	// 0x2ce8fd
// converted property setter: - (void)setPanelMode:(int)mode;	// 0x2ce845
// converted property setter: - (void)setVerticalMargin:(float)margin;	// 0x2ce98d
// converted property setter: - (void)setVerticalSpacing:(float)spacing;	// 0x2ce945
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2cf051
// converted property getter: - (float)verticalMargin;	// 0x2ce9c5
// converted property getter: - (float)verticalSpacing;	// 0x2ce97d
@end
