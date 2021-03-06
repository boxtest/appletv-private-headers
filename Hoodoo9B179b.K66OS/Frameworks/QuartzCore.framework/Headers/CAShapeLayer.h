/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;	// G=0x34f62c69; S=0x34f62c61; 
@property(copy) NSString *fillRule;	// G=0x34f62c59; S=0x34f62c51; 
@property(copy) NSString *lineCap;	// G=0x34f62be9; S=0x34f62be1; 
@property(copy) NSArray *lineDashPattern;	// G=0x34f62bd9; S=0x34f62bd1; 
@property(assign) float lineDashPhase;	// G=0x34f62bc9; S=0x34f62bc1; 
@property(copy) NSString *lineJoin;	// G=0x34f62bf9; S=0x34f62bf1; 
@property(assign) float lineWidth;	// G=0x34f62c19; S=0x34f62c11; 
@property(assign) float miterLimit;	// G=0x34f62c09; S=0x34f62c01; 
@property(assign) CGPathRef path;	// G=0x34f62c79; S=0x34f62c71; 
@property(assign) CGColorRef strokeColor;	// G=0x34f62c49; S=0x34f62c41; 
@property(assign) float strokeEnd;	// G=0x34f62c29; S=0x34f62c21; 
@property(assign) float strokeStart;	// G=0x34f62c39; S=0x34f62c31; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x34f62a79
+ (id)defaultValueForKey:(id)key;	// 0x34f62ad1
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x34f62d19
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x34f6328d
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x34f62ccd
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x34f62c81
- (void)didChangeValueForKey:(id)key;	// 0x34f62a19
// declared property getter: - (CGColorRef)fillColor;	// 0x34f62c69
// declared property getter: - (id)fillRule;	// 0x34f62c59
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x34f63851
// declared property getter: - (id)lineCap;	// 0x34f62be9
// declared property getter: - (id)lineDashPattern;	// 0x34f62bd9
// declared property getter: - (float)lineDashPhase;	// 0x34f62bc9
// declared property getter: - (id)lineJoin;	// 0x34f62bf9
// declared property getter: - (float)lineWidth;	// 0x34f62c19
// declared property getter: - (float)miterLimit;	// 0x34f62c09
// declared property getter: - (CGPathRef)path;	// 0x34f62c79
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x34f62c61
// declared property setter: - (void)setFillRule:(id)rule;	// 0x34f62c51
// declared property setter: - (void)setLineCap:(id)cap;	// 0x34f62be1
// declared property setter: - (void)setLineDashPattern:(id)pattern;	// 0x34f62bd1
// declared property setter: - (void)setLineDashPhase:(float)phase;	// 0x34f62bc1
// declared property setter: - (void)setLineJoin:(id)join;	// 0x34f62bf1
// declared property setter: - (void)setLineWidth:(float)width;	// 0x34f62c11
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x34f62c01
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x34f62c71
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x34f62c41
// declared property setter: - (void)setStrokeEnd:(float)end;	// 0x34f62c21
// declared property setter: - (void)setStrokeStart:(float)start;	// 0x34f62c31
// declared property getter: - (CGColorRef)strokeColor;	// 0x34f62c49
// declared property getter: - (float)strokeEnd;	// 0x34f62c29
// declared property getter: - (float)strokeStart;	// 0x34f62c39
@end

