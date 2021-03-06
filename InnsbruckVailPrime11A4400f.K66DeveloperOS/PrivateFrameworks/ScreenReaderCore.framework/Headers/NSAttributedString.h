/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSAttributedString.h>
#import "ScreenReaderCore-Structs.h"


@interface NSAttributedString (SCRCMathExpression)
+ (id)_scrcStringWithFormat:(id)format args:(void *)args;	// 0x3273583d
+ (id)scrcPauseString;	// 0x32735ca5
+ (id)scrcSpaceString;	// 0x32735cc1
+ (id)scrcString;	// 0x32735c6d
+ (id)scrcStringWithDollarCode:(id)dollarCode treePosition:(id)position;	// 0x32735c11
+ (id)scrcStringWithFormat:(id)format;	// 0x32735a35
+ (id)scrcStringWithLiteralString:(id)literalString;	// 0x32735af5
+ (id)scrcStringWithLiteralString:(id)literalString treePosition:(id)position;	// 0x32735b09
+ (id)scrcStringWithString:(id)string;	// 0x32735a61
+ (id)scrcStringWithString:(id)string treePosition:(id)position;	// 0x32735a75
- (BOOL)_scrcHasPauseCommaAtIndex:(unsigned)index;	// 0x32735f31
- (NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned)index;	// 0x327357d5
- (NSRange)_scrcRangeOfVanillaFormatSpecifier;	// 0x32735791
- (BOOL)scrcContainsPause;	// 0x32735fad
- (id)scrcStringByAddingAttribute:(id)attribute value:(id)value;	// 0x32735ebd
- (id)scrcStringByAppendingAttributedString:(id)string;	// 0x32735cdd
- (id)scrcStringByReplacingOccurrencesOfString:(id)string withString:(id)string2;	// 0x32735d95
@end

