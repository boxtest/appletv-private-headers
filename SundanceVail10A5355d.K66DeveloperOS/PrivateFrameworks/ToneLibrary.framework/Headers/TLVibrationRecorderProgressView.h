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
	double _currentTimeInterval;	// 128 = 0x80
	double _maximumTimeInterval;	// 136 = 0x88
	UIImage *_resizableDotImage;	// 144 = 0x90
	CGSize _dotSize;	// 148 = 0x94
	CGSize _dotInsets;	// 156 = 0x9c
	NSMutableArray *_dots;	// 164 = 0xa4
	id _dotForCurrentVibrationComponent;	// 168 = 0xa8
	double _currentVibrationComponentDidBeginTimeInterval;	// 172 = 0xac
	double _previousPauseDidBeginTimeInterval;	// 180 = 0xb4
	int _roundedCornersCompensationDelayMode;	// 188 = 0xbc
}
@property(assign, nonatomic) double currentTimeInterval;	// G=0x3245fe51; S=0x3245f529; @synthesize=_currentTimeInterval
@property(assign, nonatomic) int roundedCornersCompensationDelayMode;	// G=0x3245fe69; S=0x3245fe79; @synthesize=_roundedCornersCompensationDelayMode
- (id)initWithProgressViewStyle:(int)progressViewStyle maximumTimeInterval:(double)interval;	// 0x3245f309
- (double)_cappedValueForTimeInterval:(double)timeInterval;	// 0x3245fc11
- (CGRect)_frameForDotAtTimeInterval:(double)timeInterval duration:(double)duration;	// 0x3245fc59
- (CGRect)accessibilityFrame;	// 0x3245fbad
- (id)accessibilityLabel;	// 0x3245faed
- (id)accessibilityValue;	// 0x3245fafd
- (void)clearAllVibrationComponents;	// 0x3245f9b5
// declared property getter: - (double)currentTimeInterval;	// 0x3245fe51
- (void)dealloc;	// 0x3245f4b1
- (BOOL)isAccessibilityElement;	// 0x3245fabd
// declared property getter: - (int)roundedCornersCompensationDelayMode;	// 0x3245fe69
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x3245f529
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(int)mode;	// 0x3245fe79
- (void)vibrationComponentDidEnd;	// 0x3245f939
- (void)vibrationComponentDidStart;	// 0x3245f761
@end
