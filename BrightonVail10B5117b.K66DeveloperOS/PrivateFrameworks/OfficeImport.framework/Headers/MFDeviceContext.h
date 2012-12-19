/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class TSUColor, MFPen, MFFont, MFPalette, MFTransform, MFPath, MFBrush;
@protocol MFDeviceDriver;

@interface MFDeviceContext : NSObject <NSCopying> {
	NSObject<MFDeviceDriver> *m_driver;	// 4 = 0x4
	bool m_textUpdateCP;	// 8 = 0x8
	double m_miterLimit;	// 12 = 0xc
	int m_textHorizontalAlign;	// 20 = 0x14
	int m_textVerticalAlign;	// 24 = 0x18
	int m_textDirection;	// 28 = 0x1c
	MFFont *m_font;	// 32 = 0x20
	TSUColor *m_textColour;	// 36 = 0x24
	int m_textBreakExtra;	// 40 = 0x28
	int m_textBreakCount;	// 44 = 0x2c
	int m_textCharExtra;	// 48 = 0x30
	TSUColor *m_bkColour;	// 52 = 0x34
	int m_bkMode;	// 56 = 0x38
	CGPoint m_brushOrg;	// 60 = 0x3c
	CGPoint m_penPos;	// 68 = 0x44
	int m_arcDirection;	// 76 = 0x4c
	int m_polyFillMode;	// 80 = 0x50
	MFTransform *m_transform;	// 84 = 0x54
	MFPen *m_pen;	// 88 = 0x58
	MFBrush *m_brush;	// 92 = 0x5c
	MFPalette *m_selectedPalette;	// 96 = 0x60
	int m_rop2;	// 100 = 0x64
	int m_stretchMode;	// 104 = 0x68
	MFPath *m_path;	// 108 = 0x6c
}
+ (id)deviceContextWithDriver:(id)driver;	// 0x34c3e5bd
- (id)initWithDriver:(id)driver;	// 0x34aa594d
- (id).cxx_construct;	// 0x34aa5949
- (id)copyWithZone:(NSZone *)zone;	// 0x34b2f045
- (void)dealloc;	// 0x34aaa571
- (int)getArcDirection;	// 0x34b2f65d
- (id)getBkColour;	// 0x34b2f5c5
- (int)getBkMode;	// 0x34b2f611
- (id)getBrush;	// 0x34b2e1f9
- (CGPoint)getBrushOrg;	// 0x34b2f621
- (id)getCurrentTransform;	// 0x34aa7cb9
- (id)getFont;	// 0x34b2f64d
- (double)getMiterLimit;	// 0x34b2f48d
- (id)getPath;	// 0x34aa8da1
- (id)getPen;	// 0x34b2e429
- (CGPoint)getPenPosition;	// 0x34b2f43d
- (int)getPolyFillMode;	// 0x34b2e335
- (int)getRop2;	// 0x34b2e3a5
- (id)getSelectedPalette;	// 0x34b2fadd
- (int)getStretchBltMode;	// 0x34b2f67d
- (int)getTextBreakCount;	// 0x34b2f575
- (int)getTextBreakExtra;	// 0x34b2f565
- (int)getTextCharExtra;	// 0x34b2f5a5
- (id)getTextColour;	// 0x34b2f519
- (int)getTextDirection;	// 0x34b2f4f9
- (int)getTextHorizontalAlign;	// 0x34b2f4b9
- (bool)getTextUpdateCP;	// 0x34b2f469
- (int)getTextVerticalAlign;	// 0x34b2f4d9
- (void)setArcDirection:(int)direction;	// 0x34b2f66d
- (void)setBkColour:(id)colour;	// 0x34b2f5d5
- (void)setBkMode:(int)mode;	// 0x34b2eeed
- (void)setBrush:(id)brush;	// 0x34aa9cd5
- (void)setBrushOrg:(CGPoint)org;	// 0x34b2f639
- (void)setCurrentTransform:(id)transform;	// 0x34b2faa1
- (void)setFont:(id)font;	// 0x34b2ee49
- (void)setMiterLimit:(double)limit;	// 0x34b2f4a5
- (void)setPath:(id)path;	// 0x34b2fbbd
- (void)setPen:(id)pen;	// 0x34aa9c79
- (void)setPenPosition:(CGPoint)position;	// 0x34b2f455
- (void)setPolyFillMode:(int)mode;	// 0x34b2dfd9
- (void)setRop2:(int)a2;	// 0x34b2faed
- (void)setSelectedPalette:(id)palette;	// 0x34aa9d95
- (void)setStretchBltMode:(int)mode;	// 0x34b2f68d
- (void)setTextCharExtra:(int)extra;	// 0x34b2f5b5
- (void)setTextColour:(id)colour;	// 0x34b2f529
- (void)setTextDirection:(int)direction;	// 0x34b2f509
- (void)setTextHorizontalAlign:(int)align;	// 0x34b2f4c9
- (void)setTextJustification:(int)justification :(int)arg2;	// 0x34b2f585
- (void)setTextUpdateCP:(bool)cp;	// 0x34b2f47d
- (void)setTextVerticalAlign:(int)align;	// 0x34b2f4e9
@end
