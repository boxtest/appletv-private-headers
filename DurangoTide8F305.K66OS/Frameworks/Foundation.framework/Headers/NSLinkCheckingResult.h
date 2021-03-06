/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSURL *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x3280852d; converted property
- (id)initWithCoder:(id)coder;	// 0x3280bd55
- (id)initWithRange:(NSRange)range URL:(id)url;	// 0x328099b9
- (id)URL;	// 0x32808545
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x3280ade9
- (void)dealloc;	// 0x32809971
- (id)description;	// 0x328098fd
- (void)encodeWithCoder:(id)coder;	// 0x32808b79
// converted property getter: - (NSRange)range;	// 0x3280852d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x3280ae8d
- (unsigned long long)resultType;	// 0x32808525
@end

