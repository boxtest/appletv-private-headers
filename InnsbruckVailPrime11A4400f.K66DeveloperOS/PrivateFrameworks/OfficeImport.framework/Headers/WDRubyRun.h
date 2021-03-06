/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDCharacterRun.h"

@class WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {
	WDCharacterRun *mPhoneticRun;	// 20 = 0x14
	WDRubyProperties *mRubyProperties;	// 24 = 0x18
}
@property(retain) id phoneticRunString;	// G=0x3199e079; S=0x3199e099; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x3199dfb1
- (void)appendPhoneticRunString:(id)string;	// 0x3199e0b9
- (void)dealloc;	// 0x3199df6d
- (id)phoneticRun;	// 0x3199e069
// converted property getter: - (id)phoneticRunString;	// 0x3199e079
- (id)rubyBase;	// 0x3199e0d9
- (id)rubyProperties;	// 0x3199e059
- (int)runType;	// 0x3199e055
// converted property setter: - (void)setPhoneticRunString:(id)string;	// 0x3199e099
@end

