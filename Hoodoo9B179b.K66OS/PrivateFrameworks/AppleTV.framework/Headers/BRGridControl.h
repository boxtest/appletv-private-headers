/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRProviderGroup, NSString;

@interface BRGridControl : BRControl {
@private
	BRProviderGroup *_group;	// 48 = 0x30
	BRControl *_requester;	// 52 = 0x34
	NSRange _range;	// 56 = 0x38
	float _lastGapHeight;	// 64 = 0x40
	double _heightToRange;	// 68 = 0x44
	double _allRowsHeight;	// 76 = 0x4c
	float _singleControlHeight;	// 84 = 0x54
	BOOL _allRowsAreSameHeight;	// 88 = 0x58
	float _allColumnWidths;	// 92 = 0x5c
	long _columnCount;	// 96 = 0x60
	XXStruct_qlg9jA _horizontalGap;	// 100 = 0x64
	XXStruct_qlg9jA _verticalGap;	// 104 = 0x68
	float _leftMargin;	// 108 = 0x6c
	float _rightMargin;	// 112 = 0x70
	float _bottomMargin;	// 116 = 0x74
	float _bottomMarginFactor;	// 120 = 0x78
	float _topMargin;	// 124 = 0x7c
	float _topMarginFactor;	// 128 = 0x80
	BOOL _wrapsNavigation;	// 132 = 0x84
	BOOL _explicitlyAcceptsFocus;	// 133 = 0x85
	NSString *_accessibilityLabel;	// 136 = 0x88
}
@property(retain) NSString *accessibilityLabel;	// G=0x3029254d; S=0x30292509; converted property
@property(assign) BOOL allRowsAreSameHeight;	// G=0x30291dd1; S=0x30291dc1; converted property
@property(assign) long columnCount;	// G=0x30291551; S=0x3029151d; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x302915a9; S=0x30291561; converted property
@property(assign) float leftMargin;	// G=0x302916ad; S=0x3029166d; converted property
@property(retain) id providerRequester;	// G=0x3029171d; S=0x3029170d; converted property
@property(retain) id providers;	// G=0x3029146d; S=0x30291265; converted property
@property(assign) float rightMargin;	// G=0x302916fd; S=0x302916bd; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x3029161d; S=0x302915c5; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x30291c89; S=0x30291c79; converted property
- (id)init;	// 0x302910f9
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x30293a4d
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x302935e9
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x302936d5
- (id)_controlsInRange:(NSRange)range;	// 0x302938d9
- (id)_createControlsInRange:(NSRange)range;	// 0x3029380d
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x3029306d
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x302931bd
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x30293271
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x302933bd
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x30293529
- (double)_heightToRange;	// 0x30292e55
- (long)_indexOfFocusedControl;	// 0x302937b1
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x30292f4d
- (void)_providerDataSetChanged:(id)changed;	// 0x30293bcd
- (void)_providerModified:(id)modified;	// 0x30293c3d
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x30293315
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x30292c3d
- (double)_totalHeight;	// 0x30292d4d
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x30293ac9
- (id)accessibilityControls;	// 0x3029255d
// converted property getter: - (id)accessibilityLabel;	// 0x3029254d
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x30291dd1
- (BOOL)brEventAction:(id)action;	// 0x30291921
// converted property getter: - (long)columnCount;	// 0x30291551
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x302926d9
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x3029293d
- (CGRect)controlFrameAtIndex:(long)index;	// 0x30292845
- (unsigned)countOfCells;	// 0x30292579
- (long)dataCount;	// 0x3029148d
- (void)dealloc;	// 0x30291195
- (void)focusControlAtIndex:(long)index;	// 0x3029271d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x30291a49
- (float)heightOfControlAtIndex:(long)index;	// 0x302918ed
- (float)heightToMaximum:(float)maximum;	// 0x302917d1
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x302915a9
- (unsigned)indexInCellsOfObject:(id)object;	// 0x30292589
- (id)initialFocus;	// 0x30292609
- (void)layoutSubcontrols;	// 0x30291df1
// converted property getter: - (float)leftMargin;	// 0x302916ad
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x302925c9
- (float)positionOfColumn:(long)column;	// 0x30291895
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x302914ad
// converted property getter: - (id)providerRequester;	// 0x3029171d
// converted property getter: - (id)providers;	// 0x3029146d
- (void)reloadData;	// 0x30292a79
// converted property getter: - (float)rightMargin;	// 0x302916fd
- (long)rowCount;	// 0x302914cd
- (void)setAcceptsFocus:(BOOL)focus;	// 0x30292a11
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x30292509
- (void)setAllColumnWidths:(float)widths;	// 0x3029150d
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x30291dc1
- (void)setBottomMargin:(float)margin;	// 0x30291c99
// converted property setter: - (void)setColumnCount:(long)count;	// 0x3029151d
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x30291561
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3029166d
- (void)setProvider:(id)provider;	// 0x30291225
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x3029170d
// converted property setter: - (void)setProviders:(id)providers;	// 0x30291265
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x302916bd
- (void)setTopMargin:(float)margin;	// 0x30291d2d
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x302915c5
- (void)setVerticalMargins:(float)margins;	// 0x30291639
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x30291c79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30292355
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x3029161d
- (id)visibleControlAtIndex:(long)index;	// 0x30291785
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x3029172d
- (NSRange)visibleRange;	// 0x30291769
- (void)visibleScrollRectChanged;	// 0x30291de1
- (void)windowMaxBoundsChanged;	// 0x30292459
// converted property getter: - (BOOL)wrapsNavigation;	// 0x30291c89
@end
