/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mType;	// 12 = 0xc
}
@property(assign) int characterType;	// G=0x34ab5eb1; S=0x3498f555; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x3498f231
// converted property getter: - (int)characterType;	// 0x34ab5eb1
- (void)clearProperties;	// 0x34ab5e85
- (void)dealloc;	// 0x3498f805
- (id)properties;	// 0x3498f545
- (int)runType;	// 0x349b18ed
// converted property setter: - (void)setCharacterType:(int)type;	// 0x3498f555
@end
