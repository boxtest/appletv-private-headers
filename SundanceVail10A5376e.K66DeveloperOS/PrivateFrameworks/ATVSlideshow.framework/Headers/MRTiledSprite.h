/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MRTiledSprite : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	CGSize mHalfSize;	// 12 = 0xc
	float mRotation;	// 20 = 0x14
	CGRect mInnerRect;	// 24 = 0x18
	CGRect mOuterRect;	// 40 = 0x28
	BOOL mPreservesImageAspectRatio;	// 56 = 0x38
	BOOL mIsSealed;	// 57 = 0x39
	NSMutableArray *mTriangles;	// 60 = 0x3c
	float *mVertices;	// 64 = 0x40
	float *mBasicTextureCoordinates;	// 68 = 0x44
	float *mInSpriteCoordinates;	// 72 = 0x48
	float *mTextureCoordinates[4];	// 76 = 0x4c
	NSMutableArray *mMiddleTriangles;	// 92 = 0x5c
	float *mMiddleVertices;	// 96 = 0x60
	float *mMiddleBasicTextureCoordinates;	// 100 = 0x64
	float *mMiddleInSpriteCoordinates;	// 104 = 0x68
	float *mMiddleTextureCoordinates[4];	// 108 = 0x6c
	NSMutableArray *mOuterTriangles;	// 124 = 0x7c
	float *mOuterVertices;	// 128 = 0x80
	float *mOuterBasicTextureCoordinates;	// 132 = 0x84
	float *mOuterInSpriteCoordinates;	// 136 = 0x88
	float *mOuterTextureCoordinates[4];	// 140 = 0x8c
	CGSize mInSpriteCoordinatesFactor;	// 156 = 0x9c
	CGPoint mInSpriteCoordinatesOffset;	// 164 = 0xa4
	CGSize mTextureCoordinatesFactor[4];	// 172 = 0xac
	CGPoint mTextureCoordinatesOffset[4];	// 204 = 0xcc
	BOOL mNeedsTextureCoordinates[4];	// 236 = 0xec
	BOOL mNeedsInSpriteCoordinates;	// 240 = 0xf0
	BOOL mNeedsToUpdateInSpriteCoordinates;	// 241 = 0xf1
	BOOL mHitIsActive;	// 242 = 0xf2
}
@property(readonly, assign, nonatomic) CGSize halfSize;	// G=0x362e7f71; @synthesize=mHalfSize
@property(assign, nonatomic) BOOL hitIsActive;	// G=0x362e7fe1; S=0x362e7ff1; @synthesize=mHitIsActive
@property(readonly, assign, nonatomic) CGRect innerRect;	// G=0x362e7f99; @synthesize=mInnerRect
@property(assign, nonatomic) BOOL needsInSpriteCoordinates;	// G=0x362e8001; S=0x362e8011; @synthesize=mNeedsInSpriteCoordinates
@property(readonly, assign, nonatomic) CGRect outerRect;	// G=0x362e7fbd; @synthesize=mOuterRect
@property(readonly, assign, nonatomic) CGPoint position;	// G=0x362e7f59; @synthesize=mPosition
@property(assign, nonatomic) BOOL preservesImageAspectRatio;	// G=0x362e8021; S=0x362e8031; @synthesize=mPreservesImageAspectRatio
@property(readonly, assign, nonatomic) float rotation;	// G=0x362e7f89; @synthesize=mRotation
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect context:(id)context;	// 0x362e33e1
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect outerRect:(CGRect)rect5 context:(id)context;	// 0x362e3439
- (void)dealloc;	// 0x362e3f7d
- (void)getOpaquePosition:(CGPoint *)position andHalfSize:(CGSize *)size;	// 0x362e7dc1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix;	// 0x362e7c79
// declared property getter: - (CGSize)halfSize;	// 0x362e7f71
- (BOOL)hitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x362e7b29
// declared property getter: - (BOOL)hitIsActive;	// 0x362e7fe1
// declared property getter: - (CGRect)innerRect;	// 0x362e7f99
// declared property getter: - (BOOL)needsInSpriteCoordinates;	// 0x362e8001
// declared property getter: - (CGRect)outerRect;	// 0x362e7fbd
// declared property getter: - (CGPoint)position;	// 0x362e7f59
// declared property getter: - (BOOL)preservesImageAspectRatio;	// 0x362e8021
- (void)renderDumbImage:(id)image inContext:(id)context;	// 0x362e6d39
- (void)renderImage:(id)image inContext:(id)context;	// 0x362e7635
- (void)renderImageInner:(id)inner inContext:(id)context;	// 0x362e6f21
- (void)renderImageMiddle:(id)middle inContext:(id)context;	// 0x362e7175
- (void)renderImageOuter:(id)outer inContext:(id)context;	// 0x362e73d5
// declared property getter: - (float)rotation;	// 0x362e7f89
- (void)seal;	// 0x362e5d51
// declared property setter: - (void)setHitIsActive:(BOOL)active;	// 0x362e7ff1
// declared property setter: - (void)setNeedsInSpriteCoordinates:(BOOL)spriteCoordinates;	// 0x362e8011
- (void)setNeedsTextureCoordinates:(BOOL)coordinates onTextureUnit:(unsigned)unit;	// 0x362e7a21
// declared property setter: - (void)setPreservesImageAspectRatio:(BOOL)ratio;	// 0x362e8031
- (void)setSpriteCoordinatesFactor:(CGSize)factor andOffset:(CGPoint)offset;	// 0x362e7a7d
- (void)setTextureCoordinatesFactor:(CGSize)factor andOffset:(CGPoint)offset onTextureUnit:(unsigned)unit;	// 0x362e7a35
- (void)subtractOpaqueSpriteWithPosition:(CGPoint)position halfSize:(CGSize)size andRotation:(float)rotation;	// 0x362e57e9
- (void)subtractSprite:(id)sprite;	// 0x362e5621
- (void)subtractSpriteAtPosition:(CGPoint)position withSize:(CGSize)size zRotation:(float)rotation andOpaqueRect:(CGRect)rect inContext:(id)context;	// 0x362e5679
- (void)subtractTriangle:(float [6])triangle fromTriangle:(float [6])triangle2 addTrianglesTo:(id)to;	// 0x362e4691
- (void)updateInSpriteCoordinates;	// 0x362e6845
@end

