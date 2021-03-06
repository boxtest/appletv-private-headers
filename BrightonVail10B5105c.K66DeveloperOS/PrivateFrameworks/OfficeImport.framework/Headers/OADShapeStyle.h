/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {
	OADStyleMatrixReference *mLineReference;	// 4 = 0x4
	OADStyleMatrixReference *mFillReference;	// 8 = 0x8
	OADStyleMatrixReference *mEffectReference;	// 12 = 0xc
	OADFontReference *mFontReference;	// 16 = 0x10
}
@property(retain) id effectReference;	// G=0x37af646d; S=0x379e1f29; converted property
@property(retain) id fillReference;	// G=0x37a09ab9; S=0x379e1eed; converted property
@property(retain) id fontReference;	// G=0x37a3c03d; S=0x379e1f65; converted property
@property(retain) id lineReference;	// G=0x37a09ad9; S=0x379e1e85; converted property
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix;	// 0x379e1fa1
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix useNull:(BOOL)null strokeWidthMultiplier:(float)multiplier;	// 0x379e1fc5
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x379e5309
- (void)applyToTextBody:(id)textBody;	// 0x379e5259
- (void)applyToTextListStyle:(id)textListStyle;	// 0x379ff925
- (id)copyWithZone:(NSZone *)zone;	// 0x37a096d5
- (void)dealloc;	// 0x379e2941
// converted property getter: - (id)effectReference;	// 0x37af646d
// converted property getter: - (id)fillReference;	// 0x37a09ab9
// converted property getter: - (id)fontReference;	// 0x37a3c03d
// converted property getter: - (id)lineReference;	// 0x37a09ad9
- (void)setEffectMatrixIndex:(unsigned long)index color:(id)color;	// 0x37a71f71
// converted property setter: - (void)setEffectReference:(id)reference;	// 0x379e1f29
- (void)setFillMatrixIndex:(unsigned long)index color:(id)color;	// 0x37a40efd
// converted property setter: - (void)setFillReference:(id)reference;	// 0x379e1eed
// converted property setter: - (void)setFontReference:(id)reference;	// 0x379e1f65
- (void)setLineMatrixIndex:(unsigned long)index color:(id)color;	// 0x37a410d1
// converted property setter: - (void)setLineReference:(id)reference;	// 0x379e1e85
@end

