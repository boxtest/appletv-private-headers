/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDFont, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSymbol : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	WDFont *mFont;	// 12 = 0xc
	unsigned short mCharacter;	// 16 = 0x10
}
@property(assign) unsigned short character;	// G=0x35699bd1; S=0x35699b29; converted property
@property(retain) id font;	// G=0x35699be1; S=0x35699ae9; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x35699661
// converted property getter: - (unsigned short)character;	// 0x35699bd1
- (void)clearProperties;	// 0x3577692d
- (void)dealloc;	// 0x35699e55
// converted property getter: - (id)font;	// 0x35699be1
- (id)properties;	// 0x35699a05
- (int)runType;	// 0x35699b45
// converted property setter: - (void)setCharacter:(unsigned short)character;	// 0x35699b29
// converted property setter: - (void)setFont:(id)font;	// 0x35699ae9
@end
