/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <UIProgressView.h> // Unknown library

@class UIImage, NSMutableArray;

@interface TLVibrationRecorderProgressView : UIProgressView {
	double _currentTimeInterval;	// 96 = 0x60
	double _maximumTimeInterval;	// 104 = 0x68
	UIImage *_resizableDotImage;	// 112 = 0x70
	CGSize _dotSize;	// 116 = 0x74
	CGSize _dotInsets;	// 124 = 0x7c
	NSMutableArray *_dots;	// 132 = 0x84
	id _dotForCurrentVibrationComponent;	// 136 = 0x88
	double _currentVibrationComponentDidBeginTimeInterval;	// 140 = 0x8c
	double _previousPauseDidBeginTimeInterval;	// 148 = 0x94
	unsigned _roundedCornersCompensationDelayMode;	// 156 = 0x9c
}
@property(assign, nonatomic) double currentTimeInterval;	// G=0x33075101; S=0x330747c1; @synthesize=_currentTimeInterval
@property(assign, nonatomic) unsigned roundedCornersCompensationDelayMode;	// G=0x33075119; S=0x33075129; @synthesize=_roundedCornersCompensationDelayMode
- (id)initWithProgressViewStyle:(int)progressViewStyle maximumTimeInterval:(double)interval;	// 0x330745a5
- (double)_cappedValueForTimeInterval:(double)timeInterval;	// 0x33074ead
- (CGRect)_frameForDotAtTimeInterval:(double)timeInterval duration:(double)duration;	// 0x33074ef1
- (CGRect)accessibilityFrame;	// 0x33074e49
- (id)accessibilityLabel;	// 0x33074d89
- (id)accessibilityValue;	// 0x33074d99
- (void)clearAllVibrationComponents;	// 0x33074c6d
// declared property getter: - (double)currentTimeInterval;	// 0x33075101
- (void)dealloc;	// 0x3307474d
- (BOOL)isAccessibilityElement;	// 0x33074d59
// declared property getter: - (unsigned)roundedCornersCompensationDelayMode;	// 0x33075119
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x330747c1
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(unsigned)mode;	// 0x33075129
- (void)vibrationComponentDidEnd;	// 0x33074bed
- (void)vibrationComponentDidStart;	// 0x330749ed
@end
