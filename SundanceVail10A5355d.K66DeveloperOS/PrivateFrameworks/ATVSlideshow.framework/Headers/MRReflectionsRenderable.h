/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class MRImage, MRCroppingSprite;

@interface MRReflectionsRenderable : MUPoolObject {
	MRImage *_slide;	// 8 = 0x8
	MRCroppingSprite *_sprite;	// 12 = 0xc
	float _modelViewMatrix[16];	// 16 = 0x10
	CGPoint position;	// 80 = 0x50
	CGSize size;	// 88 = 0x58
	BOOL isShadow;	// 96 = 0x60
	MRReflectionsRenderable *next;	// 100 = 0x64
	BOOL needsFlipped;	// 104 = 0x68
}
+ (XXStruct_raCX$B *)poolInfo;	// 0x320f6f31
- (id)initWithSlide:(id)slide sprite:(id)sprite modelViewMatrix:(const float *)matrix position:(CGPoint)position size:(CGSize)size flipped:(BOOL)flipped isShadow:(BOOL)shadow;	// 0x320f6f41
- (void)dealloc;	// 0x320f7089
- (void)purge;	// 0x320f7031
@end

