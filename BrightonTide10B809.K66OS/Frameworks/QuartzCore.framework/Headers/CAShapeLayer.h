/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CALayer.h"
#import "QuartzCore-Structs.h"

@class NSArray, NSString;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;	// G=0x329e60c1; S=0x329e60c9; 
@property(copy) NSString *fillRule;	// G=0x329e60d1; S=0x329e60d9; 
@property(copy) NSString *lineCap;	// G=0x329e6141; S=0x329e6149; 
@property(copy) NSArray *lineDashPattern;	// G=0x329e6151; S=0x329e6159; 
@property(assign) float lineDashPhase;	// G=0x329e6161; S=0x329e6169; 
@property(copy) NSString *lineJoin;	// G=0x329e6131; S=0x329e6139; 
@property(assign) float lineWidth;	// G=0x329e6111; S=0x329e6119; 
@property(assign) float miterLimit;	// G=0x329e6121; S=0x329e6129; 
@property(assign) CGPathRef path;	// G=0x329e60b1; S=0x329e60b9; 
@property(assign) CGColorRef strokeColor;	// G=0x329e60e1; S=0x329e60e9; 
@property(assign) float strokeEnd;	// G=0x329e6101; S=0x329e6109; 
@property(assign) float strokeStart;	// G=0x329e60f1; S=0x329e60f9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x329e6059
+ (id)defaultValueForKey:(id)key;	// 0x329e53d5
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x329e5bd5
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x329e55dd
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x329e5fc9
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x329e6011
- (void)didChangeValueForKey:(id)key;	// 0x329e54cd
// declared property getter: - (CGColorRef)fillColor;	// 0x329e60c1
// declared property getter: - (id)fillRule;	// 0x329e60d1
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x329e552d
// declared property getter: - (id)lineCap;	// 0x329e6141
// declared property getter: - (id)lineDashPattern;	// 0x329e6151
// declared property getter: - (float)lineDashPhase;	// 0x329e6161
// declared property getter: - (id)lineJoin;	// 0x329e6131
// declared property getter: - (float)lineWidth;	// 0x329e6111
// declared property getter: - (float)miterLimit;	// 0x329e6121
// declared property getter: - (CGPathRef)path;	// 0x329e60b1
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x329e60c9
// declared property setter: - (void)setFillRule:(id)rule;	// 0x329e60d9
// declared property setter: - (void)setLineCap:(id)cap;	// 0x329e6149
// declared property setter: - (void)setLineDashPattern:(id)pattern;	// 0x329e6159
// declared property setter: - (void)setLineDashPhase:(float)phase;	// 0x329e6169
// declared property setter: - (void)setLineJoin:(id)join;	// 0x329e6139
// declared property setter: - (void)setLineWidth:(float)width;	// 0x329e6119
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x329e6129
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x329e60b9
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x329e60e9
// declared property setter: - (void)setStrokeEnd:(float)end;	// 0x329e6109
// declared property setter: - (void)setStrokeStart:(float)start;	// 0x329e60f9
// declared property getter: - (CGColorRef)strokeColor;	// 0x329e60e1
// declared property getter: - (float)strokeEnd;	// 0x329e6101
// declared property getter: - (float)strokeStart;	// 0x329e60f1
@end

