/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import <CALayer.h> // Unknown library


@interface SKLayer : CALayer {
	id _context;	// 48 = 0x30
	BOOL _drawsBorder;	// 52 = 0x34
}
@property(retain) id context;	// G=0x30c3b8e5; S=0x30c3b8a1; converted property
+ (void)createColors;	// 0x30c3c0d5
+ (void)initialize;	// 0x30c3b579
- (id)init;	// 0x30c3b589
// converted property getter: - (id)context;	// 0x30c3b8e5
- (void)dealloc;	// 0x30c3b6a5
- (void)drawInContext:(CGContextRef)context;	// 0x30c3bfe9
- (void)drawLineInContext:(CGContextRef)context from:(CGPoint)from to:(CGPoint)to thickness:(float)thickness color:(CGColorRef)color;	// 0x30c3bf19
- (void)drawRectInContext:(CGContextRef)context rect:(CGRect)rect thickness:(float)thickness strokeColor:(CGColorRef)color fillColor:(CGColorRef)color5;	// 0x30c3bf61
- (void)flipHorizontal;	// 0x30c3bcb1
- (void)flipVertical;	// 0x30c3bde5
- (void)logBounds;	// 0x30c3b819
- (void)logFrame;	// 0x30c3b791
- (void)rotate180;	// 0x30c3bb7d
- (void)rotateC;	// 0x30c3b915
- (void)rotateCC;	// 0x30c3ba49
- (void)setBounds:(CGRect)bounds;	// 0x30c3b6f1
// converted property setter: - (void)setContext:(id)context;	// 0x30c3b8a1
- (void)setDrawsBorder:(BOOL)border;	// 0x30c3b8f5
@end

