/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */



@protocol MPEffectSupport
@property(retain) id effectAttributes;	// converted property
@property(retain) id effectID;	// converted property
@property(retain) id presetID;	// converted property
@property(assign) int randomSeed;	// converted property
- (void)addSecondarySlide:(id)slide;
- (void)addSecondarySlides:(id)slides;
- (void)addSlide:(id)slide;
- (void)addSlides:(id)slides;
- (void)addText:(id)text;
- (void)addTexts:(id)texts;
- (id)effectAttributeForKey:(id)key;
// converted property getter: - (id)effectAttributes;
// converted property getter: - (id)effectID;
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;
- (void)insertSlides:(id)slides atIndex:(int)index;
- (void)insertTexts:(id)texts atIndex:(int)index;
- (double)mainDuration;
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;
- (double)phaseInDuration;
- (double)phaseOutDuration;
// converted property getter: - (id)presetID;
// converted property getter: - (int)randomSeed;
- (void)removeAllSecondarySlides;
- (void)removeAllSlides;
- (void)removeAllTexts;
- (void)removeSecondarySlidesAtIndices:(id)indices;
- (void)removeSlidesAtIndices:(id)indices;
- (void)removeTextsAtIndices:(id)indices;
- (id)secondarySlides;
- (void)setEffectAttribute:(id)attribute forKey:(id)key;
// converted property setter: - (void)setEffectAttributes:(id)attributes;
// converted property setter: - (void)setEffectID:(id)anId;
// converted property setter: - (void)setPresetID:(id)anId;
// converted property setter: - (void)setRandomSeed:(int)seed;
- (id)slides;
- (id)texts;
@end
