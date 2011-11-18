/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorage.h"


__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage : _CTGlyphStorage {
@private
	const int *_attachCounts;	// 24 = 0x18
	unsigned _retainCount;	// 28 = 0x1c
	GlyphStack *_stack;	// 32 = 0x20
	long _capacity;	// 36 = 0x24
	void *_preallocatedStorage;	// 40 = 0x28
}
@property(readonly, assign) unsigned retainCount;	// G=0x336d2819; converted property
+ (id)newWithCount:(long)count;	// 0x336ad6e1
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x336d2bc1
- (id)initWithCount:(long)count;	// 0x336ad7bd
- (BOOL)_isDeallocating;	// 0x336d2815
- (BOOL)_tryRetain;	// 0x336d2811
- (long)attachmentCountAtIndex:(long)index;	// 0x336aed19
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x336d270d
- (void)dealloc;	// 0x336b42d1
- (void)finalize;	// 0x336d282d
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x336d29b1
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x336d2b11
- (void)popGlyphAtIndex:(long)index;	// 0x336d2cd9
- (void)prepareWithCapacity:(long)capacity preallocated:(bool)preallocated;	// 0x336ad861
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x336d296d
- (void)pushGlyphAtIndex:(long)index;	// 0x336d2c25
- (oneway void)release;	// 0x336b0d65
- (id)retain;	// 0x336aece1
// converted property getter: - (unsigned)retainCount;	// 0x336d2819
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x336d2935
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x336d28b9
- (void)setCapacity:(long)capacity;	// 0x336d2da1
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x336d291d
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x336d2905
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x336d2955
- (const int *)stringIndices;	// 0x336d28a5
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x336d2a1d
@end

