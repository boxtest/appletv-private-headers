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


@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSRange range;	// G=0x310ebdbd; 
@property(readonly, assign) unsigned long long resultType;	// G=0x310ebd95; 
+ (id)addressCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x310ec0a1
+ (id)correctionCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x310ec245
+ (id)dashCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x310ec19d
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date;	// 0x310ebfed
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x310ec041
+ (id)grammarCheckingResultWithRange:(NSRange)range details:(id)details;	// 0x310ebf99
+ (void)initialize;	// 0x310eba85
+ (id)linkCheckingResultWithRange:(NSRange)range URL:(id)url;	// 0x310ec0f5
+ (id)orthographyCheckingResultWithRange:(NSRange)range orthography:(id)orthography;	// 0x310ebef9
+ (id)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(id)number;	// 0x310ec375
+ (id)quoteCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x310ec149
+ (id)regularExpressionCheckingResultWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x310ec299
+ (id)replacementCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x310ec1f1
+ (id)spellCheckingResultWithRange:(NSRange)range;	// 0x310ebf4d
+ (id)transitInformationCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x310ec3c9
- (id)initWithCoder:(id)coder;	// 0x310ebb89
- (id)URL;	// 0x310ebee5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310ebe0d
- (id)addressComponents;	// 0x310ebed1
- (id)components;	// 0x310ebee1
- (id)copyWithZone:(NSZone *)zone;	// 0x310ebac5
- (id)date;	// 0x310ebeb5
- (NSRange)decodeRangeWithCoder:(id)coder;	// 0x310ebc5d
- (id)description;	// 0x310ebad5
- (double)duration;	// 0x310ebebd
- (void)encodeRangeWithCoder:(id)coder;	// 0x310ebbad
- (void)encodeWithCoder:(id)coder;	// 0x310ebb65
- (id)grammarDetails;	// 0x310ebeb1
- (unsigned)numberOfRanges;	// 0x310ebe11
- (id)orthography;	// 0x310ebead
- (id)phoneNumber;	// 0x310ebef1
// declared property getter: - (NSRange)range;	// 0x310ebdbd
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x310ebe15
- (id)regularExpression;	// 0x310ebeed
- (id)replacementString;	// 0x310ebee9
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310ebde9
// declared property getter: - (unsigned long long)resultType;	// 0x310ebd95
- (id)timeZone;	// 0x310ebeb9
- (void *)underlyingResult;	// 0x310ebef5
@end
