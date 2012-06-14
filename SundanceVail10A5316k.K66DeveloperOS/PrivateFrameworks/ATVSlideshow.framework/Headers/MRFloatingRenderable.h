/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class MRSlideProvider, MRImage;

@interface MRFloatingRenderable : MUPoolObject {
	MRSlideProvider *provider;	// 8 = 0x8
	MRImage *slide;	// 12 = 0xc
	CGSize size;	// 16 = 0x10
	float shadowWidth;	// 24 = 0x18
	float shadowHeight;	// 28 = 0x1c
	unsigned vboOffsetPlain;	// 32 = 0x20
	unsigned vboOffsetSoft;	// 36 = 0x24
	unsigned vboOffsetShadow;	// 40 = 0x28
	float aspectRatio;	// 44 = 0x2c
	float originalScale;	// 48 = 0x30
	CGPoint bottomLeft;	// 52 = 0x34
	CGPoint topRight;	// 60 = 0x3c
	MRFloatingRenderable *next;	// 68 = 0x44
}
@property(retain, nonatomic) MRImage *slide;	// G=0x365ccec1; S=0x365cce7d; @synthesize
+ (void)initialize;	// 0x365ccd05
+ (XXStruct_raCX$B *)poolInfo;	// 0x365cccf5
- (void)dealloc;	// 0x365cce05
- (void)purge;	// 0x365cce45
// declared property setter: - (void)setSlide:(id)slide;	// 0x365cce7d
// declared property getter: - (id)slide;	// 0x365ccec1
@end
