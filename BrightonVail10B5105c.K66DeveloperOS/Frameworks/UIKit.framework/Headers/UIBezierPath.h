/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
	CGPathRef _path;	// 4 = 0x4
	float *_lineDashPattern;	// 8 = 0x8
	unsigned _lineDashPatternCount;	// 12 = 0xc
	float _lineWidth;	// 16 = 0x10
	float _miterLimit;	// 20 = 0x14
	float _flatness;	// 24 = 0x18
	float _lineDashPhase;	// 28 = 0x1c
	int _lineCapStyle;	// 32 = 0x20
	int _lineJoinStyle;	// 36 = 0x24
	BOOL _usesEvenOddFillRule;	// 40 = 0x28
	CGPathRef _immutablePath;	// 44 = 0x2c
	BOOL _immutablePathIsValid;	// 48 = 0x30
}
@property(assign, nonatomic) CGPathRef CGPath;	// G=0x346bf129; S=0x34713271; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x347132f5; 
@property(readonly, assign, nonatomic) CGPoint currentPoint;	// G=0x3471330d; 
@property(readonly, assign, getter=isEmpty) BOOL empty;	// G=0x347132dd; 
@property(assign, nonatomic) float flatness;	// G=0x34714195; S=0x347141a5; @synthesize=_flatness
@property(assign, nonatomic) int lineCapStyle;	// G=0x34714135; S=0x34714145; @synthesize=_lineCapStyle
@property(assign, nonatomic) int lineJoinStyle;	// G=0x34714155; S=0x34714165; @synthesize=_lineJoinStyle
@property(assign, nonatomic) float lineWidth;	// G=0x34714115; S=0x34714125; @synthesize=_lineWidth
@property(assign, nonatomic) float miterLimit;	// G=0x34714175; S=0x34714185; @synthesize=_miterLimit
@property(assign, nonatomic) BOOL usesEvenOddFillRule;	// G=0x347141b5; S=0x347141c5; @synthesize=_usesEvenOddFillRule
+ (id)_bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadius:(float)radius;	// 0x3461cc7d
+ (id)_roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadius:(float)radius segments:(int)segments;	// 0x3461ccb5
+ (id)bezierPath;	// 0x3460a871
+ (id)bezierPathForBottomOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x347136a5
+ (id)bezierPathForTopOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x34713569
+ (id)bezierPathWithArcCenter:(CGPoint)arcCenter radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x34712c2d
+ (id)bezierPathWithCGPath:(CGPathRef)cgpath;	// 0x34712ce9
+ (id)bezierPathWithOvalInRect:(CGRect)rect;	// 0x34712bd9
+ (id)bezierPathWithRect:(CGRect)rect;	// 0x3460a81d
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadii:(CGSize)radii;	// 0x34707919
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect cornerRadius:(float)radius;	// 0x346a4a79
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadii:(id)cornerRadii;	// 0x34713c89
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadius:(float)cornerRadius;	// 0x3461cc41
+ (id)roundedRectBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x3467d655
+ (id)roundedRectBezierPath:(CGRect)path withTopCornerRadius:(float)topCornerRadius withBottomCornerRadius:(float)bottomCornerRadius;	// 0x347137d9
+ (id)shadowBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x346b092d
- (id)init;	// 0x34712551
- (id)initWithCoder:(id)coder;	// 0x3471257d
// declared property getter: - (CGPathRef)CGPath;	// 0x346bf129
- (CGPathRef)_createMutablePathByDecodingData:(id)data;	// 0x347138ad
- (id)_initWithCGMutablePath:(CGPathRef)cgmutablePath;	// 0x3460a8c9
- (CGPathRef)_mutablePath;	// 0x3460a99d
- (CGPathRef)_pathRef;	// 0x346b0b45
- (void)addArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x34712e11
- (void)addClip;	// 0x3460a9ad
- (void)addCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x34712d8d
- (void)addLineToPoint:(CGPoint)point;	// 0x3461e69d
- (void)addQuadCurveToPoint:(CGPoint)point controlPoint:(CGPoint)point2;	// 0x34712dd5
- (void)appendBezierPath:(id)path;	// 0x34713b81
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x346b0b55
- (void)appendBezierPathWithOvalInRect:(CGRect)rect;	// 0x34713bfd
- (void)appendBezierPathWithOvalInRect:(CGRect)rect transform:(CGAffineTransform)transform;	// 0x34713c35
- (void)appendBezierPathWithRect:(CGRect)rect;	// 0x34713bc5
- (void)appendPath:(id)path;	// 0x34712e71
- (void)applyTransform:(CGAffineTransform)transform;	// 0x34712eb5
- (id)bezierPathByReversingPath;	// 0x34712f69
// declared property getter: - (CGRect)bounds;	// 0x347132f5
- (void)clip;	// 0x3461d2a5
- (void)closePath;	// 0x34712f0d
- (BOOL)containsPoint:(CGPoint)point;	// 0x34713325
- (id)copyWithZone:(NSZone *)zone;	// 0x34712ac9
// declared property getter: - (CGPoint)currentPoint;	// 0x3471330d
- (void)dealloc;	// 0x3460a9f1
- (void)encodeWithCoder:(id)coder;	// 0x34712831
- (void)fill;	// 0x3467d8a1
- (void)fillWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x346a4c21
// declared property getter: - (float)flatness;	// 0x34714195
- (void)getLineDash:(float *)dash count:(int *)count phase:(float *)phase;	// 0x347133fd
// declared property getter: - (BOOL)isEmpty;	// 0x347132dd
// declared property getter: - (int)lineCapStyle;	// 0x34714135
// declared property getter: - (int)lineJoinStyle;	// 0x34714155
- (void)lineToPoint:(CGPoint)point;	// 0x3461e68d
// declared property getter: - (float)lineWidth;	// 0x34714115
// declared property getter: - (float)miterLimit;	// 0x34714175
- (void)moveToPoint:(CGPoint)point;	// 0x3461e661
- (void)removeAllPoints;	// 0x34712f39
// declared property setter: - (void)setCGPath:(CGPathRef)path;	// 0x34713271
// declared property setter: - (void)setFlatness:(float)flatness;	// 0x347141a5
// declared property setter: - (void)setLineCapStyle:(int)style;	// 0x34714145
- (void)setLineDash:(const float *)dash count:(int)count phase:(float)phase;	// 0x3471335d
// declared property setter: - (void)setLineJoinStyle:(int)style;	// 0x34714165
// declared property setter: - (void)setLineWidth:(float)width;	// 0x34714125
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x34714185
// declared property setter: - (void)setUsesEvenOddFillRule:(BOOL)rule;	// 0x347141c5
- (void)stroke;	// 0x3461d1d9
- (void)strokeWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x34713481
// declared property getter: - (BOOL)usesEvenOddFillRule;	// 0x347141b5
@end
