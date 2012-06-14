/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRHitBlob;

@interface MRGesture : NSObject {
@private
	MRHitBlob *_hitBlob;	// 4 = 0x4
@protected
	CGPoint locationInViewAtStart;	// 8 = 0x8
	CGPoint locationInSlideAtStart;	// 16 = 0x10
	float linearScaleAtStart;	// 24 = 0x18
	CGPoint slideCenterAtStart;	// 28 = 0x1c
	float slideRotationAtStart;	// 36 = 0x24
	float slideScaleAtStart;	// 40 = 0x28
	CGPoint currentTranslation;	// 44 = 0x2c
	float currentRotation;	// 52 = 0x34
	float currentScale;	// 56 = 0x38
}
@property(assign) float currentRotation;	// G=0x355e9789; S=0x355e9799; @synthesize
@property(assign) float currentScale;	// G=0x355e97a9; S=0x355e97b9; @synthesize
@property(assign) CGPoint currentTranslation;	// G=0x355e9759; S=0x355e9775; @synthesize
@property(retain) MRHitBlob *hitBlob;	// G=0x355e9651; S=0x355e9665; @synthesize=_hitBlob
@property(assign) CGPoint locationInSlideAtStart;	// G=0x355e96b9; S=0x355e96d5; @synthesize
@property(assign) CGPoint locationInViewAtStart;	// G=0x355e9689; S=0x355e96a5; @synthesize
@property(assign) CGPoint slideCenterAtStart;	// G=0x355e96e9; S=0x355e9705; @synthesize
@property(assign) float slideRotationAtStart;	// G=0x355e9719; S=0x355e9729; @synthesize
@property(assign) float slideScaleAtStart;	// G=0x355e9739; S=0x355e9749; @synthesize
- (id)initWithHitBlob:(id)hitBlob;	// 0x355e95bd
// declared property getter: - (float)currentRotation;	// 0x355e9789
// declared property getter: - (float)currentScale;	// 0x355e97a9
// declared property getter: - (CGPoint)currentTranslation;	// 0x355e9759
- (void)dealloc;	// 0x355e95fd
// declared property getter: - (id)hitBlob;	// 0x355e9651
// declared property getter: - (CGPoint)locationInSlideAtStart;	// 0x355e96b9
// declared property getter: - (CGPoint)locationInViewAtStart;	// 0x355e9689
// declared property setter: - (void)setCurrentRotation:(float)rotation;	// 0x355e9799
// declared property setter: - (void)setCurrentScale:(float)scale;	// 0x355e97b9
// declared property setter: - (void)setCurrentTranslation:(CGPoint)translation;	// 0x355e9775
// declared property setter: - (void)setHitBlob:(id)blob;	// 0x355e9665
// declared property setter: - (void)setLocationInSlideAtStart:(CGPoint)start;	// 0x355e96d5
// declared property setter: - (void)setLocationInViewAtStart:(CGPoint)start;	// 0x355e96a5
// declared property setter: - (void)setSlideCenterAtStart:(CGPoint)start;	// 0x355e9705
// declared property setter: - (void)setSlideRotationAtStart:(float)start;	// 0x355e9729
// declared property setter: - (void)setSlideScaleAtStart:(float)start;	// 0x355e9749
// declared property getter: - (CGPoint)slideCenterAtStart;	// 0x355e96e9
// declared property getter: - (float)slideRotationAtStart;	// 0x355e9719
// declared property getter: - (float)slideScaleAtStart;	// 0x355e9739
@end
