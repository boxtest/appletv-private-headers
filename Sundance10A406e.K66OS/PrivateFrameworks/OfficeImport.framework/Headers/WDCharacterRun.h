/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, NSMutableString;

@interface WDCharacterRun : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSMutableString *mString;	// 12 = 0xc
	BOOL mBinaryWriterContentFlag;	// 16 = 0x10
}
@property(assign) BOOL binaryWriterContentFlag;	// G=0x350e2c09; S=0x350e2c1d; converted property
@property(retain) id string;	// G=0x34f58f05; S=0x34f47ced; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x34f45f89
- (id)initWithParagraph:(id)paragraph string:(id)string;	// 0x35106271
- (void)appendString:(id)string;	// 0x34f462a1
// converted property getter: - (BOOL)binaryWriterContentFlag;	// 0x350e2c09
- (void)clearProperties;	// 0x35106219
- (void)clearString;	// 0x35106245
- (void)copyPropertiesFrom:(id)from;	// 0x351062b1
- (void)dealloc;	// 0x34f5fcad
- (BOOL)isEmpty;	// 0x351062ed
- (id)properties;	// 0x34f462c1
- (void)removeLastCharacter:(unsigned short)character;	// 0x34f892b1
- (int)runType;	// 0x34f57a15
// converted property setter: - (void)setBinaryWriterContentFlag:(BOOL)flag;	// 0x350e2c1d
- (void)setPropertiesForDocument;	// 0x351061a9
// converted property setter: - (void)setString:(id)string;	// 0x34f47ced
// converted property getter: - (id)string;	// 0x34f58f05
@end

