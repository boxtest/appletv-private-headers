/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEOSearchProvider : NSObject {
	id _error;	// 4 = 0x4
}
@property(copy, nonatomic) id error;	// G=0x37956439; S=0x3794d4b1; @synthesize=_error
+ (unsigned short)provider;	// 0x3797d121
- (void)cancel;	// 0x3797d129
- (void)dealloc;	// 0x37950d59
// declared property getter: - (id)error;	// 0x37956439
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error isCompletions:(BOOL)completions;	// 0x3797d125
// declared property setter: - (void)setError:(id)error;	// 0x3794d4b1
@end

