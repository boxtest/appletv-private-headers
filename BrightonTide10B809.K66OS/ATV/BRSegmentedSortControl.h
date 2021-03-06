/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSArray, BRImageControl, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRSegmentedSortControl : BRControl {
	BRImageControl *_leftEndCapLayer;	// 84 = 0x54
	NSMutableArray *_dividerLayers;	// 88 = 0x58
	NSMutableArray *_contentLayers;	// 92 = 0x5c
	NSMutableArray *_textLayers;	// 96 = 0x60
	BRImageControl *_rightEndCapLayer;	// 100 = 0x64
	NSArray *_segmentNames;	// 104 = 0x68
	NSMutableDictionary *_images;	// 108 = 0x6c
	int _selectedSegment;	// 112 = 0x70
	float _widthRatio;	// 116 = 0x74
}
@property(assign) int selectedSegment;	// G=0x330039; S=0x32ff59; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x32faf1
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x32fb15
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x33080d
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x3307dd
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x3307c1
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x330761
- (id)_loadImageFromFile:(id)file;	// 0x3308d9
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x330791
- (void)_updateSegmentState;	// 0x3309e1
- (id)accessibilityLabel;	// 0x3306fd
- (BOOL)brEventAction:(id)action;	// 0x33010d
- (void)dealloc;	// 0x32fe71
- (void)layoutSubcontrols;	// 0x3301d9
- (int)segmentCount;	// 0x32ff39
// converted property getter: - (int)selectedSegment;	// 0x330039
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x32ff59
- (float)visualHorizontalCenter;	// 0x330049
@end

