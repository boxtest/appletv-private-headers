/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSTypesetter : NSObject {
	void *_reserved;	// 4 = 0x4
}
@property(retain) id attributedString;	// G=0x368d181d; S=0x368d17ed; converted property
@property(assign) BOOL bidiProcessingEnabled;	// G=0x368d1711; S=0x368d1741; converted property
@property(assign) float hyphenationFactor;	// G=0x368d146d; S=0x368d1499; converted property
@property(assign) float lineFragmentPadding;	// G=0x368d14d9; S=0x368d1509; converted property
@property(assign) float tightenThresholdForTruncation;	// G=0x368d1781; S=0x368d17ad; converted property
@property(assign) int typesetterBehavior;	// G=0x368d1405; S=0x368d1435; converted property
@property(assign) BOOL usesFontLeading;	// G=0x368d1395; S=0x368d13c5; converted property
+ (BOOL)_usesATSTypesetter;	// 0x368d0ab5
+ (int)defaultStringDrawingTypesetterBehavior;	// 0x368d0add
+ (int)defaultTypesetterBehavior;	// 0x368d0acd
+ (void)initialize;	// 0x368d08b9
+ (id)sharedSystemTypesetter;	// 0x368d0b09
+ (id)sharedSystemTypesetterForBehavior:(int)behavior;	// 0x368d0aed
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x368d0b25
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x368d1315
- (id)_ellipsisFontForFont:(id)font;	// 0x368d1331
- (BOOL)_forceOriginalFontBaseline;	// 0x368d0c71
- (XXStruct__MnFEB *)_getAuxData;	// 0x368d0b45
- (unsigned)_getRemainingNominalParagraphRange:(NSRange *)range andParagraphSeparatorRange:(NSRange *)range2 charactarIndex:(unsigned)index layoutManager:(id)manager string:(id)string;	// 0x368d0ce1
- (void)_layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments maxCharacterIndex:(unsigned)index nextGlyphIndex:(unsigned *)index5 nextCharacterIndex:(unsigned *)index6;	// 0x368d281d
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x368d130d
- (void)_setForceOriginalFontBaseline:(BOOL)baseline;	// 0x368d0ca1
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x368d1311
- (void)_updateParagraphStyleCache:(id)cache;	// 0x368d1115
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x368d275d
// converted property getter: - (id)attributedString;	// 0x368d181d
- (id)attributesForExtraLineFragment;	// 0x368d2711
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x368d4a79
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x368d1b89
- (void)beginParagraph;	// 0x368d1a75
// converted property getter: - (BOOL)bidiProcessingEnabled;	// 0x368d1711
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x368d4d61
- (id)currentParagraphStyle;	// 0x368d1e09
- (id)currentTextContainer;	// 0x368d1dd9
- (void)dealloc;	// 0x368d0bb5
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x368d5e45
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x368d1c19
- (void)endParagraph;	// 0x368d1b51
- (void)finalize;	// 0x368d0c29
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x368d4ec1
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 forParagraphSeparatorGlyphRange:(NSRange)paragraphSeparatorGlyphRange atProposedOrigin:(CGPoint)proposedOrigin;	// 0x368d1e71
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 remainingRect:(CGRect *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x368d4f11
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x368d4e11
// converted property getter: - (float)hyphenationFactor;	// 0x368d146d
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x368d5dc9
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x368d499d
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x368d4941
- (id)layoutManager;	// 0x368d1d79
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x368d1a25
// converted property getter: - (float)lineFragmentPadding;	// 0x368d14d9
- (float)lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x368d1c89
- (NSRange)paragraphCharacterRange;	// 0x368d19b5
- (NSRange)paragraphGlyphRange;	// 0x368d1945
- (NSRange)paragraphSeparatorCharacterRange;	// 0x368d19ed
- (NSRange)paragraphSeparatorGlyphRange;	// 0x368d197d
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x368d1d49
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x368d1d09
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x368d6079
// converted property setter: - (void)setAttributedString:(id)string;	// 0x368d17ed
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x368d60d9
// converted property setter: - (void)setBidiProcessingEnabled:(BOOL)enabled;	// 0x368d1741
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x368d5f51
- (void)setHardInvalidation:(BOOL)invalidation forGlyphRange:(NSRange)glyphRange;	// 0x368d1e39
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x368d1499
// converted property setter: - (void)setLineFragmentPadding:(float)padding;	// 0x368d1509
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x368d5c89
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x368d5fed
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x368d5eb5
- (void)setParagraphGlyphRange:(NSRange)range separatorGlyphRange:(NSRange)range2;	// 0x368d184d
// converted property setter: - (void)setTightenThresholdForTruncation:(float)truncation;	// 0x368d17ad
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x368d1435
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x368d13c5
- (id)substituteFontForFont:(id)font;	// 0x368d1549
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x368d5d61
- (id)textContainers;	// 0x368d1da9
- (id)textTabForGlyphLocation:(float)glyphLocation writingDirection:(int)direction maxLocation:(float)location;	// 0x368d157d
// converted property getter: - (float)tightenThresholdForTruncation;	// 0x368d1781
// converted property getter: - (int)typesetterBehavior;	// 0x368d1405
// converted property getter: - (BOOL)usesFontLeading;	// 0x368d1395
@end

