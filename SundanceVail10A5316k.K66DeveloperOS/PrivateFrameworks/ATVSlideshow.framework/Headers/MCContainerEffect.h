/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCActionSupport.h"
#import "MCContainer.h"

@class NSArray, NSSet, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
@private
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mTexts;	// 32 = 0x20
	NSMutableDictionary *mActions;	// 36 = 0x24
	NSMutableDictionary *mEffectAttributes;	// 40 = 0x28
	NSString *mEffectID;	// 44 = 0x2c
	BOOL mIsLive;	// 48 = 0x30
}
@property(readonly, assign) NSDictionary *actions;	// G=0x3653e9a5; 
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x3653eaf5; 
@property(readonly, assign, nonatomic) unsigned countOfSlides;	// G=0x3653a509; 
@property(readonly, assign, nonatomic) unsigned countOfTexts;	// G=0x3653c5fd; 
@property(copy) NSDictionary *effectAttributes;	// G=0x3653e309; S=0x3653e3e1; 
@property(copy) NSString *effectID;	// G=0x3653e4f1; S=0x3653e505; @synthesize=mEffectID
@property(assign, nonatomic) BOOL isLive;	// G=0x3653e529; S=0x3653e539; @synthesize=mIsLive
@property(readonly, assign, nonatomic) unsigned nextAvailableSlideIndex;	// G=0x3653a5d5; 
@property(readonly, assign, nonatomic) unsigned nextAvailableTextIndex;	// G=0x3653c6c9; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0x3653a331; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x3653c449; 
@property(readonly, assign) NSSet *slides;	// G=0x3653a205; 
@property(readonly, assign) NSSet *texts;	// G=0x3653c31d; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x36539629
- (void)initActionsWithImprints:(id)imprints;	// 0x3653e549
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x365396e5
- (id)actionForKey:(id)key;	// 0x3653ebf9
// declared property getter: - (id)actions;	// 0x3653e9a5
- (void)addEffectAttributes:(id)attributes;	// 0x3653e19d
- (id)addSlide;	// 0x3653aa51
- (id)addSlideForAsset:(id)asset;	// 0x3653b1b5
- (id)addSlideForContainer:(id)container;	// 0x3653b7b9
- (id)addSlides:(int)slides;	// 0x3653aa7d
- (id)addSlidesForAssets:(id)assets;	// 0x3653b245
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x3653cbdd
- (id)addTextForAttributedString:(id)attributedString;	// 0x3653cb45
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x3653cc49
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x3653cba9
// declared property getter: - (unsigned)countOfActions;	// 0x3653eaf5
// declared property getter: - (unsigned)countOfSlides;	// 0x3653a509
// declared property getter: - (unsigned)countOfTexts;	// 0x3653c5fd
- (void)demolish;	// 0x36539aed
- (void)demolishActions;	// 0x3653e6a5
- (id)effectAttributeForKey:(id)key;	// 0x3653df2d
// declared property getter: - (id)effectAttributes;	// 0x3653e309
// declared property getter: - (id)effectID;	// 0x3653e4f1
- (id)imprint;	// 0x36539ead
- (id)imprintsForActions;	// 0x3653e88d
- (id)insertSlideAtIndex:(int)index;	// 0x3653ade5
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x3653b279
- (id)insertSlideForContainer:(id)container atIndex:(unsigned)index;	// 0x3653b7ed
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x3653b2f9
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x3653d205
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x3653cc85
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x3653d25d
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x3653ccd5
// declared property getter: - (BOOL)isLive;	// 0x3653e529
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3653c049
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3653dc5d
// declared property getter: - (unsigned)nextAvailableSlideIndex;	// 0x3653a5d5
// declared property getter: - (unsigned)nextAvailableTextIndex;	// 0x3653c6c9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3653a18d
// declared property getter: - (id)orderedSlides;	// 0x3653a331
// declared property getter: - (id)orderedTexts;	// 0x3653c449
- (void)removeActionForKey:(id)key;	// 0x3653eea1
- (void)removeAllActions;	// 0x3653efb1
- (void)removeAllSlides;	// 0x3653bff5
- (void)removeAllTexts;	// 0x3653dc09
- (void)removeSlidesAtIndices:(id)indices;	// 0x3653bc05
- (void)removeTextsAtIndices:(id)indices;	// 0x3653d7a9
- (void)setAction:(id)action forKey:(id)key;	// 0x3653ed2d
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x3653e029
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x3653e3e1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x3653e505
// declared property setter: - (void)setIsLive:(BOOL)live;	// 0x3653e539
- (id)slideAtIndex:(unsigned)index;	// 0x3653a811
// declared property getter: - (id)slides;	// 0x3653a205
- (id)textAtIndex:(unsigned)index;	// 0x3653c905
// declared property getter: - (id)texts;	// 0x3653c31d
@end
