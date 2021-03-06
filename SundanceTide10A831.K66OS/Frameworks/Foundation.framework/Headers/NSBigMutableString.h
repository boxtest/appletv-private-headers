/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSData;

@interface NSBigMutableString : NSMutableString {
	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	} flags;	// 4 = 0x4
	unsigned length;	// 8 = 0x8
	union {
		struct {
			NSData *data;
			char *dataBytes;
		} d;
		struct {
			CFStorageRef storage;
		} s;
	} contents;	// 12 = 0xc
}
@property(readonly, assign) unsigned length;	// G=0x32527285; converted property
+ (void)initialize;	// 0x3252723d
- (id)initWithStorage:(CFStorageRef)storage length:(unsigned)length isUnicode:(BOOL)unicode;	// 0x32552261
- (id)initWithString:(id)string;	// 0x32552219
- (void)_checkForInvalidMutationWithSelector:(SEL)selector;	// 0x32527851
- (BOOL)_copyStorage:(CFStorageRef *)storage encoding:(unsigned *)encoding;	// 0x325523c5
- (id)_createSubstringWithRange:(NSRange)range;	// 0x32552f69
- (BOOL)_getData:(id *)data encoding:(unsigned *)encoding;	// 0x32552371
- (BOOL)_isCString;	// 0x32552995
- (BOOL)_isMarkedAsImmutable;	// 0x3255235d
- (void)_markAsImmutable;	// 0x32552345
- (id)_newBigSubstringWithRange:(NSRange)range wantsMutable:(BOOL)aMutable zone:(NSZone *)zone;	// 0x32552acd
- (id)_newSmallImmutableSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x325529ad
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x32552e7d
- (BOOL)_setData:(id)data encoding:(unsigned)encoding;	// 0x32552571
- (BOOL)_setStorage:(CFStorageRef)storage encoding:(unsigned)encoding;	// 0x32552451
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x32527d6d
- (id)copyWithZone:(NSZone *)zone;	// 0x3255305d
- (void)dealloc;	// 0x325522e5
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x32527c29
// converted property getter: - (unsigned)length;	// 0x32527285
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32553091
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x325274b5
@end

