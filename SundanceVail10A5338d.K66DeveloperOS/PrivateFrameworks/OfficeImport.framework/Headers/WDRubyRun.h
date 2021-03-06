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
@property(retain) id phoneticRunString;	// G=0x33c54d99; S=0x33c54db9; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x33c54cd1
- (void)appendPhoneticRunString:(id)string;	// 0x33c54dd9
- (void)dealloc;	// 0x33c54c8d
- (id)phoneticRun;	// 0x33c54d89
// converted property getter: - (id)phoneticRunString;	// 0x33c54d99
- (id)rubyBase;	// 0x33c54df9
- (id)rubyProperties;	// 0x33c54d79
- (int)runType;	// 0x33c54d75
// converted property setter: - (void)setPhoneticRunString:(id)string;	// 0x33c54db9
@end

