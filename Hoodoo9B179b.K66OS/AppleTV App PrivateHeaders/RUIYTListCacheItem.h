/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

__attribute__((visibility("hidden")))
@interface RUIYTListCacheItem : XXUnknownSuperclass {
	NSDate *_creationDate;	// 4 = 0x4
	id _results;	// 8 = 0x8
	double _timeInterval;	// 12 = 0xc
}
@property(retain) id results;	// G=0xa8d29; S=0xa8d3d; @synthesize=_results
@property(assign) double timeInterval;	// G=0xa8d61; S=0xa8d95; @synthesize=_timeInterval
- (id)init;	// 0xa8c09
- (void).cxx_destruct;	// 0xa8dc9
- (BOOL)hasExpired;	// 0xa8c81
// declared property getter: - (id)results;	// 0xa8d29
// declared property setter: - (void)setResults:(id)results;	// 0xa8d3d
// declared property setter: - (void)setTimeInterval:(double)interval;	// 0xa8d95
// declared property getter: - (double)timeInterval;	// 0xa8d61
@end
