/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"


@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x30330861
+ (id)allocWithZone:(NSZone *)zone;	// 0x30270d3d
- (id)initWithCoder:(id)coder;	// 0x30272939
- (unsigned long)_cfTypeID;	// 0x30354141
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x30354145
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x303308b9
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x30330d85
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x30330a0d
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x302768f5
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x303308ed
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x30330895
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x30275071
- (Class)classForCoder;	// 0x303310a5
- (id)copyWithZone:(NSZone *)zone;	// 0x30276a71
- (id)description;	// 0x30330c7d
- (void)encodeWithCoder:(id)coder;	// 0x303310c1
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x30330f81
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x30330e79
- (unsigned)hash;	// 0x30330abd
- (BOOL)isEqual:(id)equal;	// 0x30330ae5
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x30330b41
- (unsigned)length;	// 0x30330a95
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30330c45
- (id)string;	// 0x30330871
@end

