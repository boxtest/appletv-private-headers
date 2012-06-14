/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
@private
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x31d0edb5
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x31d0edc9
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x31d0ee3d
- (id)copyWithZone:(NSZone *)zone;	// 0x31d12aa9
- (unsigned)count;	// 0x31dce459
- (void)dealloc;	// 0x31d10be9
- (id)description;	// 0x31dce46d
- (void)finalize;	// 0x31dce321
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31dce2dd
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31d10ead
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x31dce379
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x31dce415
@end
