/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, MRImage, MRTextRenderer, MRImageProvider;

@interface MREffectPhotoEdges : MREffect {
	MRImageProvider *mFrameProvider;	// 112 = 0x70
	NSMutableDictionary *mSprites;	// 116 = 0x74
	MRTextRenderer *mText0Renderer;	// 120 = 0x78
	MRImage *mText0Image;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x33541b19
- (void)_cleanup;	// 0x33541bad
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335436f5
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33543b51
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33543a39
- (void)_unload;	// 0x33543b55
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3354358d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x335436b5
- (BOOL)isLoadedForTime:(double)time;	// 0x33541bfd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33542179
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335421e5
- (void)setAttributes:(id)attributes;	// 0x33541d51
- (void)setPixelSize:(CGSize)size;	// 0x33541cc1
@end

