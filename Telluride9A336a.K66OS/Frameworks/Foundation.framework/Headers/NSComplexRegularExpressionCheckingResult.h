/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpressionCheckingResult.h"

@class NSArray, NSRegularExpression;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
@private
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSArray *_rangeArray;	// 8 = 0x8
}
@property(readonly, retain) NSArray *rangeArray;	// G=0x33735d81; converted property
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x33735b5d; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x33735a19
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x33735985
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x33735bb5
- (void)dealloc;	// 0x33735afd
- (unsigned)numberOfRanges;	// 0x33735d19
- (NSRange)range;	// 0x33735b6d
// converted property getter: - (id)rangeArray;	// 0x33735d81
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x33735d39
// converted property getter: - (id)regularExpression;	// 0x33735b5d
@end
