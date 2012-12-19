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
@property(retain) NSArray *commandPattern;	// G=0x232831; S=0x2327b9; converted property
@property(assign) double maxRepeatInterval;	// G=0x232865; S=0x232851; converted property
@property(retain) NSArray *repeatPattern;	// G=0x232841; S=0x2327f5; converted property
- (id)initWithDictionary:(id)dictionary;	// 0x232641
- (id)_decodePatternFromDictionary:(id)dictionary;	// 0x232e29
- (id)_encodePatternToDictionary:(id)dictionary;	// 0x232cc1
- (void)clear;	// 0x2328e1
// converted property getter: - (id)commandPattern;	// 0x232831
- (void)dealloc;	// 0x232755
- (id)description;	// 0x232a19
- (id)encodeToDictionary;	// 0x232931
- (BOOL)isEqual:(id)equal;	// 0x232b79
- (BOOL)isOneShot;	// 0x23287d
- (BOOL)isValid;	// 0x2328c9
// converted property getter: - (double)maxRepeatInterval;	// 0x232865
// converted property getter: - (id)repeatPattern;	// 0x232841
// converted property setter: - (void)setCommandPattern:(id)pattern;	// 0x2327b9
// converted property setter: - (void)setMaxRepeatInterval:(double)interval;	// 0x232851
// converted property setter: - (void)setRepeatPattern:(id)pattern;	// 0x2327f5
@end
