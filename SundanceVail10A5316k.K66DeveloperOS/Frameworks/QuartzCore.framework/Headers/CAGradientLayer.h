/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAGradientLayer : CALayer {
}
@property(retain) id colorMap;	// G=0x32afebb1; S=0x32afebb9; 
@property(copy) NSArray *colors;	// G=0x32afeb55; S=0x32afeb5d; 
@property(assign) CGPoint endPoint;	// G=0x32afeb8d; S=0x32afeb99; 
@property(copy) NSArray *locations;	// G=0x32afeb65; S=0x32afeb6d; 
@property(assign) CGPoint startPoint;	// G=0x32afeb75; S=0x32afeb85; 
@property(copy) NSString *type;	// G=0x32afeba1; S=0x32afeba9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x32afeafd
+ (id)defaultValueForKey:(id)key;	// 0x32afe0ed
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x32afe811
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x32afe2b1
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x32afea6d
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x32afeab5
// declared property getter: - (id)colorMap;	// 0x32afebb1
// declared property getter: - (id)colors;	// 0x32afeb55
- (void)didChangeValueForKey:(id)key;	// 0x32afe191
// declared property getter: - (CGPoint)endPoint;	// 0x32afeb8d
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x32afe1f1
// declared property getter: - (id)locations;	// 0x32afeb65
// declared property setter: - (void)setColorMap:(id)map;	// 0x32afebb9
// declared property setter: - (void)setColors:(id)colors;	// 0x32afeb5d
// declared property setter: - (void)setEndPoint:(CGPoint)point;	// 0x32afeb99
// declared property setter: - (void)setLocations:(id)locations;	// 0x32afeb6d
// declared property setter: - (void)setStartPoint:(CGPoint)point;	// 0x32afeb85
// declared property setter: - (void)setType:(id)type;	// 0x32afeba9
// declared property getter: - (CGPoint)startPoint;	// 0x32afeb75
// declared property getter: - (id)type;	// 0x32afeba1
@end

