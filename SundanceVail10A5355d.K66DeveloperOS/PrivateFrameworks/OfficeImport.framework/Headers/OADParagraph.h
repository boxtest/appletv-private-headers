/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADCharacterProperties, OADParagraphProperties, NSMutableArray;

@interface OADParagraph : NSObject {
	OADParagraphProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mTextRuns;	// 8 = 0x8
	OADCharacterProperties *mParagraphEndCharacterProperties;	// 12 = 0xc
}
@property(retain) id paragraphEndCharacterProperties;	// G=0x31bee111; S=0x31dd1205; converted property
@property(retain) id properties;	// G=0x31becbc9; S=0x31dd110d; converted property
- (id)init;	// 0x31bec745
- (id)addDateTimeField;	// 0x31cbc549
- (id)addFooterField;	// 0x31cd96d5
- (id)addGenericTextField;	// 0x31dd1169
- (id)addRegularTextRun;	// 0x31bed0e1
- (id)addSlideNumberField;	// 0x31bee149
- (id)addTextLineBreak;	// 0x31bf8ea5
- (void)applyProperties:(id)properties;	// 0x31dd12bd
- (id)bulletCharacterProperties;	// 0x31dd1291
- (void)dealloc;	// 0x31c0bb01
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x31cd9a0d
- (BOOL)hasBulletCharacterProperties;	// 0x31dd1241
- (BOOL)isEmpty;	// 0x31bff3b5
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x31bee111
- (id)plainText;	// 0x31ce6e95
// converted property getter: - (id)properties;	// 0x31becbc9
- (void)removeAllTextRuns;	// 0x31dd1149
- (void)removeUnnecessaryOverrides;	// 0x31bf0bbd
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x31dd1205
- (void)setParentTextListStyle:(id)style;	// 0x31bee969
// converted property setter: - (void)setProperties:(id)properties;	// 0x31dd110d
- (id)textRunAtIndex:(unsigned)index;	// 0x31bed265
- (unsigned)textRunCount;	// 0x31bed0c1
@end

