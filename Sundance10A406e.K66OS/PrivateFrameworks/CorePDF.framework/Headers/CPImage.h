/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"


@interface CPImage : CPGraphicObject {
	CPPDFImage *imageData;	// 92 = 0x5c
	BOOL renderedBoundsComputed;	// 96 = 0x60
}
@property(readonly, assign) CPPDFImage *imageData;	// G=0x32ac0a71; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x32ac0a1d
- (id)initWithPDFImage:(CPPDFImage *)pdfimage;	// 0x32ac0d8d
- (void)accept:(id)accept;	// 0x32ac0d35
- (CGRect)bounds;	// 0x32ac0b35
// converted property getter: - (CPPDFImage *)imageData;	// 0x32ac0a71
- (BOOL)isVisible;	// 0x32ac0d5d
- (void)recomputeRenderedBounds;	// 0x32ac0b5d
- (CGRect)renderedBounds;	// 0x32ac0a81
- (long)zOrder;	// 0x32ac0d4d
@end

