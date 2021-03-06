/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDStyle, WDParagraphProperties, NSMutableArray, NSMutableDictionary, WDCharacterProperties;

@interface WDStyleSheet : NSObject {
	NSMutableDictionary *mStyleDictionary;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDCharacterProperties *mDefaultCharacterProperties;	// 12 = 0xc
	WDParagraphProperties *mDefaultParagraphProperties;	// 16 = 0x10
	WDStyle *mDefaultParagraphStyle;	// 20 = 0x14
	WDStyle *mDefaultCharacterStyle;	// 24 = 0x18
	WDStyle *mDefaultTableStyle;	// 28 = 0x1c
	WDStyle *mDefaultListStyle;	// 32 = 0x20
	NSMutableArray *mStylesInOrder;	// 36 = 0x24
	NSMutableDictionary *mIdDictionaryForName;	// 40 = 0x28
}
@property(retain) id defaultCharacterStyle;	// G=0x36c8073d; S=0x36aac219; converted property
@property(retain) id defaultListStyle;	// G=0x36aae94d; S=0x36aacfd1; converted property
@property(retain) id defaultParagraphStyle;	// G=0x36aa9465; S=0x36aa7c81; converted property
@property(retain) id defaultTableStyle;	// G=0x36c8074d; S=0x36aac481; converted property
- (id)initWithDocument:(id)document;	// 0x36a9ef0d
- (void)addStyle:(id)style name:(id)name;	// 0x36aabcbd
- (void)createDefaultStyles;	// 0x36c803f5
- (id)createStyleWithId:(id)anId type:(int)type;	// 0x36aa7445
- (id)createStyleWithName:(id)name type:(int)type;	// 0x36c8031d
- (void)dealloc;	// 0x36acee9d
- (id)defaultCharacterProperties;	// 0x36aa7de5
// converted property getter: - (id)defaultCharacterStyle;	// 0x36c8073d
// converted property getter: - (id)defaultListStyle;	// 0x36aae94d
- (id)defaultParagraphProperties;	// 0x36b6cb29
// converted property getter: - (id)defaultParagraphStyle;	// 0x36aa9465
// converted property getter: - (id)defaultTableStyle;	// 0x36c8074d
- (id)document;	// 0x36a9f641
- (void)initializeDefaultProperties;	// 0x36a9eff5
- (id)paragraphStyleWithStartingName:(id)startingName;	// 0x36c80259
- (void)removeStyleWithId:(id)anId;	// 0x36c80351
// converted property setter: - (void)setDefaultCharacterStyle:(id)style;	// 0x36aac219
// converted property setter: - (void)setDefaultListStyle:(id)style;	// 0x36aacfd1
// converted property setter: - (void)setDefaultParagraphStyle:(id)style;	// 0x36aa7c81
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x36aac481
- (void)setName:(id)name forId:(id)anId;	// 0x36aa7da5
- (int)styleCount;	// 0x36c80209
- (id)styleIdForName:(id)name;	// 0x36aabd15
- (id)styleNameToId:(id)anId;	// 0x36aec945
- (id)styleWithId:(id)anId;	// 0x36aad815
- (id)styleWithName:(id)name;	// 0x36c80229
- (id)styles;	// 0x36c801e9
@end

