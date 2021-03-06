/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSURL *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x35ebf621; converted property
- (id)initWithCoder:(id)coder;	// 0x35ebf4f1
- (id)initWithRange:(NSRange)range URL:(id)url;	// 0x35ebf345
- (id)URL;	// 0x35ebf7e5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x35ebf749
- (void)dealloc;	// 0x35ebf3ad
- (id)description;	// 0x35ebf3f9
- (void)encodeWithCoder:(id)coder;	// 0x35ebf469
// converted property getter: - (NSRange)range;	// 0x35ebf621
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x35ebf63d
- (unsigned long long)resultType;	// 0x35ebf619
@end

