/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString {
	unsigned _lengthAndRefCount;	// 4 = 0x4
	unsigned short _characters[0];	// 8 = 0x8
}
+ (id)pathStoreWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x35500b31
+ (id)pathWithComponents:(id)components;	// 0x3552ddb9
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x35509235
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x35527c21
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3550aacd
- (id)copyWithZone:(NSZone *)zone;	// 0x3550ac11
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x35500689
- (unsigned)hash;	// 0x355164e1
- (BOOL)isAbsolutePath;	// 0x3550aa95
- (BOOL)isEqualToString:(id)string;	// 0x35500bed
- (id)lastPathComponent;	// 0x35519dd5
- (unsigned)length;	// 0x3550066d
- (id)pathComponents;	// 0x3559b6a1
- (id)pathExtension;	// 0x35519945
- (id)stringByAbbreviatingWithTildeInPath;	// 0x3559b6c5
- (id)stringByAppendingPathComponent:(id)component;	// 0x35507021
- (id)stringByAppendingPathExtension:(id)extension;	// 0x35519bb5
- (id)stringByDeletingLastPathComponent;	// 0x35509c9d
- (id)stringByDeletingPathExtension;	// 0x35514b71
- (id)stringByExpandingTildeInPath;	// 0x355355b9
- (id)stringByResolvingSymlinksInPath;	// 0x35509221
- (id)stringByStandardizingPath;	// 0x35527c0d
@end

