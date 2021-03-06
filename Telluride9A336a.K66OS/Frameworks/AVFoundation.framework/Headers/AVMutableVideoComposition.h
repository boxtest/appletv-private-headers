/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
@private
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x31470fdd; S=0x31470fb1; 
@property(retain) id compositor;	// G=0x31470a3d; S=0x31471185; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x31471159; S=0x31471115; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x31471035; S=0x31471009; 
@property(assign, nonatomic) float renderScale;	// G=0x3147108d; S=0x31471061; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x314710e9; S=0x314710b9; 
+ (id)videoComposition;	// 0x31470f6d
+ (id)videoCompositionForAsset:(id)asset;	// 0x31470a69
+ (id)videoCompositionForAsset:(id)asset videoGravity:(id)gravity;	// 0x31470459
// declared property getter: - (id)animationTool;	// 0x31470fdd
// converted property getter: - (id)compositor;	// 0x31470a3d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x31471159
// declared property getter: - (id)instructions;	// 0x31471035
// declared property getter: - (float)renderScale;	// 0x3147108d
// declared property getter: - (CGSize)renderSize;	// 0x314710e9
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x31470fb1
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x31471185
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x31471115
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x31471009
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x31471061
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x314710b9
@end

