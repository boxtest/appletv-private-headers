/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRHorizontalSegmentedWidget.h"

@class ATVImage, NSString;

__attribute__((visibility("hidden")))
@interface BRMessageButton : BRHorizontalSegmentedWidget {
	BRHorizontalSegmentedWidget *_segmentedImage;	// 124 = 0x7c
	ATVImage *_leftSelectedImage;	// 128 = 0x80
	ATVImage *_centerSelectedImage;	// 132 = 0x84
	ATVImage *_rightSelectedImage;	// 136 = 0x88
	ATVImage *_leftUnselectedImage;	// 140 = 0x8c
	ATVImage *_centerUnselectedImage;	// 144 = 0x90
	ATVImage *_rightUnselectedImage;	// 148 = 0x94
}
@property(copy, nonatomic) NSString *title;	// G=0x4e69c9; S=0x4e6975; 
- (id)init;	// 0x4e63c1
- (void).cxx_destruct;	// 0x4e6ad9
- (id)accessibilityTraitsList;	// 0x4e6a95
- (id)additionalActions;	// 0x4e682d
- (void)controlWasFocused;	// 0x4e6751
- (void)controlWasUnfocused;	// 0x4e67c1
- (BOOL)isAccessibilityElement;	// 0x4e6a91
// declared property setter: - (void)setTitle:(id)title;	// 0x4e6975
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4e6a11
// declared property getter: - (id)title;	// 0x4e69c9
- (float)verticalTextDisplacementFactor;	// 0x4e6ad1
@end

