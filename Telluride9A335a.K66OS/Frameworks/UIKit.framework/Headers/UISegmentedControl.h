/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UISegment, UIColor, NSMutableArray;

@interface UISegmentedControl : UIControl <NSCoding> {
@private
	NSMutableArray *_segments;	// 72 = 0x48
	int _selectedSegment;	// 76 = 0x4c
	int _highlightedSegment;	// 80 = 0x50
	UIView *_removedSegment;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	UIColor *_tintColor;	// 92 = 0x5c
	int _barStyle;	// 96 = 0x60
	id _appearanceStorage;	// 100 = 0x64
	UIView *_backgroundBarView;	// 104 = 0x68
	float _enabledAlpha;	// 108 = 0x6c
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned showsDisclosure : 1;
		unsigned delegateSelectedSegmentChanged : 1;
		unsigned delegateDisclosureButtonClicked : 1;
		unsigned delegateAlwaysNotifiesDelegateOfSegmentClicks : 1;
		unsigned momentaryClick : 1;
		unsigned dontAlwaysToggleForTwoSegments : 1;
		unsigned tracking : 1;
		unsigned mouseInside : 1;
		unsigned autosizeToFitSegments : 1;
		unsigned isSizingToFit : 1;
		unsigned autosizeText : 1;
		unsigned transparentBackground : 1;
		unsigned useProportionalWidthSegments : 1;
		unsigned translucentBackground : 1;
	} _segmentedControlFlags;	// 112 = 0x70
}
@property(assign, nonatomic) BOOL apportionsSegmentWidthsByContent;	// G=0x33b6c7c5; S=0x33b6c7dd; 
@property(assign) int barStyle;	// G=0x33b6cead; S=0x33a2d189; converted property
@property(assign) int controlSize;	// G=0x33b6cd79; S=0x33a43791; converted property
@property(assign, nonatomic, getter=isMomentary) BOOL momentary;	// G=0x33b6cdad; S=0x33b6cdc1; @dynamic
@property(readonly, assign, nonatomic) unsigned numberOfSegments;	// G=0x33b6d691; @dynamic
@property(retain, nonatomic) UISegment *removedSegment;	// G=0x33b6c735; S=0x33b6c6f5; 
@property(assign) int segmentControlStyle;	// G=0x33b6cd8d; S=0x33b6cd9d; converted property
@property(assign, nonatomic) int segmentedControlStyle;	// G=0x33b6cd65; S=0x33a43259; @dynamic
@property(assign) int selectedSegment;	// G=0x33ac2ed1; S=0x33b6ec0d; converted property
@property(assign, nonatomic) int selectedSegmentIndex;	// G=0x33ac2ee1; S=0x33a2cbdd; @dynamic
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33a438f5; S=0x33a2d281; @synthesize=_tintColor
@property(assign) BOOL transparentBackground;	// G=0x33b6cf21; S=0x33a2ed49; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33b6c76d
+ (float)defaultHeight;	// 0x33b6e85d
+ (float)defaultHeightForStyle:(int)style;	// 0x33a4915d
+ (float)defaultHeightForStyle:(int)style size:(int)size;	// 0x339e7625
- (id)initWithCoder:(id)coder;	// 0x33b6c815
- (id)initWithFrame:(CGRect)frame;	// 0x33a29bc5
- (id)initWithFrame:(CGRect)frame withStyle:(int)style withItems:(id)items;	// 0x33a29add
- (id)initWithItems:(id)items;	// 0x33a42d8d
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33a44f81
- (float)_barHeight;	// 0x33a431b5
- (void)_clearSelectedSegment;	// 0x33b6e7cd
- (void)_commonSegmentedControlInit;	// 0x33a29d1d
- (void)_createSegmentAtIndex:(int)index position:(unsigned)position withInfo:(id)info;	// 0x33a2a031
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x33a2e769
- (void)_insertSegment:(int)segment withInfo:(id)info animated:(BOOL)animated;	// 0x33a2dead
- (BOOL)_isInMiniBar;	// 0x33a2d991
- (id)_optionsBackgroundImage;	// 0x33b6e05d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33b6cc15
- (void)_removeSegmentAnimationFinished:(id)finished finished:(id)finished2 context:(void *)context;	// 0x33b6e815
- (void)_resetForAppearanceChange;	// 0x33a432c5
- (void)_setAlpha:(float)alpha remember:(BOOL)remember;	// 0x33b6dea1
- (void)_setAppearanceIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;	// 0x33b6ccdd
- (void)_setAutosizeText:(BOOL)text;	// 0x33b6ce91
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33b6e07d
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33b6e3f9
- (void)_setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;	// 0x33b6e19d
- (void)_setEnabled:(BOOL)enabled forced:(BOOL)forced;	// 0x33b6dcb9
- (void)_setOptionsBackgroundImage:(id)image;	// 0x33b6df3d
- (void)_setSegmentedControlAppearance:(XXStruct_wXTbsB *)appearance;	// 0x33b6cc69
- (void)_setSelectedSegmentIndex:(int)index notify:(BOOL)notify;	// 0x33a2cbf1
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33b6e2dd
- (void)_setTranslucentOptionsBackground:(BOOL)background;	// 0x33b6cebd
- (BOOL)_shouldSelectSegmentAtIndex:(int)index;	// 0x33a2cf45
- (void)_updateOptionsBackground;	// 0x33a29d6d
- (void)addSegmentWithTitle:(id)title;	// 0x33b6eac1
// declared property getter: - (BOOL)apportionsSegmentWidthsByContent;	// 0x33b6c7c5
- (id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x33b6e171
// converted property getter: - (int)barStyle;	// 0x33b6cead
- (CGSize)contentOffsetForSegment:(unsigned)segment;	// 0x33b6ebc5
- (CGSize)contentOffsetForSegmentAtIndex:(unsigned)index;	// 0x33b6d5c9
- (UIOffset)contentPositionAdjustmentForSegmentType:(int)segmentType barMetrics:(int)metrics;	// 0x33b6e765
// converted property getter: - (int)controlSize;	// 0x33b6cd79
- (void)dealloc;	// 0x33ae30a5
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;	// 0x33b6e29d
- (void)encodeWithCoder:(id)coder;	// 0x33b6ca69
- (void)highlightSegment:(int)segment;	// 0x33af66f9
- (id)imageForSegment:(unsigned)segment;	// 0x33b6eb85
- (id)imageForSegmentAtIndex:(unsigned)index;	// 0x33b6d43d
- (id)infoViewForSegment:(int)segment;	// 0x33b6e829
- (void)insertSegment:(unsigned)segment withImage:(id)image animated:(BOOL)animated;	// 0x33b6eb21
- (void)insertSegment:(unsigned)segment withTitle:(id)title animated:(BOOL)animated;	// 0x33b6eafd
- (void)insertSegmentWithImage:(id)image atIndex:(unsigned)index animated:(BOOL)animated;	// 0x33b6cf39
- (void)insertSegmentWithTitle:(id)title atIndex:(unsigned)index animated:(BOOL)animated;	// 0x33a2de89
- (BOOL)isEnabledForSegment:(unsigned)segment;	// 0x33b6ebf5
- (BOOL)isEnabledForSegmentAtIndex:(unsigned)index;	// 0x33b6d631
// declared property getter: - (BOOL)isMomentary;	// 0x33b6cdad
- (void)layoutSubviews;	// 0x33a2d3b5
- (void)mouseDown:(GSEventRef)down;	// 0x33b6d6cd
- (void)mouseDragged:(GSEventRef)dragged;	// 0x33b6d9fd
- (void)mouseUp:(GSEventRef)up;	// 0x33b6daf1
// declared property getter: - (unsigned)numberOfSegments;	// 0x33b6d691
- (BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x33b6d9a1
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x33af694d
- (void)removeAllSegments;	// 0x33a2ddad
- (void)removeSegment:(unsigned)segment animated:(BOOL)animated;	// 0x33b6eb45
- (void)removeSegmentAtIndex:(unsigned)index animated:(BOOL)animated;	// 0x33b6cf5d
// declared property getter: - (id)removedSegment;	// 0x33b6c735
- (id)scriptingInfoWithChildren;	// 0x33b6ec1d
// converted property getter: - (int)segmentControlStyle;	// 0x33b6cd8d
// declared property getter: - (int)segmentedControlStyle;	// 0x33b6cd65
- (void)selectSegment:(int)segment;	// 0x33b6eab1
// converted property getter: - (int)selectedSegment;	// 0x33ac2ed1
// declared property getter: - (int)selectedSegmentIndex;	// 0x33ac2ee1
- (void)setAlpha:(float)alpha;	// 0x33a2edd5
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)segmentClicks;	// 0x33b6e9f9
- (void)setAlwaysToggleForTwoSegments:(BOOL)twoSegments;	// 0x33b6ce65
// declared property setter: - (void)setApportionsSegmentWidthsByContent:(BOOL)content;	// 0x33b6c7dd
- (void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33b6e139
// converted property setter: - (void)setBarStyle:(int)style;	// 0x33a2d189
- (void)setContentOffset:(CGSize)offset forSegment:(unsigned)segment;	// 0x33b6ebb5
- (void)setContentOffset:(CGSize)offset forSegmentAtIndex:(unsigned)index;	// 0x33b6d535
- (void)setContentPositionAdjustment:(UIOffset)adjustment forSegmentType:(int)segmentType barMetrics:(int)metrics;	// 0x33b6e549
// converted property setter: - (void)setControlSize:(int)size;	// 0x33a43791
- (void)setDelegate:(id)delegate;	// 0x33b6e865
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;	// 0x33b6e265
- (void)setEnabled:(BOOL)enabled;	// 0x33b6de8d
- (void)setEnabled:(BOOL)enabled forSegment:(unsigned)segment;	// 0x33b6ebe5
- (void)setEnabled:(BOOL)enabled forSegmentAtIndex:(unsigned)index;	// 0x33af5fa5
- (void)setFrame:(CGRect)frame;	// 0x33a29c4d
- (void)setImage:(id)image forSegment:(unsigned)segment;	// 0x33b6eb75
- (void)setImage:(id)image forSegmentAtIndex:(unsigned)index;	// 0x33b6d3ad
- (void)setImagePadding:(CGSize)padding forSegment:(unsigned)segment;	// 0x33b6ea1d
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x33b6cdc1
- (void)setMomentaryClick:(BOOL)click;	// 0x33b6e9e9
// declared property setter: - (void)setRemovedSegment:(id)segment;	// 0x33b6c6f5
// converted property setter: - (void)setSegmentControlStyle:(int)style;	// 0x33b6cd9d
// declared property setter: - (void)setSegmentedControlStyle:(int)style;	// 0x33a43259
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x33b6ec0d
// declared property setter: - (void)setSelectedSegmentIndex:(int)index;	// 0x33a2cbdd
- (void)setShowsDisclosure:(BOOL)disclosure;	// 0x33b6e8ed
// declared property setter: - (void)setTintColor:(id)color;	// 0x33a2d281
- (void)setTitle:(id)title forSegment:(unsigned)segment;	// 0x33b6eb55
- (void)setTitle:(id)title forSegmentAtIndex:(unsigned)index;	// 0x33b6d281
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33b6e3a9
// converted property setter: - (void)setTransparentBackground:(BOOL)background;	// 0x33a2ed49
- (void)setWidth:(float)width forSegment:(unsigned)segment;	// 0x33b6eb95
- (void)setWidth:(float)width forSegmentAtIndex:(unsigned)index;	// 0x33a43699
- (BOOL)shouldTrack;	// 0x33ac2e85
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a42eed
- (void)sizeToFit;	// 0x33a42e9d
// declared property getter: - (id)tintColor;	// 0x33a438f5
- (id)titleForSegment:(unsigned)segment;	// 0x33b6eb65
- (id)titleForSegmentAtIndex:(unsigned)index;	// 0x33b6d311
- (id)titleTextAttributesForState:(unsigned)state;	// 0x33b6e3d9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33ac2af5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33ac2efd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33b6dbb1
// converted property getter: - (BOOL)transparentBackground;	// 0x33b6cf21
- (void)updateForMiniBarState:(BOOL)miniBarState;	// 0x33a43775
- (BOOL)useBlockyMagnificationInClassic;	// 0x33b6dcb5
- (float)widthForSegment:(unsigned)segment;	// 0x33b6eba5
- (float)widthForSegmentAtIndex:(unsigned)index;	// 0x33b6d4d9
@end
