/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <CATiledLayer.h> // Unknown library

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer {
	CALayer *_selectionLayer;	// 48 = 0x30
}
- (id)init;	// 0x33324565
- (void)dealloc;	// 0x33324645
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x33324845
- (void)layoutSublayers;	// 0x333246e5
- (void)setNeedsDisplay;	// 0x33324695
@end
