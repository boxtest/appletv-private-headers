/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDIterator.h"

@class NSArray;

@interface WDArrayIterator : WDIterator {
	NSArray *mArray;	// 4 = 0x4
	unsigned mNextIndex;	// 8 = 0x8
}
- (id)initWithArray:(id)array;	// 0x35107db5
- (BOOL)hasNext;	// 0x35107e05
- (id)next;	// 0x35107e41
@end

