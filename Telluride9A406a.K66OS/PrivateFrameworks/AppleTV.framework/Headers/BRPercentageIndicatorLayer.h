/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRHorizontalSegmentedWidget.h"

@class BRImageControl, BRImage;

@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget {
@private
	BRImageControl *_centerOnLayer;	// 88 = 0x58
	BRImage *_leftOnImage;	// 92 = 0x5c
	BRImage *_leftOffImage;	// 96 = 0x60
	BRImage *_rightOnImage;	// 100 = 0x64
	BRImage *_rightOffImage;	// 104 = 0x68
	BRImage *_centerOnImage;	// 108 = 0x6c
	BRImage *_centerOffImage;	// 112 = 0x70
	float _percentage;	// 116 = 0x74
}
@property(assign) float percentage;	// G=0x330e901d; S=0x330e902d; converted property
- (id)initWithLeftOnPath:(id)leftOnPath leftOffPath:(id)path centerOnPath:(id)path3 centerOffPath:(id)path4 rightOnPath:(id)path5 rightOffPath:(id)path6;	// 0x330e8c89
- (void)_updateProgressToPercentage:(float)percentage;	// 0x330e922d
- (id)accessibilityLabel;	// 0x330e93c5
- (void)dealloc;	// 0x330e8f59
- (void)layoutSubcontrols;	// 0x330e90a9
// converted property getter: - (float)percentage;	// 0x330e901d
// converted property setter: - (void)setPercentage:(float)percentage;	// 0x330e902d
@end
