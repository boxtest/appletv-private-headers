/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject {
@private
	OADTextBodyProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mParagraphs;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x30be5ed9; S=0x30df37e5; converted property
- (id)init;	// 0x30bec565
- (id)addParagraph;	// 0x30c61995
- (void)addParagraphsFromTextBody:(id)textBody;	// 0x30e9d09d
- (void)applyTextListStyle:(id)style;	// 0x30e8a675
- (void)dealloc;	// 0x30c642ad
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x30c661b1
- (void)flattenProperties;	// 0x30e8a541
- (BOOL)isEmpty;	// 0x30cabbc9
- (id)overrideTextListStyle;	// 0x30ca6955
- (id)paragraphAtIndex:(unsigned)index;	// 0x30be6619
- (unsigned)paragraphCount;	// 0x30be65f9
- (id)plainText;	// 0x30daff8d
// converted property getter: - (id)properties;	// 0x30be5ed9
- (void)removeAllParagraphs;	// 0x30e8a711
- (void)removeTrailingNewlines;	// 0x30e8a5f5
- (void)removeUnnecessaryOverrides;	// 0x30c66e5d
- (void)setParentTextListStyle:(id)style;	// 0x30c66901
// converted property setter: - (void)setProperties:(id)properties;	// 0x30df37e5
- (id)textListStyle;	// 0x30c668cd
@end
