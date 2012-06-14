/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframe1D : MCAnimationKeyframe {
@private
	float mValue;	// 32 = 0x20
}
@property(assign, nonatomic) float value;	// G=0x3653137d; S=0x3653122d; @synthesize=mValue
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time;	// 0x36531091
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x365310b5
- (id)initWithImprint:(id)imprint;	// 0x36531141
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36531331
- (id)description;	// 0x365312b5
- (id)imprint;	// 0x365311b1
// declared property setter: - (void)setValue:(float)value;	// 0x3653122d
// declared property getter: - (float)value;	// 0x3653137d
@end
