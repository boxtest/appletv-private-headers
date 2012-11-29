/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorageAdvanceLookup.h"
#import "_CTGlyphStorage.h"

@class CTGlyphStorageInterface;

@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
	CTGlyphStorageInterface *_interface;	// 24 = 0x18
}
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x3666fe09
- (id)initWithInterface:(id)interface;	// 0x3666fa39
- (long)attachmentCountAtIndex:(long)index;	// 0x3666fb91
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x3666fb35
- (CGSize)customAdvanceForIndex:(long)index;	// 0x3666fb65
- (void)disposeGlyphStack;	// 0x3666fe69
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x3666fcbd
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x3666fcfd
- (void)popGlyphAtIndex:(long)index;	// 0x3666fe49
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x3666fc5d
- (void)pushGlyphAtIndex:(long)index;	// 0x3666fe29
- (void *)refCon;	// 0x3666fb55
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x3666fc1d
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x3666fbbd
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x3666fbfd
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x3666fbdd
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x3666fc3d
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x3666fcdd
- (void)sync;	// 0x3666fd2d
@end
