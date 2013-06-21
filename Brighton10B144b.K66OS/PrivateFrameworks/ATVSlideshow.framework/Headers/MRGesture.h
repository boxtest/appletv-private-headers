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
	MRHitBlob *_hitBlob;	// 4 = 0x4
	CGPoint _locationInViewAtStart;	// 8 = 0x8
	CGPoint _locationInSlideAtStart;	// 16 = 0x10
	float _linearScaleAtStart;	// 24 = 0x18
	CGPoint _slideCenterAtStart;	// 28 = 0x1c
	float _slideRotationAtStart;	// 36 = 0x24
	float _slideScaleAtStart;	// 40 = 0x28
	CGPoint _currentTranslation;	// 44 = 0x2c
	float _currentRotation;	// 52 = 0x34
	float _currentScale;	// 56 = 0x38
}
@property(assign) float currentRotation;	// G=0x332adf51; S=0x332adf65; @synthesize=_currentRotation
@property(assign) float currentScale;	// G=0x332adf7d; S=0x332adf91; @synthesize=_currentScale
@property(assign) CGPoint currentTranslation;	// G=0x332adf01; S=0x332adf25; @synthesize=_currentTranslation
@property(retain) MRHitBlob *hitBlob;	// G=0x332add69; S=0x332add7d; @synthesize=_hitBlob
@property(assign) float linearScaleAtStart;	// G=0x332ade2d; S=0x332ade41; @synthesize=_linearScaleAtStart
@property(assign) CGPoint locationInSlideAtStart;	// G=0x332adddd; S=0x332ade01; @synthesize=_locationInSlideAtStart
@property(assign) CGPoint locationInViewAtStart;	// G=0x332add8d; S=0x332addb1; @synthesize=_locationInViewAtStart
@property(assign) CGPoint slideCenterAtStart;	// G=0x332ade59; S=0x332ade7d; @synthesize=_slideCenterAtStart
@property(assign) float slideRotationAtStart;	// G=0x332adea9; S=0x332adebd; @synthesize=_slideRotationAtStart
@property(assign) float slideScaleAtStart;	// G=0x332aded5; S=0x332adee9; @synthesize=_slideScaleAtStart
- (id)initWithHitBlob:(id)hitBlob;	// 0x332adcd9
// declared property getter: - (float)currentRotation;	// 0x332adf51
// declared property getter: - (float)currentScale;	// 0x332adf7d
// declared property getter: - (CGPoint)currentTranslation;	// 0x332adf01
- (void)dealloc;	// 0x332add19
// declared property getter: - (id)hitBlob;	// 0x332add69
// declared property getter: - (float)linearScaleAtStart;	// 0x332ade2d
// declared property getter: - (CGPoint)locationInSlideAtStart;	// 0x332adddd
// declared property getter: - (CGPoint)locationInViewAtStart;	// 0x332add8d
// declared property setter: - (void)setCurrentRotation:(float)rotation;	// 0x332adf65
// declared property setter: - (void)setCurrentScale:(float)scale;	// 0x332adf91
// declared property setter: - (void)setCurrentTranslation:(CGPoint)translation;	// 0x332adf25
// declared property setter: - (void)setHitBlob:(id)blob;	// 0x332add7d
// declared property setter: - (void)setLinearScaleAtStart:(float)start;	// 0x332ade41
// declared property setter: - (void)setLocationInSlideAtStart:(CGPoint)start;	// 0x332ade01
// declared property setter: - (void)setLocationInViewAtStart:(CGPoint)start;	// 0x332addb1
// declared property setter: - (void)setSlideCenterAtStart:(CGPoint)start;	// 0x332ade7d
// declared property setter: - (void)setSlideRotationAtStart:(float)start;	// 0x332adebd
// declared property setter: - (void)setSlideScaleAtStart:(float)start;	// 0x332adee9
// declared property getter: - (CGPoint)slideCenterAtStart;	// 0x332ade59
// declared property getter: - (float)slideRotationAtStart;	// 0x332adea9
// declared property getter: - (float)slideScaleAtStart;	// 0x332aded5
@end
