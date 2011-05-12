/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary, NSArray, NSMutableArray, BRImageControl;

@interface BRSegmentedSortControl : BRControl {
@private
	BRImageControl *_leftEndCapLayer;	// 44 = 0x2c
	NSMutableArray *_dividerLayers;	// 48 = 0x30
	NSMutableArray *_contentLayers;	// 52 = 0x34
	NSMutableArray *_textLayers;	// 56 = 0x38
	BRImageControl *_rightEndCapLayer;	// 60 = 0x3c
	NSArray *_segmentNames;	// 64 = 0x40
	NSMutableDictionary *_images;	// 68 = 0x44
	int _selectedSegment;	// 72 = 0x48
	float _widthRatio;	// 76 = 0x4c
}
@property(assign) int selectedSegment;	// G=0x3293dad9; S=0x3293d42d; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x32991d65
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x3293d025
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x3293d365
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x3293d7fd
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x3293d831
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x3293d68d
- (id)_loadImageFromFile:(id)file;	// 0x3293d6c1
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x3293d7c9
- (void)_updateSegmentState;	// 0x3293d4f9
- (id)accessibilityLabel;	// 0x32991d05
- (BOOL)brEventAction:(id)action;	// 0x3293da09
- (void)dealloc;	// 0x3293ea35
- (void)layoutSubcontrols;	// 0x32991e1d
- (int)segmentCount;	// 0x3293d345
// converted property getter: - (int)selectedSegment;	// 0x3293dad9
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x3293d42d
- (float)visualHorizontalCenter;	// 0x32991d89
@end
