/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {
}
@property(readonly, assign) NSArray *rangeArray;	// G=0x3472a749; 
@property(readonly, assign) NSRegularExpression *regularExpression;	// G=0x3472a745; 
- (id)initWithCoder:(id)coder;	// 0x3472a881
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x3472a721
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x3472a6fd
- (id)description;	// 0x3472a74d
- (void)encodeWithCoder:(id)coder;	// 0x3472a7bd
// declared property getter: - (id)rangeArray;	// 0x3472a749
// declared property getter: - (id)regularExpression;	// 0x3472a745
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x3472a985
- (unsigned long long)resultType;	// 0x3472a97d
@end

