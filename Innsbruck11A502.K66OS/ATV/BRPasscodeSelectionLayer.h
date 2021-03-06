/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSArray, BRTextControl, BRPasscodeSelectionWidget;

__attribute__((visibility("hidden")))
@interface BRPasscodeSelectionLayer : BRControl {
	NSArray *_backgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_bulletLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	BRPasscodeSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	BOOL _isUserEditable;	// 108 = 0x6c
	unsigned _numDigits;	// 112 = 0x70
	BOOL _hideDigits;	// 116 = 0x74
	int _selection;	// 120 = 0x78
}
@property(retain) id passcode;	// G=0x40ded1; S=0x40e02d; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x40d131
- (void)_adjustDigitVisibility:(id)visibility;	// 0x40f7dd
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x40f005
- (id)_buildArrowsLayer;	// 0x40ea01
- (id)_buildBackgroundLayers;	// 0x40e64d
- (id)_buildBulletLayers;	// 0x40e895
- (id)_buildDigitLayers;	// 0x40e74d
- (id)_buildDoneLayer;	// 0x40eabd
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x40f201
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x40f10d
- (void)_hideDigitAtIndex:(int)index;	// 0x40f745
- (float)_layoutUIWithHeight:(float)height;	// 0x40eb81
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x40ef4d
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x40f581
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x40f671
- (void)_setSelection:(int)selection;	// 0x40f329
- (id)accessibilityLabel;	// 0x40f845
- (id)accessibilityTraitsList;	// 0x40f9c1
- (void)dealloc;	// 0x40d385
- (BOOL)decrementSelection;	// 0x40da0d
- (BOOL)digitsHidden;	// 0x40e405
- (BOOL)doneButtonSelected;	// 0x40e225
- (void)hideDigits:(int)digits;	// 0x40e415
- (BOOL)incrementSelection;	// 0x40d7d9
- (BOOL)moveSelectionLeft;	// 0x40d6f9
- (BOOL)moveSelectionRight;	// 0x40d609
// converted property getter: - (id)passcode;	// 0x40ded1
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x40d439
- (void)reset;	// 0x40e26d
- (void)setFrame:(CGRect)frame;	// 0x40e30d
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x40e02d
- (BOOL)setSelection:(int)selection;	// 0x40dded
- (BOOL)setValueAtSelection:(int)selection;	// 0x40dc31
- (void)showDigits;	// 0x40e515
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x40d589
@end

