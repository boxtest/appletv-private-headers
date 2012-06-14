/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"

@class NSDictionary, NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
	double mDuration;	// 48 = 0x30
	NSString *mFunction;	// 56 = 0x38
	NSDictionary *mFunctionParameters;	// 60 = 0x3c
	double mFunctionTimeOffset;	// 64 = 0x40
	double mFunctionTimeFactor;	// 72 = 0x48
	double mInnerEaseInControl;	// 80 = 0x50
	double mInnerEaseOutControl;	// 88 = 0x58
}
@property(assign, nonatomic) double duration;	// G=0x343ae425; S=0x343adaa1; @synthesize=mDuration
@property(copy, nonatomic) NSString *function;	// G=0x343adb25; S=0x343adc19; 
@property(retain, nonatomic) NSDictionary *functionParameters;	// G=0x343add69; S=0x343ade5d; @synthesize=mFunctionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x343ae455; S=0x343ae031; @synthesize=mFunctionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x343ae43d; S=0x343adfad; @synthesize=mFunctionTimeOffset
@property(assign, nonatomic) double innerEaseInControl;	// G=0x343ae46d; S=0x343ae0b5; @synthesize=mInnerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x343ae485; S=0x343ae139; @synthesize=mInnerEaseOutControl
- (id)init;	// 0x343ad5f1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x343ad64d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x343ae291
- (void)demolish;	// 0x343ad849
- (id)description;	// 0x343ae1bd
// declared property getter: - (double)duration;	// 0x343ae425
// declared property getter: - (id)function;	// 0x343adb25
// declared property getter: - (id)functionParameters;	// 0x343add69
// declared property getter: - (double)functionTimeFactor;	// 0x343ae455
// declared property getter: - (double)functionTimeOffset;	// 0x343ae43d
- (id)imprint;	// 0x343ad8c1
// declared property getter: - (double)innerEaseInControl;	// 0x343ae46d
// declared property getter: - (double)innerEaseOutControl;	// 0x343ae485
// declared property setter: - (void)setDuration:(double)duration;	// 0x343adaa1
// declared property setter: - (void)setFunction:(id)function;	// 0x343adc19
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x343ade5d
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x343ae031
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x343adfad
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x343ae0b5
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x343ae139
@end
