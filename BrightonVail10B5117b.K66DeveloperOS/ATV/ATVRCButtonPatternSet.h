/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVRCButtonPatternSet : XXUnknownSuperclass {
	NSArray *_commandPattern;	// 4 = 0x4
	NSArray *_repeatPattern;	// 8 = 0x8
	double _maxRepeatInterval;	// 12 = 0xc
}
@property(retain) NSArray *commandPattern;	// G=0x2301f9; S=0x230181; converted property
@property(assign) double maxRepeatInterval;	// G=0x23022d; S=0x230219; converted property
@property(retain) NSArray *repeatPattern;	// G=0x230209; S=0x2301bd; converted property
- (id)initWithDictionary:(id)dictionary;	// 0x230009
- (id)_decodePatternFromDictionary:(id)dictionary;	// 0x2307f1
- (id)_encodePatternToDictionary:(id)dictionary;	// 0x230689
- (void)clear;	// 0x2302a9
// converted property getter: - (id)commandPattern;	// 0x2301f9
- (void)dealloc;	// 0x23011d
- (id)description;	// 0x2303e1
- (id)encodeToDictionary;	// 0x2302f9
- (BOOL)isEqual:(id)equal;	// 0x230541
- (BOOL)isOneShot;	// 0x230245
- (BOOL)isValid;	// 0x230291
// converted property getter: - (double)maxRepeatInterval;	// 0x23022d
// converted property getter: - (id)repeatPattern;	// 0x230209
// converted property setter: - (void)setCommandPattern:(id)pattern;	// 0x230181
// converted property setter: - (void)setMaxRepeatInterval:(double)interval;	// 0x230219
// converted property setter: - (void)setRepeatPattern:(id)pattern;	// 0x2301bd
@end

