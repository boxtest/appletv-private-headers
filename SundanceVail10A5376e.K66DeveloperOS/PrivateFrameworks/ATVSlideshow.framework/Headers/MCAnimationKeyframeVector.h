/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MCAnimationKeyframeVector : MCAnimationKeyframe {
	XXStruct_Te64nB mVector;	// 32 = 0x20
}
@property(assign, nonatomic) XXStruct_Te64nB vector;	// G=0x362ff3b9; S=0x362ff2ed; @synthesize=mVector
+ (id)keyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x362ff031
+ (id)keyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x362ff065
- (id)initWithImprint:(id)imprint;	// 0x362ff101
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x362ff361
- (id)imprint;	// 0x362ff1f1
// declared property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x362ff2ed
// declared property getter: - (XXStruct_Te64nB)vector;	// 0x362ff3b9
@end
