/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSSimpleAttributeDictionary : NSDictionary {
@private
	unsigned numElements;	// 4 = 0x4
	unsigned refCount;	// 8 = 0x8
	NSSimpleAttributeDictionaryElement elements[1];	// 12 = 0xc
}
+ (id)emptyAttributeDictionary;	// 0x31a05555
+ (id)newWithDictionary:(id)dictionary;	// 0x31a061ad
- (id)copyWithZone:(NSZone *)zone;	// 0x31acab75
- (unsigned)count;	// 0x31aca991
- (void)dealloc;	// 0x31aca9ed
- (void)finalize;	// 0x31acaa75
- (id)keyEnumerator;	// 0x31aca9a1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31acaaa1
- (id)newWithKey:(id)key object:(id)object;	// 0x31aca701
- (id)objectForKey:(id)key;	// 0x31a06d31
- (unsigned)slotForKey:(id)key;	// 0x31a06d71
@end
