/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject {
	int _retainCountMinusOne;	// 4 = 0x4
	NSArray *_observances;	// 8 = 0x8
	unsigned _cachedHash;	// 12 = 0xc
	BOOL _cachedIsShareable;	// 16 = 0x10
	NSHashTable *_observables;	// 20 = 0x14
}
- (id)_initWithObservances:(id *)observances count:(unsigned)count;	// 0x32519b0d
- (BOOL)_isDeallocating;	// 0x32588f79
- (BOOL)_tryRetain;	// 0x32588f29
- (void)dealloc;	// 0x32523301
- (id)description;	// 0x3258909d
- (unsigned)hash;	// 0x32588fa5
- (BOOL)isEqual:(id)equal;	// 0x32588fb5
- (oneway void)release;	// 0x3251a235
- (id)retain;	// 0x32519f6d
- (unsigned)retainCount;	// 0x32588f15
@end
