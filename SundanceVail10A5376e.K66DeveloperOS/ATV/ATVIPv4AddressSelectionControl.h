/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl, ATVIPv4AddressSelectionWidget, NSArray;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressSelectionControl : BRControl {
	NSArray *_octetBackgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_dotLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	ATVIPv4AddressSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	int _selection;	// 108 = 0x6c
}
- (id)init;	// 0x1ffed5
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x2018f9
- (id)_buildArrowsLayer;	// 0x2012c9
- (id)_buildDigitLayers;	// 0x2010c1
- (id)_buildDoneLayer;	// 0x201335
- (id)_buildDotLayers;	// 0x2011c5
- (id)_buildOctetBackgroundLayers;	// 0x201005
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x201af1
- (CGRect)_digitFrameForSelection:(int)selection;	// 0x2019ed
- (float)_layoutUIWithHeight:(float)height;	// 0x201425
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x201811
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x201e25
- (void)_setDigitValue:(int)value atIndex:(int)index;	// 0x201f09
- (void)_setSelection:(int)selection;	// 0x201cad
- (float)_singleCellWidth;	// 0x201c4d
- (id)_textEntryGlyphAttributes;	// 0x202039
- (id)_textEntryGlyphGrayAttributes;	// 0x202059
- (id)accessibilityLabel;	// 0x20207d
- (id)accessibilityTraitsList;	// 0x202109
- (void)controlWasActivated;	// 0x200185
- (void)dealloc;	// 0x2000d1
- (BOOL)decrementSelection;	// 0x2007b9
- (BOOL)doneButtonSelected;	// 0x200cbd
- (BOOL)incrementSelection;	// 0x2004c1
- (id)ipAddress;	// 0x200aad
- (BOOL)moveSelectionLeft;	// 0x2003e9
- (BOOL)moveSelectionRight;	// 0x200311
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x2001e5
- (void)reset;	// 0x200ce5
- (void)setFrame:(CGRect)frame;	// 0x200f0d
- (void)setIPAddress:(id)address;	// 0x200d01
@end

