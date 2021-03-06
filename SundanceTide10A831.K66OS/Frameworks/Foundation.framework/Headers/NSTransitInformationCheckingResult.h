/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x325facd1; converted property
@property(readonly, assign) NSRange range;	// G=0x325fab05; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x325face1; 
- (id)initWithCoder:(id)coder;	// 0x325fa9d1
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x325fa8b9
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x325fa825
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x325fac35
// converted property getter: - (id)components;	// 0x325facd1
- (void)dealloc;	// 0x325fa8dd
- (void)encodeWithCoder:(id)coder;	// 0x325fa941
// converted property getter: - (NSRange)range;	// 0x325fab05
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x325fab1d
- (unsigned long long)resultType;	// 0x325faafd
// declared property getter: - (void *)underlyingResult;	// 0x325face1
@end

