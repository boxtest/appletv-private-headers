/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSRegularExpressionCheckingResult.h"
#import "Foundation-Structs.h"

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSRange _ranges[3];	// 8 = 0x8
}
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x355f888d; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x355f87b9
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x3554b93d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x355f88b5
- (void)dealloc;	// 0x3554baf1
- (unsigned)numberOfRanges;	// 0x355f8981
- (NSRange)range;	// 0x355f889d
- (id)rangeArray;	// 0x355f89b5
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x3554ba65
// converted property getter: - (id)regularExpression;	// 0x355f888d
@end

