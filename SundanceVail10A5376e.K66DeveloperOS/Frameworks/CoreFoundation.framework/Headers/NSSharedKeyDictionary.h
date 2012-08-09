/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableDictionary.h"
#import "CoreFoundation-Structs.h"

@class NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary {
	NSSharedKeySet *_keyMap;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_values;	// 12 = 0xc
	/*function-pointer*/ void *_ifkIMP;	// 16 = 0x10
	NSMutableDictionary *_sideDic;	// 20 = 0x14
	unsigned long _mutations;	// 24 = 0x18
}
@property(readonly, assign) unsigned count;	// G=0x3569649d; converted property
+ (id)sharedKeyDictionaryWithKeySet:(id)keySet;	// 0x35696bbd
- (id)initWithCoder:(id)coder;	// 0x35697105
- (id)initWithKeySet:(id)keySet;	// 0x35696b3d
- (Class)classForCoder;	// 0x35696e9d
- (id)copyWithZone:(NSZone *)zone;	// 0x35696da9
// converted property getter: - (unsigned)count;	// 0x3569649d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3569743d
- (void)dealloc;	// 0x35696bf9
- (void)encodeWithCoder:(id)coder;	// 0x35696eb9
- (void)finalize;	// 0x35696ccd
- (id)keyEnumerator;	// 0x35696551
- (id)keySet;	// 0x35696b2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35696e8d
- (id)objectForKey:(id)key;	// 0x356964d1
- (void)removeObjectForKey:(id)key;	// 0x356969fd
- (void)setObject:(id)object forKey:(id)key;	// 0x3569686d
@end
